/****************************************************************************
** Meta object code from reading C++ file 'bodywnd.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../course/bodywnd.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bodywnd.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSBodyWndENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBodyWndENDCLASS = QtMocHelpers::stringData(
    "BodyWnd",
    "update",
    "",
    "area",
    "id",
    "page",
    "deleteBody",
    "table_name",
    "closeWnd",
    "on_addPb_clicked",
    "on_bodyTv_doubleClicked",
    "QModelIndex",
    "index",
    "closeQuestion"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBodyWndENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[8];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[3];
    char stringdata5[5];
    char stringdata6[11];
    char stringdata7[11];
    char stringdata8[9];
    char stringdata9[17];
    char stringdata10[24];
    char stringdata11[12];
    char stringdata12[6];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBodyWndENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBodyWndENDCLASS_t qt_meta_stringdata_CLASSBodyWndENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "BodyWnd"
        QT_MOC_LITERAL(8, 6),  // "update"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 4),  // "area"
        QT_MOC_LITERAL(21, 2),  // "id"
        QT_MOC_LITERAL(24, 4),  // "page"
        QT_MOC_LITERAL(29, 10),  // "deleteBody"
        QT_MOC_LITERAL(40, 10),  // "table_name"
        QT_MOC_LITERAL(51, 8),  // "closeWnd"
        QT_MOC_LITERAL(60, 16),  // "on_addPb_clicked"
        QT_MOC_LITERAL(77, 23),  // "on_bodyTv_doubleClicked"
        QT_MOC_LITERAL(101, 11),  // "QModelIndex"
        QT_MOC_LITERAL(113, 5),  // "index"
        QT_MOC_LITERAL(119, 13)   // "closeQuestion"
    },
    "BodyWnd",
    "update",
    "",
    "area",
    "id",
    "page",
    "deleteBody",
    "table_name",
    "closeWnd",
    "on_addPb_clicked",
    "on_bodyTv_doubleClicked",
    "QModelIndex",
    "index",
    "closeQuestion"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBodyWndENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,
       6,    2,   57,    2, 0x06,    5 /* Public */,
       8,    0,   62,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   63,    2, 0x08,    9 /* Private */,
      10,    1,   64,    2, 0x08,   10 /* Private */,
      13,    0,   67,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject BodyWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSBodyWndENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBodyWndENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBodyWndENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BodyWnd, std::true_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deleteBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'closeWnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bodyTv_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'closeQuestion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void BodyWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BodyWnd *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->deleteBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->closeWnd(); break;
        case 3: _t->on_addPb_clicked(); break;
        case 4: _t->on_bodyTv_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 5: _t->closeQuestion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BodyWnd::*)(QString , QString , int );
            if (_t _q_method = &BodyWnd::update; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BodyWnd::*)(QString , QString );
            if (_t _q_method = &BodyWnd::deleteBody; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BodyWnd::*)();
            if (_t _q_method = &BodyWnd::closeWnd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *BodyWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BodyWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBodyWndENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BodyWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BodyWnd::update(QString _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BodyWnd::deleteBody(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BodyWnd::closeWnd()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
