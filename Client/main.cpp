#include <QCoreApplication>
#include <QtNetwork/QSslSocket>

#include "Connection.h"
#include "MessageFactory.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

//    if (!QSslSocket::supportsSsl())
//        qDebug() << "system support for Ssl not found";

    QString address("127.0.0.1");
    quint16 port = 4749;
    Connection* conx = new Connection(&app);
    app.connect(&app, &QCoreApplication::aboutToQuit, [conx](){ delete conx;} );

    qDebug() << "Connecting to " << address << ":" << port;
    conx->TryConnect(address, port);

    QObject::connect(conx->socket, &QTcpSocket::connected, [conx](){
        qDebug() << "sending CreateUser request ";
        CreateUser* request = (CreateUser*)MessageFactory::CreateRequest(ROUTE_CreateUser);
        request->set_email("hamam@yolo.com");
        request->set_pass("fs4fj934WEE3kiu");
        request->set_user("mockingBird");
        request->set_mobilephonenumber("99087305");

        conx->Send(request, ROUTE_CreateUser);

    } );

    return app.exec();
}

/*
// https://stackoverflow.com/questions/31830836/qt-qsslsocket-the-certificate-is-self-signed-and-untrusted

//in server:

sslServer.setSslLocalCertificate("key.pem");
sslServer.setSslPrivateKey("key.key");
sslServer.setSslProtocol(QSsl::TlsV1_2);

//in client:

sslSocket.addCaCertificates("key.pem");
*/
