#ifndef INAV_H
#define INAV_H

#include <QObject>

#include "device/portlistener.h"

class inav : public QObject
{
Q_OBJECT
public:
    static inav* Instance();



protected:
    inav(QObject *parent = 0);

    static inav* m_instance;

signals:

public slots:

};

#endif // INAV_H
