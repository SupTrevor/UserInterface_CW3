/****************************************************************************
** Meta object code from reading C++ file 'video_library.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../video_library.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video_library.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_video_library_t {
    QByteArrayData data[15];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_video_library_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_video_library_t qt_meta_stringdata_video_library = {
    {
QT_MOC_LITERAL(0, 0, 13), // "video_library"
QT_MOC_LITERAL(1, 14, 12), // "update_notes"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 7), // "trigger"
QT_MOC_LITERAL(5, 41, 18), // "on_EditBut_clicked"
QT_MOC_LITERAL(6, 60, 7), // "checked"
QT_MOC_LITERAL(7, 68, 9), // "repo_show"
QT_MOC_LITERAL(8, 78, 10), // "flash_repo"
QT_MOC_LITERAL(9, 89, 10), // "show_user1"
QT_MOC_LITERAL(10, 100, 10), // "show_user2"
QT_MOC_LITERAL(11, 111, 10), // "show_user3"
QT_MOC_LITERAL(12, 122, 6), // "log_in"
QT_MOC_LITERAL(13, 129, 7), // "invite_"
QT_MOC_LITERAL(14, 137, 4) // "team"

    },
    "video_library\0update_notes\0\0data\0"
    "trigger\0on_EditBut_clicked\0checked\0"
    "repo_show\0flash_repo\0show_user1\0"
    "show_user2\0show_user3\0log_in\0invite_\0"
    "team"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_video_library[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       4,    0,   72,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x0a /* Public */,
       8,    0,   77,    2, 0x0a /* Public */,
       9,    0,   78,    2, 0x0a /* Public */,
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    0,   81,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void video_library::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        video_library *_t = static_cast<video_library *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_notes((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->trigger(); break;
        case 2: _t->on_EditBut_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->repo_show(); break;
        case 4: _t->flash_repo(); break;
        case 5: _t->show_user1(); break;
        case 6: _t->show_user2(); break;
        case 7: _t->show_user3(); break;
        case 8: _t->log_in(); break;
        case 9: _t->invite_(); break;
        case 10: _t->team(); break;
        default: ;
        }
    }
}

const QMetaObject video_library::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_video_library.data,
      qt_meta_data_video_library,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *video_library::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *video_library::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_video_library.stringdata0))
        return static_cast<void*>(const_cast< video_library*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int video_library::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
