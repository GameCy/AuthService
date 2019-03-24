#include <QCoreApplication>
#include "messages.pb.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug() << "fill personOut fields";
    Person personOut;
    personOut.set_id(123456);
    personOut.set_name("Soleas");
    personOut.set_email("Sole@s.com");

    qDebug() << "serialize personOut to buffer";
    size_t size = personOut.ByteSizeLong();
    void *buffer = malloc(size);
    personOut.SerializeToArray(buffer, size);

    qDebug() <<"buffer size in bytes:" << size;

    qDebug() << "deserialize from buffer to personIn";
    Person personIn;
    personIn.ParseFromArray(buffer, size);

    qDebug() << "assert personOut matches personIn";
    assert(personIn.name()==personOut.name());
    assert(personIn.email()==personOut.email());
    assert(personIn.id()==personOut.id());

    qDebug() << "completed test";
    free(buffer);

    return a.exec();
}
