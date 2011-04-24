#include "inav.h"

inav* inav::m_instance = NULL;

inav::inav(QObject *parent) :
    QObject(parent)
{
}

inav* inav::Instance()
{
    if(!m_instance) {
        m_instance = new inav();
    }
    return m_instance;
}
