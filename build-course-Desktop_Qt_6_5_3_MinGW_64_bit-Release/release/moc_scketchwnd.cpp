/****************************************************************************
** Meta object code from reading C++ file 'scketchwnd.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../course/scketchwnd.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scketchwnd.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSScketchWndENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSScketchWndENDCLASS = QtMocHelpers::stringData(
    "ScketchWnd",
    "add",
    "",
    "QByteArray&",
    "imageData",
    "page",
    "loadImage",
    "on_nextPb_clicked",
    "on_backPb_clicked",
    "on_deletePb_clicked",
    "closeQstn",
    "Sketch*",
    "sketch"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSScketchWndENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[4];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[10];
    char stringdata5[5];
    char stringdata6[10];
    char stringdata7[18];
    char stringdata8[18];
    char stringdata9[20];
    char stringdata10[10];
    char stringdata11[8];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSScketchWndENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSScketchWndENDCLASS_t qt_meta_stringdata_CLASSScketchWndENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ScketchWnd"
        QT_MOC_LITERAL(11, 3),  // "add"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 11),  // "QByteArray&"
        QT_MOC_LITERAL(28, 9),  // "imageData"
        QT_MOC_LITERAL(38, 4),  // "page"
        QT_MOC_LITERAL(43, 9),  // "loadImage"
        QT_MOC_LITERAL(53, 17),  // "on_nextPb_clicked"
        QT_MOC_LITERAL(71, 17),  // "on_backPb_clicked"
        QT_MOC_LITERAL(89, 19),  // "on_deletePb_clicked"
        QT_MOC_LITERAL(109, 9),  // "closeQstn"
        QT_MOC_LITERAL(119, 7),  // "Sketch*"
        QT_MOC_LITERAL(127, 6)   // "sketch"
    },
    "ScketchWnd",
    "add",
    "",
    "QByteArray&",
    "imageData",
    "page",
    "loadImage",
    "on_nextPb_clicked",
    "on_backPb_clicked",
    "on_deletePb_clicked",
    "closeQstn",
    "Sketch*",
    "sketch"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScketchWndENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   55,    2, 0x08,    4 /* Private */,
       7,    0,   56,    2, 0x08,    5 /* Private */,
       8,    0,   57,    2, 0x08,    6 /* Private */,
       9,    0,   58,    2, 0x08,    7 /* Private */,
      10,    1,   59,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScketchWnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSScketchWndENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScketchWndENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScketchWndENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScketchWnd, std::true_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'loadImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nextPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeQstn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Sketch *, std::false_type>
    >,
    nullptr
} };

void ScketchWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScketchWnd *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->loadImage(); break;
        case 2: _t->on_nextPb_clicked(); break;
        case 3: _t->on_backPb_clicked(); break;
        case 4: _t->on_deletePb_clicked(); break;
        case 5: _t->closeQstn((*reinterpret_cast< std::add_pointer_t<Sketch*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScketchWnd::*)(QByteArray & , int );
            if (_t _q_method = &ScketchWnd::add; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ScketchWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScketchWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScketchWndENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScketchWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ScketchWnd::add(QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
