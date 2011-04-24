#include <QtGui/QApplication>
#include "mainwindow.h"
#include "config/configdata.h"

#include <qextserialport.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConfigData::Instance();

    MainWindow w;
    w.show();
    return a.exec();
}
