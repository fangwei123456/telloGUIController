/****************************************************************************
** Meta object code from reading C++ file 'videostreamreader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telloGUIController/videostreamreader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videostreamreader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_videoStreamReader_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_videoStreamReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_videoStreamReader_t qt_meta_stringdata_videoStreamReader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "videoStreamReader"
QT_MOC_LITERAL(1, 18, 11), // "setVideoURL"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 3), // "url"
QT_MOC_LITERAL(4, 35, 10), // "openStream"
QT_MOC_LITERAL(5, 46, 10) // "showStream"

    },
    "videoStreamReader\0setVideoURL\0\0url\0"
    "openStream\0showStream"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_videoStreamReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void videoStreamReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        videoStreamReader *_t = static_cast<videoStreamReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setVideoURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { bool _r = _t->openStream();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->showStream(); break;
        default: ;
        }
    }
}

const QMetaObject videoStreamReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_videoStreamReader.data,
      qt_meta_data_videoStreamReader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *videoStreamReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *videoStreamReader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_videoStreamReader.stringdata0))
        return static_cast<void*>(const_cast< videoStreamReader*>(this));
    return QObject::qt_metacast(_clname);
}

int videoStreamReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE