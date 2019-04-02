#include "ClientConnection.h"
#include <QDebug>

ClientConnection::ClientConnection()
    : socket(nullptr)
{
    socket = new QTcpSocket();
    connect(socket, &QTcpSocket::connected, this, &ClientConnection::onConnected);
    connect(socket, &QTcpSocket::readyRead, this, &ClientConnection::onReadyRead);
    connect(socket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error)
            , this, &ClientConnection::onError);
}

void ClientConnection::TryConnect(QString host, quint16 port)
{
    socket->connectToHost(host, port);
}

void ClientConnection::onConnected()
{
    qDebug() << "ready to transmit";

}

void ClientConnection::onReadyRead()
{
    qDebug() << "received " << socket->bytesAvailable() << " bytes";
    auto bytes = socket->readAll();
    qDebug() << "Data: " << bytes;
}

void ClientConnection::onError(QAbstractSocket::SocketError error)
{
    qDebug() << "onError: " << error;

}
