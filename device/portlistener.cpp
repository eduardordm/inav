#include "portlistener.h"

#include <qextserialport.h>

#include "config/configdata.h"

PortListener::PortListener()
{
    port = new QextSerialPort();
}

PortListener::~PortListener()
{
    close();
    // delete?
}


bool PortListener::receiveLine(QString& buffer)
{

    if(!port->isOpen()) {
        return false;
    }

    char lineRead[1024];
    int byteRead = port->readLine(lineRead, 1024-1);

    if(byteRead > 0) {
        lineRead[byteRead+1] = '\0';
        buffer.append(lineRead);
        return true;
    }

    return false;
}

bool PortListener::open()
{
    port->setPortName(
            ConfigData::Instance()->serialConfig->value("port","COM7").toString() );

    port->setBaudRate( PortListener::parseBaudRateType(
            ConfigData::Instance()->serialConfig->value("baudrate","BAUD4800").toString() ) );

    port->setFlowControl( PortListener::parseFlowType(
            ConfigData::Instance()->serialConfig->value("flowtype","FLOW_OFF").toString() ) );

    port->setParity(PortListener::parseParityType(
            ConfigData::Instance()->serialConfig->value("parity","PAR_NONE").toString() ) );

    port->setDataBits(PortListener::parseDataBitsType(
            ConfigData::Instance()->serialConfig->value("flowtype","DATA_8").toString() ) );

    port->setStopBits(PortListener::parseStopBitsType(
            ConfigData::Instance()->serialConfig->value("flowtype","STOP_2").toString() ) );
    port->setTimeout(500);

    return port->open(QIODevice::ReadOnly | QIODevice::Unbuffered);
}

void PortListener::close()
{
    if(port->isOpen()) {
        port->close();
    }
}

/**
  * Converts a String into a DataBitsType, returns DATA_8 if not found.
  */
DataBitsType PortListener::parseDataBitsType(QString string)
{
    if(string == "DATA_5") {
        return DATA_5;
    }
    if(string == "DATA_6") {
        return DATA_6;
    }
    if(string == "DATA_7") {
        return DATA_7;
    }
    if(string == "DATA_8") {
        return DATA_8;
    }
    return DATA_8;
}

/**
  * Converts a String into a StopBitsType, returns STOP_2 if not found.
  */
StopBitsType PortListener::parseStopBitsType(QString string)
{
    if(string == "STOP_1") {
        return STOP_1;
    }
    if(string == "STOP_1_5") {
        return STOP_1_5;
    }
    if(string == "STOP_2") {
        return STOP_2;
    }
    return STOP_2;
}

/**
  * Converts a String into a ParityType, returns PAR_NONE if not found.
  */
ParityType PortListener::parseParityType(QString string)
{
    if(string == "PAR_NONE") {
        return PAR_NONE;
    }
    if(string == "PAR_ODD") {
        return PAR_ODD;
    }
    if(string == "PAR_EVEN") {
        return PAR_EVEN;
    }
    if(string == "PAR_MARK") {
        return PAR_MARK;
    }
    if(string == "PAR_SPACE") {
        return PAR_SPACE;
    }
    return PAR_NONE;
}

/**
  * Converts a String into a FlowType, returns FLOW_OFF if not found.
  */
FlowType PortListener::parseFlowType(QString string)
{
    if(string == "FLOW_OFF")
    {
        return FLOW_OFF;
    }
    if(string == "FLOW_HARDWARE")
    {
        return FLOW_HARDWARE;
    }
    if(string == "FLOW_XONXOFF")
    {
        return FLOW_XONXOFF;
    }
    return FLOW_OFF;
}

/**
  * Converts a String into a BAUDRATE, returns BAUD4800 if not found.
  */
BaudRateType PortListener::parseBaudRateType(QString string)
{
    if(string == "BAUD50") {
        return BAUD50;
    }
    if(string == "BAUD75") {
        return BAUD75;
    }
    if(string == "BAUD110") {
        return BAUD110;
    }
    if(string == "BAUD134") {
        return BAUD134;
    }
    if(string == "BAUD150") {
        return BAUD150;
    }
    if(string == "BAUD200") {
        return BAUD200;
    }
    if(string == "BAUD300") {
        return BAUD300;
    }
    if(string == "BAUD600") {
        return BAUD600;
    }
    if(string == "BAUD1200") {
        return BAUD1200;
    }
    if(string == "BAUD1800") {
        return BAUD1800;
    }
    if(string == "BAUD2400") {
        return BAUD2400;
    }
    if(string == "BAUD4800") {
        return BAUD4800;
    }
    if(string == "BAUD9600") {
        return BAUD9600;
    }
    if(string == "BAUD14400") {
        return BAUD14400;
    }
    if(string == "BAUD19200") {
        return BAUD19200;
    }
    if(string == "BAUD38400") {
        return BAUD38400;
    }
    if(string == "BAUD56000") {
        return BAUD56000;
    }
    if(string == "BAUD57600") {
        return BAUD57600;
    }
    if(string == "BAUD76800") {
        return BAUD76800;
    }
    if(string == "BAUD115200") {
        return BAUD115200;
    }
    if(string == "BAUD128000") {
        return BAUD128000;
    }
    if(string == "BAUD256000") {
        return BAUD256000;
    }
    return BAUD4800;
}
