#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "nav/navinfo.h"
#include "config/configdata.h"
#include "device/portlistener.h"
#include "nmea183/gpsentence.h"

#include <qextserialport.h>

#include <QPainter>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupInfo();

    port = new PortListener();
    port->open();

    setupUpdate_timer();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupInfo()
{
    infoA = new Info(this);
    infoA->title = "SPEED";
    infoA->text = "100 kt";
    ui->verticalLayout_InfoA->addWidget(infoA);

    infoB = new Info(this);
    infoB->title = "ALTITUDE";
    infoB->text = "7498 ft";
    ui->verticalLayout_InfoB->addWidget(infoB);

    infoC = new Info(this);
    infoC->title = "HEADING";
    infoC->text = "270";
    ui->verticalLayout_InfoC->addWidget(infoC);

    infoD = new Info(this);
    infoD->title = "COURSE";
    infoD->text = "270";
    ui->verticalLayout_InfoD->addWidget(infoD);

    infoE = new Info(this);
    infoE->title = "ETE DEST";
    infoE->text = "01:50";
    ui->verticalLayout_InfoE->addWidget(infoE);
}

void MainWindow::setupUpdate_timer()
{
    update_timer = new QTimer(this);
    update_timer->setSingleShot(false);
    update_timer->setInterval(100); // 5hz timer
    connect(update_timer, SIGNAL(timeout()), this, SLOT(updateNavInfoEvent()));
    update_timer->start();
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::paintEvent(QPaintEvent*)
{

}

void MainWindow::updateNavInfoEvent()
{

    QString buff;
    port->receiveLine(buff);
    GpSentence sentence(buff);
    ui->textBrowser->append("GPXXX:" + sentence.code);

    if(sentence.code.contains("$GPRMC")) {
         if(sentence.data.size() >=8 ) {
        infoA->text = sentence.data[6];
        infoD->text = sentence.data[7];
    }
    }


   if(sentence.code.contains("$GPGGA")) {
       if(sentence.data.size() >=9 ) {
            infoB->text = sentence.data[8];
            QString lat = sentence.data[1]+ " " +sentence.data[2];
            QString lon = sentence.data[3]+ " " +sentence.data[4];
            ui->lineEdit->setText("LAT: " + lat + " LON:" + lon);
        }
   }




//  ui->textBrowser->append(buff);
       //     ui->textBrowser->ensureCursorVisible();


   // infoA->text = NavInfo::Instance()->getSpeedString();

    repaint();
}
