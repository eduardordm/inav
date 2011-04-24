/****************************************************************************
** Meta object code from reading C++ file 'info.h'
**
** Created: Sun 14. Feb 18:43:41 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/info.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Info[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Info[] = {
    "Info\0"
};

const QMetaObject Info::staticMetaObject = {
    { &Canvas::staticMetaObject, qt_meta_stringdata_Info,
      qt_meta_data_Info, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Info::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Info::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Info))
        return static_cast<void*>(const_cast< Info*>(this));
    return Canvas::qt_metacast(_clname);
}

int Info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Canvas::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
