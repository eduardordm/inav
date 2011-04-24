#include "navinfo.h"

NavInfo* NavInfo::m_instance = NULL;

NavInfo::NavInfo()
{
    altitude = 0.0f;
    speed = 0.0f;
    heading = 0.0f;
}


NavInfo* NavInfo::Instance()
{
    if(!m_instance) {
        m_instance = new NavInfo();
    }
    return m_instance;
}


QString NavInfo::getSpeedString()
{
    QString ret = "111 kt";
    return ret;
}
