#ifndef PORTLISTENER_H
#define PORTLISTENER_H

#include <QObject>

#include <qextserialport.h>

class PortListener : public QObject
{
    Q_OBJECT
public:
    PortListener();
    ~PortListener();

    bool open();
    bool receiveLine(QString& buffer);

    void close();

    QextSerialPort * port;

protected:



    static BaudRateType parseBaudRateType(QString string);
    static FlowType parseFlowType(QString string);
    static DataBitsType parseDataBitsType(QString string);
    static StopBitsType parseStopBitsType(QString string);
    static ParityType parseParityType(QString string);

};

#endif // PORTLISTENER_H
