/****************************************************************************
** Meta object code from reading C++ file 'securitestudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TvEase/securitestudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'securitestudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_securiteStudio_t {
    QByteArrayData data[9];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_securiteStudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_securiteStudio_t qt_meta_stringdata_securiteStudio = {
    {
QT_MOC_LITERAL(0, 0, 14), // "securiteStudio"
QT_MOC_LITERAL(1, 15, 12), // "update_label"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 31), // "on_pushButton__securite_clicked"
QT_MOC_LITERAL(4, 61, 37), // "on_pushButton_recher_securite..."
QT_MOC_LITERAL(5, 99, 26), // "afficherTousElementsSiVide"
QT_MOC_LITERAL(6, 126, 4), // "text"
QT_MOC_LITERAL(7, 131, 35), // "on_comboBox_trie_securite_act..."
QT_MOC_LITERAL(8, 167, 4) // "arg1"

    },
    "securiteStudio\0update_label\0\0"
    "on_pushButton__securite_clicked\0"
    "on_pushButton_recher_securite_clicked\0"
    "afficherTousElementsSiVide\0text\0"
    "on_comboBox_trie_securite_activated\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_securiteStudio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void securiteStudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        securiteStudio *_t = static_cast<securiteStudio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_label(); break;
        case 1: _t->on_pushButton__securite_clicked(); break;
        case 2: _t->on_pushButton_recher_securite_clicked(); break;
        case 3: _t->afficherTousElementsSiVide((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_trie_securite_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject securiteStudio::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_securiteStudio.data,
      qt_meta_data_securiteStudio,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *securiteStudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *securiteStudio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_securiteStudio.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int securiteStudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE