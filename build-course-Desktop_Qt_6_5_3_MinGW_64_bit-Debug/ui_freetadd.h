/********************************************************************************
** Form generated from reading UI file 'freetadd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FREETADD_H
#define UI_FREETADD_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FreeTAdd
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *freeTStckW;
    QWidget *showPage;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLbl;
    QLineEdit *searchLE;
    QTableView *frTimeTv;
    QPushButton *goAddPb;
    QWidget *addePage;
    QGridLayout *gridLayout_2;
    QPushButton *addPb;
    QCalendarWidget *dateClnd;
    QPushButton *showPb;
    QLabel *timeLb;
    QLabel *masterLb;
    QTimeEdit *timeEdit;
    QComboBox *mastersCb;

    void setupUi(QWidget *FreeTAdd)
    {
        if (FreeTAdd->objectName().isEmpty())
            FreeTAdd->setObjectName("FreeTAdd");
        FreeTAdd->resize(763, 430);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        FreeTAdd->setWindowIcon(icon);
        FreeTAdd->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QTableView {\n"
"	font: 9pt \"Century Gothic\";\n"
"    border: 3px solid black;\n"
"    border-radius: 10px;\n"
"    background-color: #f0f0f0;  /* \320\244\320\276\320\275 \320\267\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\276\320\263\320\276 \320\262\321\226\320\264\320\266\320\265\321\202\320\260 */\n"
"    selection-background-color: #a6a6a6;  /* \320\232\320\276\320\273\321\226\321\200 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\217 */\n"
"}\n"
"/* \320\206\320\274\320\265\320\275\320\260 \321\201\321\202\320\276\320\262\320\261\321\206\321\226\320\262 */\n"
"QHeaderView::section {\n"
"    background-color: #404040;  /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    color: white;  /* \320\232\320\276\320\273\321\226\321\200 \321\202\320\265\320\272\321\201\321\202\321\203 */\n"
"    padding: 4px;\n"
"    border: 1px sol"
                        "id #303030;  /* \320\223\321\200\320\260\320\275\320\270\321\206\321\226 */\n"
"}\n"
"\n"
"/* \320\235\320\276\320\274\320\265\321\200\320\260\321\206\321\226\321\217 \321\200\321\217\320\264\320\272\321\226\320\262 */\n"
"QTableView QTableCornerButton::section {\n"
"    background-color: #404040;  /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    color: white;  /* \320\232\320\276\320\273\321\226\321\200 \321\202\320\265\320\272\321\201\321\202\321\203 */\n"
"    border: 1px solid #303030;  /* \320\223\321\200\320\260\320\275\320\270\321\206\321\226 */\n"
"}\n"
"\n"
"\n"
"QTableView::item:hover {\n"
"    border: 2px solid #505050;  /* \320\232\320\276\320\273\321\226\321\200 \320\263\321\200\320\260\320\275\320\270\321\206\321\226 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\275\321\226 */\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    border: 2px solid #303030;  /* \320\232\320\276\320\273\321\226\321\200 \320\263\321\200\320\260"
                        "\320\275\320\270\321\206\321\226 \320\277\321\200\320\270 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\226 */\n"
"}\n"
"QLineEdit {\n"
"font: 12pt \"Candara\";\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
"                 padding: 3px 7px;\n"
"             }\n"
"\n"
"             QLineEdit:focus {\n"
"                 border: 2px solid rgb(90, 90, 90);\n"
"            }\n"
"QPushButton\n"
"{\n"
"	font: 12pt \"Candara\";\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius: 20px;\n"
"box-shadow: 0 0 20px 10px rgb(240, 158, 255);\n"
"width: 50px;\n"
"  height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"               border: 2px solid rgb(200, 200, 200);\n"
"            }\n"
"QPushButton:pressed {\n"
"             background-color: rgb(255, 255, 255);\n"
"	        color: rgb(0, 0, 0);\n"
"            }\n"
"QLabel{font: 12p"
                        "t \"Candara\";}"));
        gridLayout = new QGridLayout(FreeTAdd);
        gridLayout->setObjectName("gridLayout");
        freeTStckW = new QStackedWidget(FreeTAdd);
        freeTStckW->setObjectName("freeTStckW");
        showPage = new QWidget();
        showPage->setObjectName("showPage");
        gridLayout_3 = new QGridLayout(showPage);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchLbl = new QLabel(showPage);
        searchLbl->setObjectName("searchLbl");
        searchLbl->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border: 1px solid #000000; /* \320\227\320\260\320\264\320\260\320\271\321\202\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\321\216 */\n"
"    border-top-left-radius: 15px; /* \320\227\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \321\202\321\226\320\273\321\214\320\272\320\270 \320\267 \320\276\320\264\320\275\320\276\320\263\320\276 \320\261\320\276\320\272\321\203 */\n"
"    border-bottom-left-radius: 15px;\n"
"    border-top-right-radius: 0; /* \320\222\321\201\321\202\320\260\320\275\320\276\320\262\321\226\321\202\321\214 \321\226\320\275\321\210\321\226 \320\272\321\203\321\202\320\270 \320\261\320\265\320\267 \320\267\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 */\n"
"    border-bottom-right-radius: 0;\n"
"    background-color: rgb(255, 255, 255); /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    color: #000000; /* \320\232\320\276\320\273\321\226\321"
                        "\200 \321\202\320\265\320\272\321\201\321\202\321\203 */\n"
"    padding: 5px; /* \320\222\321\226\320\264\321\201\321\202\321\203\320\277\320\270 */\n"
"    width: 35px;\n"
"    height: 30px;\n"
"}\n"
""));
        searchLbl->setPixmap(QPixmap(QString::fromUtf8(":/photo/search.png")));

        horizontalLayout->addWidget(searchLbl);

        searchLE = new QLineEdit(showPage);
        searchLE->setObjectName("searchLE");
        searchLE->setStyleSheet(QString::fromUtf8(" border: 1px solid #000000; /* \320\227\320\260\320\264\320\260\320\271\321\202\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\321\216 */\n"
"    border-top-left-radius: 0px; /* \320\227\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \321\202\321\226\320\273\321\214\320\272\320\270 \320\267 \320\276\320\264\320\275\320\276\320\263\320\276 \320\261\320\276\320\272\321\203 */\n"
"    border-bottom-left-radius: 0;\n"
"    border-top-right-radius: 15px; /* \320\222\321\201\321\202\320\260\320\275\320\276\320\262\321\226\321\202\321\214 \321\226\320\275\321\210\321\226 \320\272\321\203\321\202\320\270 \320\261\320\265\320\267 \320\267\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 */\n"
"    border-bottom-right-radius:15px;\n"
"    background-color: rgb(255, 255, 255); /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    color: #000000; /* \320\232\320\276\320\273\321\226\321\200 \321\202\320"
                        "\265\320\272\321\201\321\202\321\203 */\n"
"    padding: 5px; /* \320\222\321\226\320\264\321\201\321\202\321\203\320\277\320\270 */\n"
"    width: 665px;\n"
"    height: 30px;"));

        horizontalLayout->addWidget(searchLE);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 2);

        frTimeTv = new QTableView(showPage);
        frTimeTv->setObjectName("frTimeTv");

        gridLayout_3->addWidget(frTimeTv, 1, 1, 1, 1);

        goAddPb = new QPushButton(showPage);
        goAddPb->setObjectName("goAddPb");
        goAddPb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 12pt \"Candara\";\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"border: 2px;\n"
"border-radius: 20px;\n"
"box-shadow: 0 0 20px 10px rgb(240, 158, 255);\n"
"width: 50px;\n"
"  height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"               border: 2px solid rgb(200, 200, 200);\n"
"            }\n"
"QPushButton:pressed {\n"
"             background-color: rgb(255, 255, 255);\n"
"	        color: rgb(0, 0, 0);\n"
"            }"));

        gridLayout_3->addWidget(goAddPb, 2, 0, 1, 2);

        freeTStckW->addWidget(showPage);
        addePage = new QWidget();
        addePage->setObjectName("addePage");
        gridLayout_2 = new QGridLayout(addePage);
        gridLayout_2->setObjectName("gridLayout_2");
        addPb = new QPushButton(addePage);
        addPb->setObjectName("addPb");

        gridLayout_2->addWidget(addPb, 5, 2, 1, 1);

        dateClnd = new QCalendarWidget(addePage);
        dateClnd->setObjectName("dateClnd");
        dateClnd->setStyleSheet(QString::fromUtf8("QCalendarWidget {\n"
"alternate-background-color:  rgb(197, 197, 197);\n"
"\n"
"    background-color: rgb(255,255,255);/* \321\207\320\276\321\200\320\275\320\270\320\271 \321\204\320\276\320\275 */\n"
"    color:rgb(0,0,0); /* \320\261\321\226\320\273\320\270\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"}\n"
"QCalendarWidget QWidget\n"
"{\n"
"alternate-background-color:  rgb(197, 197, 197);\n"
"}\n"
"QCalendarWidget QToolButton {\n"
"    color: rgb(255,255,255);\n"
" background-color: rgb(0,0,0);\n"
"}\n"
"\n"
"QCalendarWidget QToolButton:hover {\n"
"    background-color: #333333; /* \320\267\320\274\321\226\320\275\320\260 \320\272\320\276\320\273\321\214\320\276\321\200\321\203 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\275\321\226 */\n"
"}\n"
"\n"
"QCalendarWidget QMenu {\n"
"    background-color:  rgb(255,255,255);/* \321\207\320\276\321\200\320\275\320\270\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\262\320\270\320\261\321\226\321\200"
                        "\320\275\320\270\320\272\320\260 \320\274\321\226\321\201\321\217\321\206\321\226\320\262 \321\202\320\260 \321\200\320\276\320\272\321\203 */\n"
"    color: rgb(0,0,0); /* \320\261\321\226\320\273\320\270\320\271 \321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \320\262\320\270\320\261\321\226\321\200\320\275\320\270\320\272\320\260 \320\274\321\226\321\201\321\217\321\206\321\226\320\262 \321\202\320\260 \321\200\320\276\320\272\321\203 */\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox {\n"
"    color: #FFFFFF; /* \320\261\321\226\320\273\320\270\320\271 \321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \321\201\320\277\321\226\320\275\320\261\320\276\320\272\321\201\321\226\320\262 */\n"
"}\n"
"\n"
"QCalendarWidget QPushButton {\n"
"    color: #FFFFFF; /* \320\261\321\226\320\273\320\270\320\271 \321\202\320\265\320\272\321\201\321\202 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\276\320\272 \320\262 \320\272\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321"
                        "\226 */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"	background-color: rgb(255, 255, 255);\n"
"	color:  rgb(0, 0, 0);\n"
"\n"
"    selection-background-color: rgb(0, 0, 0);/* \320\272\320\276\320\273\321\226\321\200 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\217 */\n"
"    selection-color: #FFFFFF; /* \320\272\320\276\320\273\321\226\321\200 \321\202\320\265\320\272\321\201\321\202\321\203 \320\264\320\273\321\217 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\217 */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:disabled {\n"
"  \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(197, 197, 197);\n"
"}\n"
"\n"
"/* \320\224\320\276\320\264\320\260\321\202\320\272\320\276\320\262\321\226 \321\201\321\202\320\270\320\273\321\226\320\267\320\260\321\206\321\226\321\227 \320\264\320\273\321\217 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\276\320\263\320\276 \320\264\320\275\321\217 \321\202\320\260 \321\202\320\265\320\272\321\201"
                        "\321\202\321\203 */\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar {\n"
"   background-color: rgb(0,0,0);\n"
"}\n"
"\n"
"QCalendarWidget QMenu QAbstractItemView {\n"
"    selection-background-color: #333333; /* \320\272\320\276\320\273\321\226\321\200 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\217 \320\262 \320\274\320\265\320\275\321\216 \320\274\321\226\321\201\321\217\321\206\321\226\320\262 \321\202\320\260 \321\200\320\276\320\272\321\203 */\n"
"}\n"
""));
        dateClnd->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateClnd->setSelectedDate(QDate(2023, 12, 5));
        dateClnd->setMinimumDate(QDate(2021, 9, 1));
        dateClnd->setFirstDayOfWeek(Qt::Monday);

        gridLayout_2->addWidget(dateClnd, 0, 0, 1, 3);

        showPb = new QPushButton(addePage);
        showPb->setObjectName("showPb");

        gridLayout_2->addWidget(showPb, 5, 0, 1, 2);

        timeLb = new QLabel(addePage);
        timeLb->setObjectName("timeLb");

        gridLayout_2->addWidget(timeLb, 2, 0, 1, 1);

        masterLb = new QLabel(addePage);
        masterLb->setObjectName("masterLb");

        gridLayout_2->addWidget(masterLb, 4, 0, 1, 1);

        timeEdit = new QTimeEdit(addePage);
        timeEdit->setObjectName("timeEdit");

        gridLayout_2->addWidget(timeEdit, 2, 1, 1, 2);

        mastersCb = new QComboBox(addePage);
        mastersCb->setObjectName("mastersCb");

        gridLayout_2->addWidget(mastersCb, 4, 1, 1, 2);

        freeTStckW->addWidget(addePage);

        gridLayout->addWidget(freeTStckW, 1, 0, 1, 1);

        QWidget::setTabOrder(dateClnd, timeEdit);
        QWidget::setTabOrder(timeEdit, addPb);
        QWidget::setTabOrder(addPb, showPb);
        QWidget::setTabOrder(showPb, goAddPb);
        QWidget::setTabOrder(goAddPb, frTimeTv);

        retranslateUi(FreeTAdd);

        freeTStckW->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FreeTAdd);
    } // setupUi

    void retranslateUi(QWidget *FreeTAdd)
    {
        FreeTAdd->setWindowTitle(QCoreApplication::translate("FreeTAdd", "Free time", nullptr));
        searchLbl->setText(QString());
        goAddPb->setText(QCoreApplication::translate("FreeTAdd", "GO TO ADD", nullptr));
        addPb->setText(QCoreApplication::translate("FreeTAdd", "ADD", nullptr));
        showPb->setText(QCoreApplication::translate("FreeTAdd", "SHOW", nullptr));
        timeLb->setText(QCoreApplication::translate("FreeTAdd", "Time:", nullptr));
        masterLb->setText(QCoreApplication::translate("FreeTAdd", "Master:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FreeTAdd: public Ui_FreeTAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FREETADD_H
