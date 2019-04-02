#include "ServerConnection.h"
#include <QDebug>

ServerConnection::ServerConnection(QTcpSocket *sock)
    : socket(sock)
{
    connect(socket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error)
            , this, &ServerConnection::onSocketError);
}


void ServerConnection::onSocketError(QAbstractSocket::SocketError socketError)
{
    qDebug() << "Socket errors: " << socketError;

}
