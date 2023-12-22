/****************************************************************************
** Meta object code from reading C++ file 'quesfortime.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../course/quesfortime.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quesfortime.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQuesForTimeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQuesForTimeENDCLASS = QtMocHelpers::stringData(
    "QuesForTime",
    "closeWnd",
    "",
    "transferToWork",
    "FreeTime*",
    "time",
    "id",
    "deleteTime",
    "on_choisTransPb_clicked",
    "on_transferPb_clicked",
    "on_deletePb_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQuesForTimeENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[10];
    char stringdata5[5];
    char stringdata6[3];
    char stringdata7[11];
    char stringdata8[24];
    char stringdata9[22];
    char stringdata10[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuesForTimeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuesForTimeENDCLASS_t qt_meta_stringdata_CLASSQuesForTimeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "QuesForTime"
        QT_MOC_LITERAL(12, 8),  // "closeWnd"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 14),  // "transferToWork"
        QT_MOC_LITERAL(37, 9),  // "FreeTime*"
        QT_MOC_LITERAL(47, 4),  // "time"
        QT_MOC_LITERAL(52, 2),  // "id"
        QT_MOC_LITERAL(55, 10),  // "deleteTime"
        QT_MOC_LITERAL(66, 23),  // "on_choisTransPb_clicked"
        QT_MOC_LITERAL(90, 21),  // "on_transferPb_clicked"
        QT_MOC_LITERAL(112, 19)   // "on_deletePb_clicked"
    },
    "QuesForTime",
    "closeWnd",
    "",
    "transferToWork",
    "FreeTime*",
    "time",
    "id",
    "deleteTime",
    "on_choisTransPb_clicked",
    "on_transferPb_clicked",
    "on_deletePb_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuesForTimeENDCLASS[] = {

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
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   51,    2, 0x0a,    2 /* Public */,
       7,    1,   56,    2, 0x0a,    5 /* Public */,
       8,    0,   59,    2, 0x08,    7 /* Private */,
       9,    0,   60,    2, 0x08,    8 /* Private */,
      10,    0,   61,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QuesForTime::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQuesForTimeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQuesForTimeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQuesForTimeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QuesForTime, std::true_type>,
        // method 'closeWnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transferToWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<FreeTime *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deleteTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_choisTransPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_transferPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QuesForTime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuesForTime *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWnd(); break;
        case 1: _t->transferToWork((*reinterpret_cast< std::add_pointer_t<FreeTime*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->deleteTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->on_choisTransPb_clicked(); break;
        case 4: _t->on_transferPb_clicked(); break;
        case 5: _t->on_deletePb_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QuesForTime::*)();
            if (_t _q_method = &QuesForTime::closeWnd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *QuesForTime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuesForTime::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQuesForTimeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QuesForTime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QuesForTime::closeWnd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
