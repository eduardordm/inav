#include "gpsentence.h"

#include <QStringList>

GpSentence::GpSentence(QString& sentence)
{
    parse(sentence);
}


void GpSentence::parse(QString& sentence)
{
    QStringList split = sentence.split(',');
    code = split[0];
    split.removeFirst();
    data.append(split);
    split.clear();
}
