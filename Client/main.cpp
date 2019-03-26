#include <QCoreApplication>
#include <QtNetwork/QSslSocket>

#include "ClientConnection.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString address("127.0.0.1");
    quint16 port = 4749;
    ClientConnection conx;
    qDebug() << "Connecting to " << address << ":" << port;
    conx.TryConnect(address, port);

    return a.exec();
}
