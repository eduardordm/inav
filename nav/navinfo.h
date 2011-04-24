#ifndef NAVINFO_H
#define NAVINFO_H

#include <QObject>
#include <QString>

class NavInfo
{

public:
    static NavInfo* Instance();


    QString getSpeedString();
  //  QString getAltitudeString();
  //  QString getHeadingString();

protected:
    static NavInfo* m_instance;

    NavInfo();
    ~NavInfo();

private:
    float heading;
    float speed;
    float altitude;


};

#endif // NAVINFO_H
