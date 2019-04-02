#include <QCoreApplication>
#include <QtNetwork/QSslSocket>

#include "ClientConnection.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    if (!QSslSocket::supportsSsl())
//        qDebug() << "system support for Ssl not found";

    QString address("127.0.0.1");
    quint16 port = 4749;
    ClientConnection conx;
    qDebug() << "Connecting to " << address << ":" << port;
    conx.TryConnect(address, port);

    return a.exec();
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
