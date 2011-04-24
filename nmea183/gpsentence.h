#ifndef GPSENTENCE_H
#define GPSENTENCE_H

#include <QObject>

#include <QString>
#include <QStringList>

class GpSentence : public QObject
{
protected:
    void parse(QString& sentence);

public:

    GpSentence(QString& sentence);

    QString code;

    QStringList data;

};

#endif // GPSENTENCE_H
