/****************************************************************************
** Meta object code from reading C++ file 'snake.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TvEase/snake.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snake.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Snake_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Snake_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Snake_t qt_meta_stringdata_Snake = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Snake"
QT_MOC_LITERAL(1, 6, 13), // "signalSetFood"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "signalGotFood"
QT_MOC_LITERAL(4, 35, 14), // "signalGameOver"
QT_MOC_LITERAL(5, 50, 16), // "signalSnakeMoved"
QT_MOC_LITERAL(6, 67, 12), // "QVector<int>"
QT_MOC_LITERAL(7, 80, 13), // "slotMoveSnake"
QT_MOC_LITERAL(8, 94, 19) // "slotChangeDirection"

    },
    "Snake\0signalSetFood\0\0signalGotFood\0"
    "signalGameOver\0signalSnakeMoved\0"
    "QVector<int>\0slotMoveSnake\0"
    "slotChangeDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Snake[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       3,    0,   49,    2, 0x06 /* Public */,
       4,    0,   50,    2, 0x06 /* Public */,
       5,    2,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   56,    2, 0x0a /* Public */,
       8,    2,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void Snake::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Snake *_t = static_cast<Snake *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSetFood((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->signalGotFood(); break;
        case 2: _t->signalGameOver(); break;
        case 3: _t->signalSnakeMoved((*reinterpret_cast< QVector<int>(*)>(_a[1])),(*reinterpret_cast< QVector<int>(*)>(_a[2]))); break;
        case 4: _t->slotMoveSnake(); break;
        case 5: _t->slotChangeDirection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Snake::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Snake::signalSetFood)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Snake::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Snake::signalGotFood)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Snake::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Snake::signalGameOver)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Snake::*_t)(QVector<int> , QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Snake::signalSnakeMoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Snake::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Snake.data,
      qt_meta_data_Snake,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Snake::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Snake::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Snake.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Snake::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Snake::signalSetFood(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Snake::signalGotFood()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Snake::signalGameOver()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Snake::signalSnakeMoved(QVector<int> _t1, QVector<int> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE