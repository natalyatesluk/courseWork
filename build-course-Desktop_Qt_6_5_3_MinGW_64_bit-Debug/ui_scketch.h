/********************************************************************************
** Form generated from reading UI file 'scketch.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCKETCH_H
#define UI_SCKETCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scketch
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *addPb;

    void setupUi(QWidget *Scketch)
    {
        if (Scketch->objectName().isEmpty())
            Scketch->setObjectName("Scketch");
        Scketch->resize(545, 367);
        scrollArea = new QScrollArea(Scketch);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 541, 301));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 539, 299));
        scrollArea->setWidget(scrollAreaWidgetContents);
        addPb = new QPushButton(Scketch);
        addPb->setObjectName("addPb");
        addPb->setGeometry(QRect(420, 320, 80, 24));

        retranslateUi(Scketch);

        QMetaObject::connectSlotsByName(Scketch);
    } // setupUi

    void retranslateUi(QWidget *Scketch)
    {
        Scketch->setWindowTitle(QCoreApplication::translate("Scketch", "Form", nullptr));
        addPb->setText(QCoreApplication::translate("Scketch", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScketchWnd: public Ui_Scketch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCKETCH_H
