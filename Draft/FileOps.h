#ifndef FILEOPS_H
#define FILEOPS_H
#include <QString>

class FileOps
{
public:
    FileOps(QString filePath);
    bool isLoaded() { return loaded; }
    bool Save();
    void Replace(QString tag, QString insertBlock);

    static bool ReadEntireFile(QString path, QString &textOut);
    static QString InspectFilePath(QString rootPath, QString filePath);
private:
    bool loaded;
    QString path;
    QString content;
};

#endif // FILEOPS_H
