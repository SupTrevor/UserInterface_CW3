/****************************************************************************
** Meta object code from reading C++ file 'the_widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../the_widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'the_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TheWidget_t {
    QByteArrayData data[8];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TheWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TheWidget_t qt_meta_stringdata_TheWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TheWidget"
QT_MOC_LITERAL(1, 10, 10), // "addinQueue"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "TheButtonInfo*"
QT_MOC_LITERAL(4, 37, 4), // "info"
QT_MOC_LITERAL(5, 42, 8), // "loadList"
QT_MOC_LITERAL(6, 51, 11), // "std::string"
QT_MOC_LITERAL(7, 63, 4) // "name"

    },
    "TheWidget\0addinQueue\0\0TheButtonInfo*\0"
    "info\0loadList\0std::string\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TheWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void TheWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TheWidget *_t = static_cast<TheWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addinQueue((*reinterpret_cast< TheButtonInfo*(*)>(_a[1]))); break;
        case 1: _t->loadList((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TheWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TheWidget.data,
      qt_meta_data_TheWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TheWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TheWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TheWidget.stringdata0))
        return static_cast<void*>(const_cast< TheWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TheWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
