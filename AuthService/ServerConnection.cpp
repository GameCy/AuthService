#include "ServerConnection.h"
#include <QDebug>

ServerConnection::ServerConnection(QSslSocket *sock)
    : socket(sock)
{
    connect(socket, &QSslSocket::encrypted, this, &ServerConnection::onEncrypted);
    connect(socket, QOverload<const QList<QSslError> &>::of(&QSslSocket::sslErrors)
            , this, &ServerConnection::onSslErrors);

    connect(socket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error)
            , this, &ServerConnection::onSocketError);
}

void ServerConnection::onEncrypted()
{
    qDebug() << "Encrypted, ready to send/receive";
}

void ServerConnection::onSslErrors(const QList<QSslError> &errors)
{
    qDebug() << "Ssl errors: " << errors;
}

void ServerConnection::onSocketError(QAbstractSocket::SocketError socketError)
{
    qDebug() << "Socket errors: " << socketError;

}
