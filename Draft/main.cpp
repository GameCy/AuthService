#include <QDebug>
#include <QFile>
#include <QFileInfo>
#include "FileOps.h"
#include "RoutesGenerator.h"

void printHelp()
{
    qInfo() << "draft <defs file> <target file>";
    qInfo() << "      <defs file - a csv file that contains draft defs to generate code from";
    qInfo() << "      <target file - the file to be touched. Tags inside the target will be replaced with code generated";
}

int main(int argc, char *argv[])
{
    if (argc<3)
        printHelp();
    else
    {
        QString definitionsPath = FileOps::InspectFilePath(argv[0], argv[1]);
        if (!definitionsPath.isEmpty())
        {
            QString csvContents;
            if (FileOps::ReadEntireFile(definitionsPath, csvContents))
            {
                RoutesGenerator routes(csvContents);

                QString targetPath = FileOps::InspectFilePath(argv[0], argv[2]);
                FileOps target(targetPath);
                target.Replace( "ROUTE-ENUMS", routes.generateEnums());
                target.Replace( "ROUTE-FACTORY-CASES", routes.generateFactoryCases());
                if (!target.Save())
                    qInfo() << "Could not save file " << targetPath;
            }
        }
    }
    return 0;
}
