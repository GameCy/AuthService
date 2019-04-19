#ifndef ROUTESGENERATOR_H
#define ROUTESGENERATOR_H
#include <QList>

struct route { QString name, request, response; };
typedef QList<route> RouteList;

class RoutesGenerator
{
public:
    RoutesGenerator(QString csvFileContents);

    QString generateEnums();
    QString generateFactoryCases();

private:
    RouteList routes;
};

#endif // ROUTESGENERATOR_H
