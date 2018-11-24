/****************************************************************************
** Meta object code from reading C++ file 'udpcontrollerthread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telloGUIController/udpcontrollerthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpcontrollerthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_udpControllerThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      42,   36,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_udpControllerThread[] = {
    "udpControllerThread\0\0readResponse()\0"
    "order\0sendControlOrder(QString)\0"
};

void udpControllerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        udpControllerThread *_t = static_cast<udpControllerThread *>(_o);
        switch (_id) {
        case 0: _t->readResponse(); break;
        case 1: _t->sendControlOrder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData udpControllerThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject udpControllerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_udpControllerThread,
      qt_meta_data_udpControllerThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &udpControllerThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *udpControllerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *udpControllerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_udpControllerThread))
        return static_cast<void*>(const_cast< udpControllerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int udpControllerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
