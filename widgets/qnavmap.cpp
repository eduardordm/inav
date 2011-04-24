#include "qnavmap.h"

QNavMap* QNavMap::instance = NULL;

QNavMap::QNavMap(QWidget* parent): Canvas(parent)
{
}

QNavMap::~QNavMap()
{
}

QNavMap* QNavMap::Instance(QWidget* parent)
{
    if(!instance) {
        instance = new QNavMap(parent);
    }
    return instance;
}

QNavMap* QNavMap::Instance()
{
    if(!instance) {
        instance = new QNavMap();
    }
    return instance;
}
