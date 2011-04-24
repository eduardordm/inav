#include "canvas.h"

#include <QPainter>

Canvas::Canvas(QWidget *parent) : QFrame(parent)
{

}


void Canvas::paint() {
    repaint();
}
