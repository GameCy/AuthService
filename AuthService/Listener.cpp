#include "Listener.h"
#include <QDebug>

Listener::Listener()
{

}


void Listener::incomingConnection(qintptr handle)
{
    auto socket = new QTcpSocket();
    if (!socket->setSocketDescriptor(handle)) {
        emit acceptError(socket->error());
        delete socket;
        return;
    }

    qDebug() << "Incomming connection, descriptor: " << handle;
    addPendingConnection(socket);
    Connections.append(new ServerConnection(socket));
}
