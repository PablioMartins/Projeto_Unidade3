/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Projeto_PA_Unidade3/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "NewSculptor"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "drawObject"
QT_MOC_LITERAL(4, 35, 1), // "x"
QT_MOC_LITERAL(5, 37, 1), // "y"
QT_MOC_LITERAL(6, 39, 11), // "updatecolor"
QT_MOC_LITERAL(7, 51, 9), // "setPlanoZ"
QT_MOC_LITERAL(8, 61, 8), // "setVOXEL"
QT_MOC_LITERAL(9, 70, 9), // "setCVOXEL"
QT_MOC_LITERAL(10, 80, 6), // "setBOX"
QT_MOC_LITERAL(11, 87, 7), // "setCBOX"
QT_MOC_LITERAL(12, 95, 9), // "setSPHERE"
QT_MOC_LITERAL(13, 105, 10), // "setCSPHERE"
QT_MOC_LITERAL(14, 116, 12), // "setELLIPSOID"
QT_MOC_LITERAL(15, 129, 13), // "setCELLIPSOID"
QT_MOC_LITERAL(16, 143, 6) // "Salvar"

    },
    "MainWindow\0NewSculptor\0\0drawObject\0x\0"
    "y\0updatecolor\0setPlanoZ\0setVOXEL\0"
    "setCVOXEL\0setBOX\0setCBOX\0setSPHERE\0"
    "setCSPHERE\0setELLIPSOID\0setCELLIPSOID\0"
    "Salvar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    2,   80,    2, 0x0a /* Public */,
       6,    0,   85,    2, 0x0a /* Public */,
       7,    0,   86,    2, 0x0a /* Public */,
       8,    0,   87,    2, 0x0a /* Public */,
       9,    0,   88,    2, 0x0a /* Public */,
      10,    0,   89,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    0,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewSculptor(); break;
        case 1: _t->drawObject((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->updatecolor(); break;
        case 3: _t->setPlanoZ(); break;
        case 4: _t->setVOXEL(); break;
        case 5: _t->setCVOXEL(); break;
        case 6: _t->setBOX(); break;
        case 7: _t->setCBOX(); break;
        case 8: _t->setSPHERE(); break;
        case 9: _t->setCSPHERE(); break;
        case 10: _t->setELLIPSOID(); break;
        case 11: _t->setCELLIPSOID(); break;
        case 12: _t->Salvar(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
