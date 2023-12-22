/********************************************************************************
** Form generated from reading UI file 'scketchwnd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCKETCHWND_H
#define UI_SCKETCHWND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScketchWnd
{
public:
    QGridLayout *gridLayout;
    QPushButton *nextPb;
    QPushButton *addPb;
    QStackedWidget *sketchStckW;
    QPushButton *backPb;

    void setupUi(QWidget *ScketchWnd)
    {
        if (ScketchWnd->objectName().isEmpty())
            ScketchWnd->setObjectName("ScketchWnd");
        ScketchWnd->resize(704, 430);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ScketchWnd->setWindowIcon(icon);
        ScketchWnd->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"	font: 14pt \"Candara\";\n"
"}\n"
"QPushButton\n"
"{\n"
" padding-left: 5px; \n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"               border: 4px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }\n"
"QPushButton:pressed {\n"
" border: 2px solid  rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }"));
        gridLayout = new QGridLayout(ScketchWnd);
        gridLayout->setObjectName("gridLayout");
        nextPb = new QPushButton(ScketchWnd);
        nextPb->setObjectName("nextPb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/photo/next.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        nextPb->setIcon(icon1);
        nextPb->setIconSize(QSize(40, 33));

        gridLayout->addWidget(nextPb, 0, 3, 1, 1);

        addPb = new QPushButton(ScketchWnd);
        addPb->setObjectName("addPb");

        gridLayout->addWidget(addPb, 1, 1, 1, 2);

        sketchStckW = new QStackedWidget(ScketchWnd);
        sketchStckW->setObjectName("sketchStckW");

        gridLayout->addWidget(sketchStckW, 0, 1, 1, 1);

        backPb = new QPushButton(ScketchWnd);
        backPb->setObjectName("backPb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/photo/back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        backPb->setIcon(icon2);
        backPb->setIconSize(QSize(40, 33));

        gridLayout->addWidget(backPb, 0, 0, 1, 1);


        retranslateUi(ScketchWnd);

        QMetaObject::connectSlotsByName(ScketchWnd);
    } // setupUi

    void retranslateUi(QWidget *ScketchWnd)
    {
        ScketchWnd->setWindowTitle(QCoreApplication::translate("ScketchWnd", "Sketches", nullptr));
        nextPb->setText(QString());
        addPb->setText(QCoreApplication::translate("ScketchWnd", "ADD SKETCH", nullptr));
        backPb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScketchWnd: public Ui_ScketchWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCKETCHWND_H
