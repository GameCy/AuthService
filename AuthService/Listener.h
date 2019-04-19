#ifndef LISTENER_H
#define LISTENER_H
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QList>
#include "Connection.h"

class Listener : public QTcpServer
{
    Q_OBJECT
public:
    Listener();


    QList<Connection*> Connections;
    // QTcpServer interface
protected:
    void incomingConnection(qintptr handle);

private:
    void RemoveConnection();
};

#endif // LISTENER_H
