/****************************************************************************
** Meta object code from reading C++ file 'workwnd.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../course/workwnd.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workwnd.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWorkWndENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWorkWndENDCLASS = QtMocHelpers::stringData(
    "WorkWnd",
    "updateTime",
    "",
    "WorkTime*",
    "time",
    "id",
    "page",
    "deleteTime",
    "table_name",
    "on_workTv_doubleClicked",
    "QModelIndex",
    "index",
    "on_searchLE_textChanged",
    "arg1",
    "closeQstn",
    "updateTable"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWorkWndENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[8];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[5];
    char stringdata5[3];
    char stringdata6[5];
    char stringdata7[11];
    char stringdata8[11];
    char stringdata9[24];
    char stringdata10[12];
    char stringdata11[6];
    char stringdata12[24];
    char stringdata13[5];
    char stringdata14[10];
    char stringdata15[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWorkWndENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWorkWndENDCLASS_t qt_meta_stringdata_CLASSWorkWndENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "WorkWnd"
        QT_MOC_LITERAL(8, 10),  // "updateTime"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 9),  // "WorkTime*"
        QT_MOC_LITERAL(30, 4),  // "time"
        QT_MOC_LITERAL(35, 2),  // "id"
        QT_MOC_LITERAL(38, 4),  // "page"
        QT_MOC_LITERAL(43, 10),  // "deleteTime"
        QT_MOC_LITERAL(54, 10),  // "table_name"
        QT_MOC_LITERAL(65, 23),  // "on_workTv_doubleClicked"
        QT_MOC_LITERAL(89, 11),  // "QModelIndex"
        QT_MOC_LITERAL(101, 5),  // "index"
        QT_MOC_LITERAL(107, 23),  // "on_searchLE_textChanged"
        QT_MOC_LITERAL(131, 4),  // "arg1"
        QT_MOC_LITERAL(136, 9),  // "closeQstn"
        QT_MOC_LITERAL(146, 11)   // "updateTable"
    },
    "WorkWnd",
    "updateTime",
    "",
    "WorkTime*",
    "time",
    "id",
    "page",
    "deleteTime",
    "table_name",
    "on_workTv_doubleClicked",
    "QModelIndex",
    "index",
    "on_searchLE_textChanged",
    "arg1",
    "closeQstn",
    "updateTable"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWorkWndENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,
       7,    2,   57,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   62,    2, 0x08,    8 /* Private */,
      12,    1,   65,    2, 0x08,   10 /* Private */,
      14,    0,   68,    2, 0x0a,   12 /* Public */,
      15,    0,   69,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WorkWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWorkWndENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWorkWndENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWorkWndENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WorkWnd, std::true_type>,
        // method 'updateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<WorkTime *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deleteTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_workTv_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_searchLE_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'closeQstn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WorkWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WorkWnd *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateTime((*reinterpret_cast< std::add_pointer_t<WorkTime*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->deleteTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->on_workTv_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->on_searchLE_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->closeQstn(); break;
        case 5: _t->updateTable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WorkWnd::*)(WorkTime * , QString , int );
            if (_t _q_method = &WorkWnd::updateTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WorkWnd::*)(QString , QString );
            if (_t _q_method = &WorkWnd::deleteTime; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *WorkWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WorkWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWorkWndENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WorkWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WorkWnd::updateTime(WorkTime * _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WorkWnd::deleteTime(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
