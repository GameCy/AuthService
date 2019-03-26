#include "ClientConnection.h"
#include <QDebug>

ClientConnection::ClientConnection()
    : socket(nullptr)
{
    socket = new QSslSocket();
    connect(socket, &QSslSocket::encrypted, this, &ClientConnection::onEncrypted);
    connect(socket, QOverload<const QList<QSslError> &>::of(&QSslSocket::sslErrors)
            , this, &ClientConnection::onSslErrors);
}

void ClientConnection::TryConnect(QString host, quint16 port)
{
    socket->connectToHostEncrypted(host, port);
}

void ClientConnection::onEncrypted()
{
    qDebug() << "encrypting on, ready to transmit";
}

void ClientConnection::onSslErrors(const QList<QSslError> &errors)
{
    qDebug() << "Ssl errors: " << errors;

}
