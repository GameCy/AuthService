#include "Listener.h"
#include <QDebug>

Listener::Listener()
{

}


void Listener::incomingConnection(qintptr handle)
{
    qDebug() << "Incomming connection, descriptor: " << handle;
    Connections.append(new Connection(this, handle));
}

void Listener::RemoveConnection()
{
    // auto sock = ((NetworkConnection*)sender())->socket;
    //Connections.removeAll( socket );
}
