/****************************************************************************
** Meta object code from reading C++ file 'question.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../course/question.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'question.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQuestionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQuestionENDCLASS = QtMocHelpers::stringData(
    "Question",
    "closeWnd",
    "",
    "closeWndSketch",
    "Sketch*",
    "sketch",
    "closeWndStr",
    "value",
    "updateMasters",
    "Master*",
    "master",
    "id",
    "page",
    "deleteItem",
    "table_name",
    "updateBody",
    "area",
    "updateCustomer",
    "Customer*",
    "customer",
    "updateTime",
    "WorkTime*",
    "time",
    "addScetch",
    "QByteArray&",
    "image",
    "submitApp",
    "nameskt",
    "on_updatePb_clicked",
    "on_updatePb_2_clicked",
    "on_deletePb_clicked",
    "on_updateBodyPb_clicked",
    "on_updateCusPb_clicked",
    "on_updateTimePb_clicked",
    "on_addPb_clicked",
    "on_submitApliPb_clicked",
    "on_dateCb_currentTextChanged",
    "arg1",
    "on_masterCb_currentTextChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQuestionENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[9];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[8];
    char stringdata5[7];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[14];
    char stringdata9[8];
    char stringdata10[7];
    char stringdata11[3];
    char stringdata12[5];
    char stringdata13[11];
    char stringdata14[11];
    char stringdata15[11];
    char stringdata16[5];
    char stringdata17[15];
    char stringdata18[10];
    char stringdata19[9];
    char stringdata20[11];
    char stringdata21[10];
    char stringdata22[5];
    char stringdata23[10];
    char stringdata24[12];
    char stringdata25[6];
    char stringdata26[10];
    char stringdata27[8];
    char stringdata28[20];
    char stringdata29[22];
    char stringdata30[20];
    char stringdata31[24];
    char stringdata32[23];
    char stringdata33[24];
    char stringdata34[17];
    char stringdata35[24];
    char stringdata36[29];
    char stringdata37[5];
    char stringdata38[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuestionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuestionENDCLASS_t qt_meta_stringdata_CLASSQuestionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "Question"
        QT_MOC_LITERAL(9, 8),  // "closeWnd"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 14),  // "closeWndSketch"
        QT_MOC_LITERAL(34, 7),  // "Sketch*"
        QT_MOC_LITERAL(42, 6),  // "sketch"
        QT_MOC_LITERAL(49, 11),  // "closeWndStr"
        QT_MOC_LITERAL(61, 5),  // "value"
        QT_MOC_LITERAL(67, 13),  // "updateMasters"
        QT_MOC_LITERAL(81, 7),  // "Master*"
        QT_MOC_LITERAL(89, 6),  // "master"
        QT_MOC_LITERAL(96, 2),  // "id"
        QT_MOC_LITERAL(99, 4),  // "page"
        QT_MOC_LITERAL(104, 10),  // "deleteItem"
        QT_MOC_LITERAL(115, 10),  // "table_name"
        QT_MOC_LITERAL(126, 10),  // "updateBody"
        QT_MOC_LITERAL(137, 4),  // "area"
        QT_MOC_LITERAL(142, 14),  // "updateCustomer"
        QT_MOC_LITERAL(157, 9),  // "Customer*"
        QT_MOC_LITERAL(167, 8),  // "customer"
        QT_MOC_LITERAL(176, 10),  // "updateTime"
        QT_MOC_LITERAL(187, 9),  // "WorkTime*"
        QT_MOC_LITERAL(197, 4),  // "time"
        QT_MOC_LITERAL(202, 9),  // "addScetch"
        QT_MOC_LITERAL(212, 11),  // "QByteArray&"
        QT_MOC_LITERAL(224, 5),  // "image"
        QT_MOC_LITERAL(230, 9),  // "submitApp"
        QT_MOC_LITERAL(240, 7),  // "nameskt"
        QT_MOC_LITERAL(248, 19),  // "on_updatePb_clicked"
        QT_MOC_LITERAL(268, 21),  // "on_updatePb_2_clicked"
        QT_MOC_LITERAL(290, 19),  // "on_deletePb_clicked"
        QT_MOC_LITERAL(310, 23),  // "on_updateBodyPb_clicked"
        QT_MOC_LITERAL(334, 22),  // "on_updateCusPb_clicked"
        QT_MOC_LITERAL(357, 23),  // "on_updateTimePb_clicked"
        QT_MOC_LITERAL(381, 16),  // "on_addPb_clicked"
        QT_MOC_LITERAL(398, 23),  // "on_submitApliPb_clicked"
        QT_MOC_LITERAL(422, 28),  // "on_dateCb_currentTextChanged"
        QT_MOC_LITERAL(451, 4),  // "arg1"
        QT_MOC_LITERAL(456, 30)   // "on_masterCb_currentTextChanged"
    },
    "Question",
    "closeWnd",
    "",
    "closeWndSketch",
    "Sketch*",
    "sketch",
    "closeWndStr",
    "value",
    "updateMasters",
    "Master*",
    "master",
    "id",
    "page",
    "deleteItem",
    "table_name",
    "updateBody",
    "area",
    "updateCustomer",
    "Customer*",
    "customer",
    "updateTime",
    "WorkTime*",
    "time",
    "addScetch",
    "QByteArray&",
    "image",
    "submitApp",
    "nameskt",
    "on_updatePb_clicked",
    "on_updatePb_2_clicked",
    "on_deletePb_clicked",
    "on_updateBodyPb_clicked",
    "on_updateCusPb_clicked",
    "on_updateTimePb_clicked",
    "on_addPb_clicked",
    "on_submitApliPb_clicked",
    "on_dateCb_currentTextChanged",
    "arg1",
    "on_masterCb_currentTextChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuestionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  134,    2, 0x06,    1 /* Public */,
       3,    1,  135,    2, 0x06,    2 /* Public */,
       6,    1,  138,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    3,  141,    2, 0x0a,    6 /* Public */,
      13,    2,  148,    2, 0x0a,   10 /* Public */,
      15,    3,  153,    2, 0x0a,   13 /* Public */,
      17,    3,  160,    2, 0x0a,   17 /* Public */,
      20,    3,  167,    2, 0x0a,   21 /* Public */,
      23,    2,  174,    2, 0x0a,   25 /* Public */,
      26,    2,  179,    2, 0x0a,   28 /* Public */,
      28,    0,  184,    2, 0x08,   31 /* Private */,
      29,    0,  185,    2, 0x08,   32 /* Private */,
      30,    0,  186,    2, 0x08,   33 /* Private */,
      31,    0,  187,    2, 0x08,   34 /* Private */,
      32,    0,  188,    2, 0x08,   35 /* Private */,
      33,    0,  189,    2, 0x08,   36 /* Private */,
      34,    0,  190,    2, 0x08,   37 /* Private */,
      35,    0,  191,    2, 0x08,   38 /* Private */,
      36,    1,  192,    2, 0x08,   39 /* Private */,
      38,    1,  195,    2, 0x08,   41 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   16,   11,   12,
    QMetaType::Void, 0x80000000 | 18, QMetaType::QString, QMetaType::Int,   19,   11,   12,
    QMetaType::Void, 0x80000000 | 21, QMetaType::QString, QMetaType::Int,   22,   11,   12,
    QMetaType::Void, 0x80000000 | 24, QMetaType::Int,   25,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   12,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString,   37,

       0        // eod
};

Q_CONSTINIT const QMetaObject Question::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSQuestionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQuestionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQuestionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Question, std::true_type>,
        // method 'closeWnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeWndSketch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Sketch *, std::false_type>,
        // method 'closeWndStr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateMasters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Master *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'deleteItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateBody'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateCustomer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Customer *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<WorkTime *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addScetch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'submitApp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_updatePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updatePb_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateBodyPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateCusPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateTimePb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_submitApliPb_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dateCb_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_masterCb_currentTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Question::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Question *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeWnd(); break;
        case 1: _t->closeWndSketch((*reinterpret_cast< std::add_pointer_t<Sketch*>>(_a[1]))); break;
        case 2: _t->closeWndStr((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->updateMasters((*reinterpret_cast< std::add_pointer_t<Master*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->deleteItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->updateBody((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->updateCustomer((*reinterpret_cast< std::add_pointer_t<Customer*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->updateTime((*reinterpret_cast< std::add_pointer_t<WorkTime*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->addScetch((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->submitApp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->on_updatePb_clicked(); break;
        case 11: _t->on_updatePb_2_clicked(); break;
        case 12: _t->on_deletePb_clicked(); break;
        case 13: _t->on_updateBodyPb_clicked(); break;
        case 14: _t->on_updateCusPb_clicked(); break;
        case 15: _t->on_updateTimePb_clicked(); break;
        case 16: _t->on_addPb_clicked(); break;
        case 17: _t->on_submitApliPb_clicked(); break;
        case 18: _t->on_dateCb_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->on_masterCb_currentTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Question::*)();
            if (_t _q_method = &Question::closeWnd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Question::*)(Sketch * );
            if (_t _q_method = &Question::closeWndSketch; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Question::*)(QString );
            if (_t _q_method = &Question::closeWndStr; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Question::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Question::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQuestionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Question::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void Question::closeWnd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Question::closeWndSketch(Sketch * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Question::closeWndStr(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
