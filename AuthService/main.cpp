#include <QCoreApplication>
#include "messages.pb.h"
#include "qsslserver.h"
#include <QObject>
#include <QDebug>

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

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    //testProtoSerialization();


    auto server = new QSslServer(&app);
    //emits newConnection just like the tcp variant
    QObject::connect( server, &QSslServer::newConnection
             , [server]()
    {
        while(server->hasPendingConnections())
        {
            auto socket = server->nextPendingConnection();
            //work with the new socket
            qDebug() << "new connection";
        }
    } );

    //load a certificate and private key, then start listening
    QString certificatePath = QStringLiteral("certs/server.p12");
    if(!server->importPkcs12(certificatePath))
        qCritical() << "Failed to import certificates";
    else
        server->listen(QHostAddress::Any, 4711);

    return app.exec();
}
