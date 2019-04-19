#include "Connection.h"
#include <QDebug>
#include <google/protobuf/io/coded_stream.h>


Frame::Frame(QByteArray& incomming)
    : PayloadSize(0)
    , RequestId(0)
    , MessageType(0)
    , completeFrame(false)
{
    if (incomming.size()<headerSize())
        return;

    uint8_t* data = (uint8_t*)incomming.data();
    google::protobuf::io::CodedInputStream::ReadLittleEndian32FromArray( data, &PayloadSize);
    data += sizeof (uint32_t);
    google::protobuf::io::CodedInputStream::ReadLittleEndian32FromArray( data, &RequestId);
    data += sizeof (uint32_t);
    google::protobuf::io::CodedInputStream::ReadLittleEndian32FromArray( data, &MessageType);

    if (PayloadSize>(16*1024))
    {
        error = "Payload appears larger than 16k. Possible data error";
        return;
    }
    int totalSize =  PayloadSize+headerSize();
    if (incomming.length()>=totalSize)
    {
        Bytes = incomming.left(totalSize);
        int remaining = incomming.size() - totalSize;
        incomming = incomming.right(remaining);
        completeFrame = true;
    }
}

Frame::Frame(uint32_t payloadSize, uint32_t requestId, uint32_t messageType)
    : PayloadSize(payloadSize)
    , RequestId(requestId)
    , MessageType(messageType)
    , Bytes(Frame::headerSize()+payloadSize,0)
{
    uint8_t* output = (uint8_t*) Bytes.data();
    output = google::protobuf::io::CodedOutputStream::WriteLittleEndian32ToArray(PayloadSize, output);
    output = google::protobuf::io::CodedOutputStream::WriteLittleEndian32ToArray(RequestId, output);
    output = google::protobuf::io::CodedOutputStream::WriteLittleEndian32ToArray(MessageType, output);
}

// -----------------------------------------------------

Connection::Connection(QObject* parent)
    : socket(nullptr)
    , descriptor(0)
    , lastRequestId(0)
{
    setParent(parent);
}

Connection::Connection(QObject* parent, qintptr sockHandle)
    : descriptor(sockHandle)
    , lastRequestId(0)
{
    setParent(parent);
    socket = new QTcpSocket(parent);
    connectSocketSignals();
    if (!socket->setSocketDescriptor(sockHandle))
    {
        descriptor=0;
    }
}

Connection::~Connection()
{
    if (socket)
    {
        socket->close();
        delete socket;
    }
}

void Connection::connectSocketSignals()
{
    connect(socket, &QTcpSocket::connected, this, &Connection::onConnected);
    connect(socket, &QTcpSocket::disconnected, this, &Connection::onDisconnected);
    connect(socket, &QTcpSocket::readyRead, this, &Connection::onReadyRead);
    connect(socket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error)
            , this, &Connection::onError);
}

void Connection::TryConnect(QString host, quint16 port)
{
    if (!socket)
    {
        socket = new QTcpSocket( parent() );
        connectSocketSignals();
    }
    socket->connectToHost(host, port);
}

void Connection::Send(google::protobuf::MessageLite* message, uint32_t reqType)
{
    lastRequestId++;
    int messageSize = message->ByteSize();

    Frame frame(messageSize, lastRequestId, reqType);

    uint8_t* buffer = (uint8_t*)frame.Bytes.data();
    buffer += Frame::headerSize();
    message->SerializeToArray( buffer, messageSize);
    socket->write( frame.Bytes );
}

void Connection::onConnected()
{
    qDebug() << "ready to transmit";
}

void Connection::onReadyRead()
{
    buffer.append( socket->readAll() );
    int available = buffer.size();
    if (available>=Frame::headerSize())
    {
        Frame frame( buffer );
        qDebug() << "Header size: " << frame.PayloadSize
                 << " type: " << frame.MessageType
                 << "Req.ID: " << frame.RequestId;

        if (!frame.error.isEmpty()) // 16k limit on message size
        {
            qDebug() << frame.error << " : " << frame.PayloadSize;
            socket->close();
        }
        if (frame.completeFrame)
        {
            emit MessageReceived(frame);
        }
    }
}

void Connection::onDisconnected()
{
    qDebug() << "closed (handle: " << socket->socketDescriptor() << ")";
}

void Connection::onError(QAbstractSocket::SocketError error)
{
    qDebug() << "onError: " << error;

}
/*
//==================
#include "messages.pb.h"
#include "MessageFactory.h"

typedef google::protobuf::uint8* BufferPointer;


void Connection::Send(google::protobuf::MessageLite *message, RequestType reqType)
{
    int messageSize = message->ByteSize();
    QByteArray bytes(messageSize+ Frame::size(), Qt::Uninitialized);
    uint8_t* buffer = (uint8_t*)bytes.data();

    message->SerializeToArray( payloadStart, messageSize);
...}


//----------------
//---onReadReady()
//generate message in a factory
auto msg = MessageFactory::CreateRequest(RequestType(frame.MessageType));

if (msg->ParseFromArray(cursor, frame.ByteSize))
{
    CreateUser* newUser = (CreateUser*)msg;
    qDebug() << "CreateUser:" << QString::fromStdString(newUser->user())
             << "email:" << QString::fromStdString( newUser->email() )
             << "user:" << QString::fromStdString( newUser->pass() );
}
else
{
}

*/
