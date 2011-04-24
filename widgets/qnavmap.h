#ifndef QNAVMAP_H
#define QNAVMAP_H

#include <QWidget>

#include "canvas.h"

class QNavMap: public Canvas
{
Q_OBJECT
public:
    static QNavMap* Instance();
    static QNavMap* Instance(QWidget* parent);

protected:
    static QNavMap* instance;

    QNavMap(QWidget* parent = 0);
    ~QNavMap();

private:

};

#endif // QNAVMAP_H
