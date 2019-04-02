#ifndef SERVERCONNECTION_H
#define SERVERCONNECTION_H
#include <QObject>
#include <QtNetwork/QSslSocket>

class ServerConnection : public QObject
{
    Q_OBJECT
public:
    ServerConnection(QTcpSocket* sock);

private slots:
    void onSocketError(QAbstractSocket::SocketError socketError);

private:
    QTcpSocket* socket;
};

#endif // SERVERCONNECTION_H
