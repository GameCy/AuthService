#include "RoutesGenerator.h"
#include <QDebug>

RoutesGenerator::RoutesGenerator(QString csvFileContents)
{
    QStringList lines = csvFileContents.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);

    // comma seperate lines
    for(auto line : lines)
    {
        auto parts = line.split(QRegExp("(\\ |\\,|\\:|\\t)"), QString::SkipEmptyParts);
        if (parts.length()<2)
            qInfo() << "Ignoring line:" << line;
        else
            routes.push_back( route { parts[0] , parts[1], parts[2] });
    }
}

QString RoutesGenerator::generateEnums()
{
    QString result;
    QTextStream stream(&result);
    for(int r=0; r<routes.size(); ++r)
    {
        stream << "ROUTE_" << routes[r].name;
        if (r==(routes.size()-1))       stream << endl;
        else                            stream << "," <<endl;
    }
    return result;
}

QString RoutesGenerator::generateFactoryCases()
{
    QString result;
    QTextStream stream(&result);
    QString lineTemplate = "case ROUTE_$$NAME$$ : return (new $$REQUEST$$, new $$RESPONSE$$) break;";
    for(auto r: routes)
    {
        QString line = lineTemplate;
        line.replace("$$NAME$$", r.name)
                .replace("$$REQUEST$$", r.request)
                .replace("$$RESPONSE$$", r.response);

         stream << line << endl;
    }
    return result;
}

