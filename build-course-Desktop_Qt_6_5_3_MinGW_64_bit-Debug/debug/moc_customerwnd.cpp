/****************************************************************************
** Meta object code from reading C++ file 'customerwnd.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../course/customerwnd.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customerwnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCustomerWndENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCustomerWndENDCLASS = QtMocHelpers::stringData(
    "CustomerWnd",
    "update",
    "",
    "Customer*",
    "customer",
    "id",
    "page",
    "deleteCustomer",
    "table_anme",
    "closeQuestion",
    "on_bodyPb_clicked",
    "on_addPb_clicked",
    "on_customerTv_doubleClicked",
    "QModelIndex",
    "index",
    "on_searchLE_textChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCustomerWndENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[12];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[9];
    char stringdata5[3];
    char stringdata6[5];
    char stringdata7[15];
    char stringdata8[11];
    char stringdata9[14];
    char stringdata10[18];
    char stringdata11[17];
    char stringdata12[28];
    char stringdata13[12];
    char stringdata14[6];
    char stringdata15[24];
    char stringdata16[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCustomerWndENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCustomerWndENDCLASS_t qt_meta_stringdata_CLASSCustomerWndENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "CustomerWnd"
        QT_MOC_LITERAL(12, 6),  // "update"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 9),  // "Customer*"
        QT_MOC_LITERAL(30, 8),  // "customer"
        QT_MOC_LITERAL(39, 2),  // "id"
        QT_MOC_LITERAL(42, 4),  // "page"
        QT_MOC_LITERAL(47, 14),  // "deleteCustomer"
        QT_MOC_LITERAL(62, 10),  // "table_anme"
        QT_MOC_LITERAL(73, 13),  // "closeQuestion"
        QT_MOC_LITERAL(87, 17),  // "on_bodyPb_clicked"
        QT_MOC_LITERAL(105, 16),  // "on_addPb_clicked"
        QT_MOC_LITERAL(122, 27),  // "on_customerTv_doubleClicked"
        QT_MOC_LITERAL(150, 11),  // "QModelIndex"
        QT_MOC_LITERAL(162, 5),  // "index"
        QT_MOC_LITERAL(168, 23),  // "on_searchLE_textChanged"
        QT_MOC_LITERAL(192, 4)   // "arg1"
    },
    "CustomerWnd",
    "update",
    "",
    "Customer*",
    "customer",
    "id",
    "page",
    "deleteCustomer",
    "table_anme",
    "closeQuestion",
    "on_bodyPb_clicked",
    "on_addPb_clicked",
    "on_customerTv_doubleClicked",
    "QModelIndex",
    "index",
    "on_searchLE_textChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCustomerWndENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   56,    2, 0x06,    1 /* Public */,
       7,    2,   63,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   68,    2, 0x0a,    8 /* Public */,
      10,    0,   69,    2, 0x08,    9 /* Private */,
      11,    0,   70,    2, 0x08,   10 /* Private */,
      12,    1,   71,    2, 0x08,   11 /* Private */,
      15,    1,   74,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject CustomerWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSCustomerWndENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCustomerWndENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCustomerWndENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CustomerWnd, std::true_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Customer *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deleteCustomer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'closeQuestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bodyPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_customerTv_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_searchLE_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void CustomerWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomerWnd *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< std::add_pointer_t<Customer*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->deleteCustomer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->closeQuestion(); break;
        case 3: _t->on_bodyPb_clicked(); break;
        case 4: _t->on_addPb_clicked(); break;
        case 5: _t->on_customerTv_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 6: _t->on_searchLE_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomerWnd::*)(Customer * , QString , int );
            if (_t _q_method = &CustomerWnd::update; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CustomerWnd::*)(QString , QString );
            if (_t _q_method = &CustomerWnd::deleteCustomer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *CustomerWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomerWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCustomerWndENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CustomerWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CustomerWnd::update(Customer * _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CustomerWnd::deleteCustomer(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
