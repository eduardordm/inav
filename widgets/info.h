#ifndef INFO_H
#define INFO_H

#include <QWidget>
#include <QFont>

#include "canvas.h"

#define INFO_FONTSIZE 14
#define INFO_LINESPACING 6

class Info : public Canvas
{
Q_OBJECT
public:
    QString title;
    QString text;

    Info(QWidget* parent = 0);
    ~Info();

protected:
    QFont font;

    void paintEvent(QPaintEvent*);


};

#endif // INFO_H
