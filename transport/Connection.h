#ifndef CONNECTION_H
#define CONNECTION_H
#include <QObject>
#include <QtNetwork/QTcpSocket>
#include <QByteArray>
#include <google/protobuf/message_lite.h>

class Frame
{
public:
    Frame(QByteArray &incomming);
    Frame(uint32_t payloadSize, uint32_t requestId, uint32_t messageType);

    uint32_t PayloadSize, RequestId, MessageType;
    QByteArray Bytes;
    bool completeFrame;
    QString error;

    static int headerSize() { return 3*sizeof(uint32_t); }
};

class Connection : public QObject
{
    Q_OBJECT
public:
    Connection(QObject *parent);
    Connection(QObject *parent, qintptr sockHandle);
    virtual ~Connection();

    void TryConnect(QString host, quint16 port);
    void Send(google::protobuf::MessageLite* message, uint32_t reqType);

    QTcpSocket* socket;
signals:
    void MessageReceived(Frame frame);

private:
    qintptr    descriptor;
    QByteArray buffer;
    uint32_t   lastRequestId;

    void connectSocketSignals();

private slots:
    void onConnected();
    void onReadyRead();
    void onDisconnected();
    void onError(QAbstractSocket::SocketError error);

};

#endif // CONNECTION_H
