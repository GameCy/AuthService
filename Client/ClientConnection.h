#ifndef CLIENTCONNECTION_H
#define CLIENTCONNECTION_H
#include <QObject>
#include <QtNetwork/QSslSocket>

class ClientConnection : public QObject
{
    Q_OBJECT
public:
    ClientConnection();

    void TryConnect(QString host, quint16 port);

private:
    QSslSocket* socket;

private slots:
    void onEncrypted();
    void onSslErrors(const QList<QSslError> &errors);
};

#endif // CLIENTCONNECTION_H
