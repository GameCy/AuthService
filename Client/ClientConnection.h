#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H
#include <QObject>
#include <QtNetwork/QTcpSocket>

class ClientConnection : public QObject
{
    Q_OBJECT
public:
    ClientConnection();

    void TryConnect(QString host, quint16 port);

private:
    QTcpSocket* socket;

private slots:
    void onConnected();
    void onReadyRead();
    void onError(QAbstractSocket::SocketError error);

};

#endif // CLIENTCONNECTION_H
