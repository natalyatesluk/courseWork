/********************************************************************************
** Form generated from reading UI file 'bodywnd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BODYWND_H
#define UI_BODYWND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BodyWnd
{
public:
    QGridLayout *gridLayout;
    QTableView *bodyTv;
    QLabel *bodyLb;
    QLineEdit *bodyLe;
    QPushButton *addPb;

    void setupUi(QWidget *BodyWnd)
    {
        if (BodyWnd->objectName().isEmpty())
            BodyWnd->setObjectName("BodyWnd");
        BodyWnd->resize(262, 348);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        BodyWnd->setWindowIcon(icon);
        BodyWnd->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        gridLayout = new QGridLayout(BodyWnd);
        gridLayout->setObjectName("gridLayout");
        bodyTv = new QTableView(BodyWnd);
        bodyTv->setObjectName("bodyTv");

        gridLayout->addWidget(bodyTv, 0, 0, 1, 2);

        bodyLb = new QLabel(BodyWnd);
        bodyLb->setObjectName("bodyLb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        bodyLb->setFont(font);
        bodyLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(bodyLb, 1, 0, 1, 1);

        bodyLe = new QLineEdit(BodyWnd);
        bodyLe->setObjectName("bodyLe");

        gridLayout->addWidget(bodyLe, 1, 1, 1, 1);

        addPb = new QPushButton(BodyWnd);
        addPb->setObjectName("addPb");

        gridLayout->addWidget(addPb, 2, 0, 1, 2);

        QWidget::setTabOrder(bodyLe, addPb);
        QWidget::setTabOrder(addPb, bodyTv);

        retranslateUi(BodyWnd);

        QMetaObject::connectSlotsByName(BodyWnd);
    } // setupUi

    void retranslateUi(QWidget *BodyWnd)
    {
        BodyWnd->setWindowTitle(QCoreApplication::translate("BodyWnd", "Body", nullptr));
        bodyLb->setText(QCoreApplication::translate("BodyWnd", "Area body:", nullptr));
        addPb->setText(QCoreApplication::translate("BodyWnd", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BodyWnd: public Ui_BodyWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BODYWND_H
