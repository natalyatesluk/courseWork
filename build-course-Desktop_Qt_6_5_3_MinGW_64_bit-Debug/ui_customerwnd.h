/********************************************************************************
** Form generated from reading UI file 'customerwnd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERWND_H
#define UI_CUSTOMERWND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerWnd
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLbl;
    QLineEdit *searchLE;
    QLabel *nameLb;
    QLineEdit *nameLE;
    QLabel *priceLb;
    QLineEdit *priceLE;
    QPushButton *bodyPb;
    QLabel *surenameLb;
    QLineEdit *surenameLE;
    QLabel *bodyLb;
    QLineEdit *bodyLE;
    QLabel *numberLb;
    QLineEdit *numberLE;
    QLabel *masterLb;
    QLineEdit *masterLE;
    QPushButton *addPb;
    QTableView *customerTv;

    void setupUi(QWidget *CustomerWnd)
    {
        if (CustomerWnd->objectName().isEmpty())
            CustomerWnd->setObjectName("CustomerWnd");
        CustomerWnd->resize(745, 430);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CustomerWnd->setWindowIcon(icon);
        CustomerWnd->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        gridLayout = new QGridLayout(CustomerWnd);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchLbl = new QLabel(CustomerWnd);
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

        searchLE = new QLineEdit(CustomerWnd);
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


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 5);

        nameLb = new QLabel(CustomerWnd);
        nameLb->setObjectName("nameLb");

        gridLayout->addWidget(nameLb, 2, 0, 1, 1);

        nameLE = new QLineEdit(CustomerWnd);
        nameLE->setObjectName("nameLE");

        gridLayout->addWidget(nameLE, 2, 1, 1, 1);

        priceLb = new QLabel(CustomerWnd);
        priceLb->setObjectName("priceLb");

        gridLayout->addWidget(priceLb, 2, 2, 1, 1);

        priceLE = new QLineEdit(CustomerWnd);
        priceLE->setObjectName("priceLE");

        gridLayout->addWidget(priceLE, 2, 3, 1, 1);

        bodyPb = new QPushButton(CustomerWnd);
        bodyPb->setObjectName("bodyPb");

        gridLayout->addWidget(bodyPb, 2, 4, 1, 1);

        surenameLb = new QLabel(CustomerWnd);
        surenameLb->setObjectName("surenameLb");

        gridLayout->addWidget(surenameLb, 3, 0, 1, 1);

        surenameLE = new QLineEdit(CustomerWnd);
        surenameLE->setObjectName("surenameLE");

        gridLayout->addWidget(surenameLE, 3, 1, 1, 1);

        bodyLb = new QLabel(CustomerWnd);
        bodyLb->setObjectName("bodyLb");

        gridLayout->addWidget(bodyLb, 3, 2, 1, 1);

        bodyLE = new QLineEdit(CustomerWnd);
        bodyLE->setObjectName("bodyLE");

        gridLayout->addWidget(bodyLE, 3, 3, 1, 1);

        numberLb = new QLabel(CustomerWnd);
        numberLb->setObjectName("numberLb");

        gridLayout->addWidget(numberLb, 4, 0, 1, 1);

        numberLE = new QLineEdit(CustomerWnd);
        numberLE->setObjectName("numberLE");

        gridLayout->addWidget(numberLE, 4, 1, 1, 1);

        masterLb = new QLabel(CustomerWnd);
        masterLb->setObjectName("masterLb");

        gridLayout->addWidget(masterLb, 4, 2, 1, 1);

        masterLE = new QLineEdit(CustomerWnd);
        masterLE->setObjectName("masterLE");

        gridLayout->addWidget(masterLE, 4, 3, 1, 1);

        addPb = new QPushButton(CustomerWnd);
        addPb->setObjectName("addPb");

        gridLayout->addWidget(addPb, 4, 4, 1, 1);

        customerTv = new QTableView(CustomerWnd);
        customerTv->setObjectName("customerTv");

        gridLayout->addWidget(customerTv, 1, 0, 1, 5);

        QWidget::setTabOrder(nameLE, surenameLE);
        QWidget::setTabOrder(surenameLE, numberLE);
        QWidget::setTabOrder(numberLE, priceLE);
        QWidget::setTabOrder(priceLE, bodyLE);
        QWidget::setTabOrder(bodyLE, masterLE);
        QWidget::setTabOrder(masterLE, addPb);
        QWidget::setTabOrder(addPb, bodyPb);
        QWidget::setTabOrder(bodyPb, customerTv);

        retranslateUi(CustomerWnd);

        QMetaObject::connectSlotsByName(CustomerWnd);
    } // setupUi

    void retranslateUi(QWidget *CustomerWnd)
    {
        CustomerWnd->setWindowTitle(QCoreApplication::translate("CustomerWnd", "Customers", nullptr));
        searchLbl->setText(QString());
        nameLb->setText(QCoreApplication::translate("CustomerWnd", "Name:", nullptr));
        priceLb->setText(QCoreApplication::translate("CustomerWnd", "Price:", nullptr));
        bodyPb->setText(QCoreApplication::translate("CustomerWnd", "Body", nullptr));
        surenameLb->setText(QCoreApplication::translate("CustomerWnd", "Surename:", nullptr));
        bodyLb->setText(QCoreApplication::translate("CustomerWnd", "Body:", nullptr));
        numberLb->setText(QCoreApplication::translate("CustomerWnd", "Number:", nullptr));
        masterLb->setText(QCoreApplication::translate("CustomerWnd", "Master:", nullptr));
        addPb->setText(QCoreApplication::translate("CustomerWnd", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerWnd: public Ui_CustomerWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERWND_H
