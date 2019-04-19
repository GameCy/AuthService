#include "FileOps.h"
#include <QDebug>
#include <QFile>
#include <QFileInfo>
#include <QRandomGenerator>
#include <QTextStream>

FileOps::FileOps(QString filePath)
    : loaded(false)
    , path(filePath)
{
        loaded = ReadEntireFile(filePath, content);
}

bool FileOps::Save()
{
    QFileInfo info(path);
    QString randomFile;
    QTextStream(&randomFile) << info.fileName() << "." << QRandomGenerator::global()->generate();
    QFile::rename(path, randomFile);

    QFile file(path);
    if (file.open(QFile::WriteOnly|QFile::Text))
    {
        file.write(content.toUtf8());
        file.close();
        return true;
    }
    return false;
}

void FileOps::Replace(QString tag, QString insertBlock)
{
    QString beginTag = "$$" + tag + "$$";
    QString endTag = "$$" + tag + "-END$$";
    int from=0;
    int start = content.indexOf(beginTag, from);
    while(start>0)
    {
        int end = content.indexOf(endTag, from+1);
        if (end>=0)
            end += endTag.length();
        else
            end = start + beginTag.length();

        content = content.left(start) + insertBlock + content.right(end);

        start = content.indexOf(beginTag+1, from);
    }
}

bool FileOps::ReadEntireFile(QString path, QString &textOut)
{
    QFile file(path);
    if (file.open(QFile::ReadWrite|QFile::Text))
    {
        textOut = file.readAll();
        file.close();
        return true;
    }
    return false;
}

QString FileOps::InspectFilePath(QString rootPath, QString filePath)
{
    QFileInfo info(filePath);
    if (info.isRelative())
    {
        if (info.path().isEmpty())
        {
            QFileInfo executableInfo(rootPath);
            executableInfo.setFile(info.fileName()+info.completeSuffix());
            filePath =  executableInfo.absoluteFilePath();
        }
        else
        {
            filePath = info.absoluteFilePath();
        }
    }

    if (!QFile::exists(filePath))
    {
        qInfo() << "file not found: " << filePath;
        filePath.clear();
    }
    return  filePath;
}
