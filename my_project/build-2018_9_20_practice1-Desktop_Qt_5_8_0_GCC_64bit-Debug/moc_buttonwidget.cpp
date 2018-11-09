/****************************************************************************
** Meta object code from reading C++ file 'buttonwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../2018_9_20_practice1/buttonwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_buttonwidget_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_buttonwidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_buttonwidget_t qt_meta_stringdata_buttonwidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "buttonwidget"
QT_MOC_LITERAL(1, 13, 11), // "startSignal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "quitSignal"
QT_MOC_LITERAL(4, 37, 9), // "startGame"
QT_MOC_LITERAL(5, 47, 8), // "quitGame"
QT_MOC_LITERAL(6, 56, 13) // "getPaintBlock"

    },
    "buttonwidget\0startSignal\0\0quitSignal\0"
    "startGame\0quitGame\0getPaintBlock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_buttonwidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void buttonwidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        buttonwidget *_t = static_cast<buttonwidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startSignal(); break;
        case 1: _t->quitSignal(); break;
        case 2: _t->startGame(); break;
        case 3: _t->quitGame(); break;
        case 4: { bool _r = _t->getPaintBlock();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (buttonwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&buttonwidget::startSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (buttonwidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&buttonwidget::quitSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject buttonwidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_buttonwidget.data,
      qt_meta_data_buttonwidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *buttonwidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *buttonwidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_buttonwidget.stringdata0))
        return static_cast<void*>(const_cast< buttonwidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int buttonwidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void buttonwidget::startSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void buttonwidget::quitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
