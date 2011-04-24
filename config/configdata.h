#ifndef CONFIGDATA_H
#define CONFIGDATA_H

#include <QObject>
#include <QSettings>

#define CONFIG_SERIAL_FILENAME "serial.ini"

class ConfigData : public QObject
{
Q_OBJECT
public:
    static ConfigData* Instance();

    QSettings* serialConfig;

protected:
    static ConfigData* instance;

    ConfigData();

    void resetSerialConfigFile();
};

#endif // CONFIGDATA_H
