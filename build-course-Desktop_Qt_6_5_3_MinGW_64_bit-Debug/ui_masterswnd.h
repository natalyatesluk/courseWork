/********************************************************************************
** Form generated from reading UI file 'masterswnd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERSWND_H
#define UI_MASTERSWND_H

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

class Ui_MastersWnd
{
public:
    QGridLayout *gridLayout;
    QLineEdit *priceLE;
    QLineEdit *surenameLE;
    QLabel *surenameLb;
    QLineEdit *nameLE;
    QLineEdit *doneWorkLE;
    QLabel *nameLb;
    QLineEdit *numberLE;
    QLabel *doneWorkLb;
    QLabel *numberLb;
    QTableView *mastersTv;
    QLabel *priceLb;
    QPushButton *addPb;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLbl;
    QLineEdit *searchLE;

    void setupUi(QWidget *MastersWnd)
    {
        if (MastersWnd->objectName().isEmpty())
            MastersWnd->setObjectName("MastersWnd");
        MastersWnd->resize(842, 430);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MastersWnd->setWindowIcon(icon);
        MastersWnd->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        gridLayout = new QGridLayout(MastersWnd);
        gridLayout->setObjectName("gridLayout");
        priceLE = new QLineEdit(MastersWnd);
        priceLE->setObjectName("priceLE");
        priceLE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
"                 padding: 3px 7px;\n"
"             }\n"
"\n"
"             QLineEdit:focus {\n"
"                 border: 2px solid rgb(90, 90, 90);\n"
"            }"));

        gridLayout->addWidget(priceLE, 4, 5, 1, 1);

        surenameLE = new QLineEdit(MastersWnd);
        surenameLE->setObjectName("surenameLE");
        surenameLE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
"                 padding: 3px 7px;\n"
"             }\n"
"\n"
"             QLineEdit:focus {\n"
"                 border: 2px solid rgb(90, 90, 90);\n"
"            }"));

        gridLayout->addWidget(surenameLE, 5, 2, 1, 1);

        surenameLb = new QLabel(MastersWnd);
        surenameLb->setObjectName("surenameLb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        surenameLb->setFont(font);

        gridLayout->addWidget(surenameLb, 5, 0, 1, 1);

        nameLE = new QLineEdit(MastersWnd);
        nameLE->setObjectName("nameLE");
        nameLE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
"                 padding: 3px 7px;\n"
"             }\n"
"\n"
"             QLineEdit:focus {\n"
"                 border: 2px solid rgb(90, 90, 90);\n"
"            }"));

        gridLayout->addWidget(nameLE, 4, 2, 1, 1);

        doneWorkLE = new QLineEdit(MastersWnd);
        doneWorkLE->setObjectName("doneWorkLE");
        doneWorkLE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
"                 padding: 3px 7px;\n"
"             }\n"
"\n"
"             QLineEdit:focus {\n"
"                 border: 2px solid rgb(90, 90, 90);\n"
"            }"));

        gridLayout->addWidget(doneWorkLE, 5, 5, 1, 1);

        nameLb = new QLabel(MastersWnd);
        nameLb->setObjectName("nameLb");
        nameLb->setFont(font);

        gridLayout->addWidget(nameLb, 4, 0, 1, 1);

        numberLE = new QLineEdit(MastersWnd);
        numberLE->setObjectName("numberLE");
        numberLE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
"                 padding: 3px 7px;\n"
"             }\n"
"\n"
"             QLineEdit:focus {\n"
"                 border: 2px solid rgb(90, 90, 90);\n"
"            }"));

        gridLayout->addWidget(numberLE, 7, 2, 1, 1);

        doneWorkLb = new QLabel(MastersWnd);
        doneWorkLb->setObjectName("doneWorkLb");
        doneWorkLb->setFont(font);

        gridLayout->addWidget(doneWorkLb, 5, 4, 2, 1);

        numberLb = new QLabel(MastersWnd);
        numberLb->setObjectName("numberLb");
        numberLb->setFont(font);

        gridLayout->addWidget(numberLb, 7, 0, 1, 1);

        mastersTv = new QTableView(MastersWnd);
        mastersTv->setObjectName("mastersTv");
        mastersTv->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
"    border: 1px solid #303030;  /* \320\223\321\200\320\260\320\275\320\270\321\206\321\226 */\n"
"}\n"
"\n"
"/* \320\235\320\276\320\274\320\265"
                        "\321\200\320\260\321\206\321\226\321\217 \321\200\321\217\320\264\320\272\321\226\320\262 */\n"
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
"    border: 2px solid #303030;  /* \320\232\320\276\320\273\321\226\321\200 \320\263\321\200\320\260\320\275\320\270\321\206\321\226 \320\277\321\200\320\270 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321"
                        "\226 */\n"
"}\n"
""));

        gridLayout->addWidget(mastersTv, 2, 0, 1, 8);

        priceLb = new QLabel(MastersWnd);
        priceLb->setObjectName("priceLb");
        priceLb->setFont(font);

        gridLayout->addWidget(priceLb, 3, 4, 2, 1);

        addPb = new QPushButton(MastersWnd);
        addPb->setObjectName("addPb");

        gridLayout->addWidget(addPb, 7, 5, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchLbl = new QLabel(MastersWnd);
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

        searchLE = new QLineEdit(MastersWnd);
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


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 4);

        QWidget::setTabOrder(nameLE, surenameLE);
        QWidget::setTabOrder(surenameLE, numberLE);
        QWidget::setTabOrder(numberLE, priceLE);
        QWidget::setTabOrder(priceLE, doneWorkLE);
        QWidget::setTabOrder(doneWorkLE, mastersTv);

        retranslateUi(MastersWnd);

        QMetaObject::connectSlotsByName(MastersWnd);
    } // setupUi

    void retranslateUi(QWidget *MastersWnd)
    {
        MastersWnd->setWindowTitle(QCoreApplication::translate("MastersWnd", "Masters", nullptr));
        surenameLb->setText(QCoreApplication::translate("MastersWnd", "Surename:", nullptr));
        nameLb->setText(QCoreApplication::translate("MastersWnd", "Name:", nullptr));
        doneWorkLb->setText(QCoreApplication::translate("MastersWnd", "Done works:", nullptr));
        numberLb->setText(QCoreApplication::translate("MastersWnd", "Number:", nullptr));
        priceLb->setText(QCoreApplication::translate("MastersWnd", "Starting price:", nullptr));
        addPb->setText(QCoreApplication::translate("MastersWnd", "ADD", nullptr));
        searchLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MastersWnd: public Ui_MastersWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERSWND_H
