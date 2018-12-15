/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../telloGUIController/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 30), // "on_connectTelloButton_released"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "updateTelloStateInGui"
QT_MOC_LITERAL(4, 65, 23), // "updateTelloWifiSnrInGui"
QT_MOC_LITERAL(5, 89, 15), // "updateSentOrder"
QT_MOC_LITERAL(6, 105, 8), // "newOrder"
QT_MOC_LITERAL(7, 114, 19), // "updateReceivedReply"
QT_MOC_LITERAL(8, 134, 8), // "newReply"
QT_MOC_LITERAL(9, 143, 22), // "checkKeyReallyReleased"
QT_MOC_LITERAL(10, 166, 12), // "sendKeyOrder"
QT_MOC_LITERAL(11, 179, 28), // "on_openCameraButton_released"
QT_MOC_LITERAL(12, 208, 26), // "updateMoveSensitivityInGui"
QT_MOC_LITERAL(13, 235, 28), // "updateRotateSensitivityInGui"
QT_MOC_LITERAL(14, 264, 20), // "updateMoveSpeedInGui"
QT_MOC_LITERAL(15, 285, 42), // "on_controlModeComboBox_curren..."
QT_MOC_LITERAL(16, 328, 5), // "index"
QT_MOC_LITERAL(17, 334, 32) // "on_commandLineEdit_returnPressed"

    },
    "MainWindow\0on_connectTelloButton_released\0"
    "\0updateTelloStateInGui\0updateTelloWifiSnrInGui\0"
    "updateSentOrder\0newOrder\0updateReceivedReply\0"
    "newReply\0checkKeyReallyReleased\0"
    "sendKeyOrder\0on_openCameraButton_released\0"
    "updateMoveSensitivityInGui\0"
    "updateRotateSensitivityInGui\0"
    "updateMoveSpeedInGui\0"
    "on_controlModeComboBox_currentIndexChanged\0"
    "index\0on_commandLineEdit_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_connectTelloButton_released(); break;
        case 1: _t->updateTelloStateInGui(); break;
        case 2: _t->updateTelloWifiSnrInGui(); break;
        case 3: _t->updateSentOrder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->updateReceivedReply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->checkKeyReallyReleased(); break;
        case 6: _t->sendKeyOrder(); break;
        case 7: _t->on_openCameraButton_released(); break;
        case 8: _t->updateMoveSensitivityInGui(); break;
        case 9: _t->updateRotateSensitivityInGui(); break;
        case 10: _t->updateMoveSpeedInGui(); break;
        case 11: _t->on_controlModeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_commandLineEdit_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
