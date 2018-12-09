/****************************************************************************
** Meta object code from reading C++ file 'udpclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telloGUIController/udpclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_udpClient_t {
    QByteArrayData data[15];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_udpClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_udpClient_t qt_meta_stringdata_udpClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "udpClient"
QT_MOC_LITERAL(1, 10, 10), // "newMesgGot"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "const char*"
QT_MOC_LITERAL(4, 34, 7), // "newMesg"
QT_MOC_LITERAL(5, 42, 8), // "mesgSize"
QT_MOC_LITERAL(6, 51, 16), // "newTelloStateGot"
QT_MOC_LITERAL(7, 68, 18), // "newTelloWifiSnrGot"
QT_MOC_LITERAL(8, 87, 16), // "newTelloReplyGot"
QT_MOC_LITERAL(9, 104, 8), // "newReply"
QT_MOC_LITERAL(10, 113, 8), // "sendMesg"
QT_MOC_LITERAL(11, 122, 4), // "mesg"
QT_MOC_LITERAL(12, 127, 9), // "sendMesg0"
QT_MOC_LITERAL(13, 137, 8), // "readMesg"
QT_MOC_LITERAL(14, 146, 15) // "getTelloWifiSnr"

    },
    "udpClient\0newMesgGot\0\0const char*\0"
    "newMesg\0mesgSize\0newTelloStateGot\0"
    "newTelloWifiSnrGot\0newTelloReplyGot\0"
    "newReply\0sendMesg\0mesg\0sendMesg0\0"
    "readMesg\0getTelloWifiSnr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_udpClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    0,   59,    2, 0x06 /* Public */,
       7,    0,   60,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   64,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,
      13,    0,   68,    2, 0x0a /* Public */,
      14,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::LongLong,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void udpClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        udpClient *_t = static_cast<udpClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newMesgGot((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< const qint64(*)>(_a[2]))); break;
        case 1: _t->newTelloStateGot(); break;
        case 2: _t->newTelloWifiSnrGot(); break;
        case 3: _t->newTelloReplyGot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->sendMesg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sendMesg0(); break;
        case 6: _t->readMesg(); break;
        case 7: _t->getTelloWifiSnr(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (udpClient::*_t)(const char * , const qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&udpClient::newMesgGot)) {
                *result = 0;
            }
        }
        {
            typedef void (udpClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&udpClient::newTelloStateGot)) {
                *result = 1;
            }
        }
        {
            typedef void (udpClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&udpClient::newTelloWifiSnrGot)) {
                *result = 2;
            }
        }
        {
            typedef void (udpClient::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&udpClient::newTelloReplyGot)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject udpClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_udpClient.data,
      qt_meta_data_udpClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *udpClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *udpClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_udpClient.stringdata0))
        return static_cast<void*>(const_cast< udpClient*>(this));
    return QObject::qt_metacast(_clname);
}

int udpClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void udpClient::newMesgGot(const char * _t1, const qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void udpClient::newTelloStateGot()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void udpClient::newTelloWifiSnrGot()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void udpClient::newTelloReplyGot(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
