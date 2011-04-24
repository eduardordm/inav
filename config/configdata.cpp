#include "configdata.h"

#include <QSettings>

ConfigData* ConfigData::instance = NULL;

ConfigData::ConfigData()
{
    serialConfig = new QSettings(CONFIG_SERIAL_FILENAME, QSettings::IniFormat);
    if(!serialConfig->contains("version")) {
        resetSerialConfigFile();
    }
}

ConfigData* ConfigData::Instance()
{
    if(!instance) {
        instance = new ConfigData();
    }
    return instance;
}

void ConfigData::resetSerialConfigFile()
{
    serialConfig->setValue("port","COM1");
    serialConfig->setValue("baurate","BAUD56000");
    serialConfig->setValue("flowcontrol","FLOW_OFF");
    serialConfig->setValue("parity","PAR_NONE");
    serialConfig->setValue("databis","DATA_8");
    serialConfig->setValue("stopbits","STOP_2");
    serialConfig->setValue("version","1.2 Alpha");
    serialConfig->sync();
}
