#ifndef SERVERCONNECTION_H
#define SERVERCONNECTION_H
#include <QObject>
#include <QtNetwork/QSslSocket>

class ServerConnection : public QObject
{
    Q_OBJECT
public:
    ServerConnection(QSslSocket* sock);

private slots:
    void onEncrypted();
    void onSslErrors(const QList<QSslError> &errors);
    void onSocketError(QAbstractSocket::SocketError socketError);

private:
    QSslSocket* socket;
};

#endif // SERVERCONNECTION_H
