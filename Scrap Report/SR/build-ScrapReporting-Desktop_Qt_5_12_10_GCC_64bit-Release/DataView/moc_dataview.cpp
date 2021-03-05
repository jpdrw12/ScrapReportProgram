/****************************************************************************
** Meta object code from reading C++ file 'dataview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ScrapReporting/DataView/dataview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataView_t {
    QByteArrayData data[12];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataView_t qt_meta_stringdata_DataView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DataView"
QT_MOC_LITERAL(1, 9, 12), // "kanbanUpdate"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "tableUpdate"
QT_MOC_LITERAL(4, 35, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 57, 23), // "on_k_Card_returnPressed"
QT_MOC_LITERAL(6, 81, 23), // "on_k_Part_returnPressed"
QT_MOC_LITERAL(7, 105, 22), // "on_k_Qty_returnPressed"
QT_MOC_LITERAL(8, 128, 20), // "on_DeleteRow_clicked"
QT_MOC_LITERAL(9, 149, 21), // "on_dRow_Scrap_clicked"
QT_MOC_LITERAL(10, 171, 17), // "on_clrAll_clicked"
QT_MOC_LITERAL(11, 189, 17) // "on_Export_clicked"

    },
    "DataView\0kanbanUpdate\0\0tableUpdate\0"
    "on_pushButton_clicked\0on_k_Card_returnPressed\0"
    "on_k_Part_returnPressed\0on_k_Qty_returnPressed\0"
    "on_DeleteRow_clicked\0on_dRow_Scrap_clicked\0"
    "on_clrAll_clicked\0on_Export_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
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

void DataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->kanbanUpdate(); break;
        case 1: _t->tableUpdate(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_k_Card_returnPressed(); break;
        case 4: _t->on_k_Part_returnPressed(); break;
        case 5: _t->on_k_Qty_returnPressed(); break;
        case 6: _t->on_DeleteRow_clicked(); break;
        case 7: _t->on_dRow_Scrap_clicked(); break;
        case 8: _t->on_clrAll_clicked(); break;
        case 9: _t->on_Export_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DataView::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_DataView.data,
    qt_meta_data_DataView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int DataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
