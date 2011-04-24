#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QFrame>

class Canvas : public QFrame
{
Q_OBJECT
public:
    Canvas(QWidget *parent = 0);

protected:

    void paint();

};

#endif // CANVAS_H
