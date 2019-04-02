#include <QCoreApplication>
#include "messages.pb.h"
#include "qsslserver.h"
#include <QObject>
#include <QDebug>
#include <ServerConnection.h>
#include <Listener.h>

void testProtoSerialization()
{
    qDebug() << "fill personOut fields";
    Person personOut;
    personOut.set_id(123456);
    personOut.set_name("Soleas");
    personOut.set_email("Sole@s.com");

    qDebug() << "serialize personOut to buffer";
    size_t size = personOut.ByteSizeLong();
    void *buffer = malloc(size);
    personOut.SerializeToArray(buffer, size);

    qDebug() <<"buffer size in bytes:" << size;

    qDebug() << "deserialize from buffer to personIn";
    Person personIn;
    personIn.ParseFromArray(buffer, size);

    qDebug() << "assert personOut matches personIn";
    assert(personIn.name()==personOut.name());
    assert(personIn.email()==personOut.email());
    assert(personIn.id()==personOut.id());

    qDebug() << "completed test";
    free(buffer);
}

bool StartListeningSsl(QObject* parent)
{
    auto server = new QSslServer(parent);
    //emits newConnection just like the tcp variant
    QObject::connect( server, &QSslServer::newConnection
             , [server]()
    {
        while(server->hasPendingConnections())
        {
            auto socket = server->nextPendingConnection();
            auto connection = new ServerConnection(socket);
            socket->startServerEncryption();
            //work with the new socket
            qDebug() << "new connection";
        }
    } );

    //load a certificate and private key, then start listening
    QString keyPath = QStringLiteral("certs/key.key");
    QString certPath = QStringLiteral("certs/key.pem");
    if(!server->importPem(keyPath, certPath))
    {
        qCritical() << "Failed to import certificates";
        return false;
    }
    else
    {
        qDebug() << "Listening for incomming connections.";
        server->listen(QHostAddress::Any, 4749);
        return true;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    //testProtoSerialization();
    //StartListeningSsl(&app);

    Listener server;
    server.listen(QHostAddress::Any, 4749);
    qDebug() << "Listening for incomming connections.";

    return app.exec();
}
