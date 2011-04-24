#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "widgets/canvas.h"
#include "widgets/info.h"
#include "device/portlistener.h"

#include <qextserialport.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void updateNavInfoEvent();

protected:
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent*);


private:
    Ui::MainWindow *ui;

    QTimer* update_timer;

    PortListener * port;

    Info* infoA;
    Info* infoB;
    Info* infoC;
    Info* infoD;
    Info* infoE;

    void setupInfo();
    void setupUpdate_timer();

};

#endif // MAINWINDOW_H
