/********************************************************************************
** Form generated from reading UI file 'application.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_H
#define UI_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application
{
public:
    QGridLayout *gridLayout_2;
    QLabel *appLb;
    QScrollArea *AppscrollArea;
    QWidget *appScrollAreWiget;
    QGridLayout *gridLayout;
    QTableView *appTv;

    void setupUi(QWidget *Application)
    {
        if (Application->objectName().isEmpty())
            Application->setObjectName("Application");
        Application->resize(756, 432);
        Application->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px; /* \320\240\320\265\320\263\321\203\320\273\321\216\321\224 \320\267\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\203\321\202\321\226\320\262 */\n"
"    padding: 1px 18px 1px 3px; /* \320\240\320\265\320\263\321\203\320\273\321\216\321\224 \320\262\321\226\320\264\321\201\321\202\321\203\320\277\320\270 \320\262\320\275\321\203\321\202\321\200\321\226\321\210\320\275\321\226\321\205 \320\265\320\273\320\265\320\274\320\265\320\275\321\202\321\226\320\262 */\n"
"    min-width: 6em;\n"
"	font: 9pt \"Candara\";\n"
"}\n"
"\n"
"\n"
"QWidget\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QTableView {\n"
"	font: 9pt \"Century Gothic\";\n"
"    border: 3px solid black;\n"
"    border-radius: 10px;\n"
"    background-color: #f0f0f0;  /* \320\244\320\276\320\275 \320\267\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\276\320\263\320"
                        "\276 \320\262\321\226\320\264\320\266\320\265\321\202\320\260 */\n"
"    selection-background-color: #a6a6a6;  /* \320\232\320\276\320\273\321\226\321\200 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\217 */\n"
"}\n"
"/* \320\206\320\274\320\265\320\275\320\260 \321\201\321\202\320\276\320\262\320\261\321\206\321\226\320\262 */\n"
"QHeaderView::section {\n"
"    background-color: #404040;  /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    color: white;  /* \320\232\320\276\320\273\321\226\321\200 \321\202\320\265\320\272\321\201\321\202\321\203 */\n"
"    padding: 4px;\n"
"    border: 1px solid #303030;  /* \320\223\321\200\320\260\320\275\320\270\321\206\321\226 */\n"
"}\n"
"\n"
"/* \320\235\320\276\320\274\320\265\321\200\320\260\321\206\321\226\321\217 \321\200\321\217\320\264\320\272\321\226\320\262 */\n"
"QTableView QTableCornerButton::section {\n"
"    background-color: #404040;  /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275"
                        "\321\203 */\n"
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
"    border: 2px solid #303030;  /* \320\232\320\276\320\273\321\226\321\200 \320\263\321\200\320\260\320\275\320\270\321\206\321\226 \320\277\321\200\320\270 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\226 */\n"
"}\n"
"QLineEdit {\n"
"font: 12pt \"Candara\";\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
""
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
"QLabel{font: 12pt \"Candara\";}"));
        gridLayout_2 = new QGridLayout(Application);
        gridLayout_2->setObjectName("gridLayout_2");
        appLb = new QLabel(Application);
        appLb->setObjectName("appLb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        appLb->setFont(font);
        appLb->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Candara\";"));
        appLb->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(appLb, 0, 0, 1, 1);

        AppscrollArea = new QScrollArea(Application);
        AppscrollArea->setObjectName("AppscrollArea");
        AppscrollArea->setWidgetResizable(true);
        appScrollAreWiget = new QWidget();
        appScrollAreWiget->setObjectName("appScrollAreWiget");
        appScrollAreWiget->setGeometry(QRect(0, 0, 736, 373));
        gridLayout = new QGridLayout(appScrollAreWiget);
        gridLayout->setObjectName("gridLayout");
        appTv = new QTableView(appScrollAreWiget);
        appTv->setObjectName("appTv");

        gridLayout->addWidget(appTv, 1, 0, 1, 1);

        AppscrollArea->setWidget(appScrollAreWiget);

        gridLayout_2->addWidget(AppscrollArea, 1, 0, 1, 1);


        retranslateUi(Application);

        QMetaObject::connectSlotsByName(Application);
    } // setupUi

    void retranslateUi(QWidget *Application)
    {
        Application->setWindowTitle(QCoreApplication::translate("Application", "Form", nullptr));
        appLb->setText(QCoreApplication::translate("Application", "Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application: public Ui_Application {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_H
