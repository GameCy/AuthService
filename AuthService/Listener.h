#ifndef LISTENER_H
#define LISTENER_H
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QList>
#include <ServerConnection.h>

class Listener : public QTcpServer
{
    Q_OBJECT
public:
    Listener();


    QList<ServerConnection*> Connections;
    // QTcpServer interface
protected:
    void incomingConnection(qintptr handle);
};

#endif // LISTENER_H
