/********************************************************************************
** Form generated from reading UI file 'acceptreques.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCEPTREQUES_H
#define UI_ACCEPTREQUES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcceptReques
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *acceptStkW;
    QWidget *question;
    QGridLayout *gridLayout;
    QPushButton *refusePb;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *accepPB;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *addNewCustomer;
    QGridLayout *gridLayout_3;
    QLabel *masterLb;
    QLineEdit *priceLE;
    QTableView *customerTv;
    QLineEdit *numberLE;
    QLabel *numberLb;
    QLabel *searchLbl;
    QLabel *nameLb;
    QLabel *surenameLb;
    QLineEdit *nameLE;
    QLabel *bodyLb;
    QComboBox *bodyCb;
    QComboBox *mastersCb;
    QLabel *priceLb;
    QLineEdit *searchLE;
    QLineEdit *surenameLE;
    QPushButton *bodyPb;
    QLabel *wantArea;
    QStackedWidget *buttonStkw;
    QWidget *addPbPage;
    QGridLayout *gridLayout_4;
    QPushButton *addPb;
    QWidget *updatePbPage;
    QGridLayout *gridLayout_5;
    QPushButton *updatePb;

    void setupUi(QWidget *AcceptReques)
    {
        if (AcceptReques->objectName().isEmpty())
            AcceptReques->setObjectName("AcceptReques");
        AcceptReques->resize(658, 393);
        AcceptReques->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font: 14pt \"Candara\";"));
        gridLayout_2 = new QGridLayout(AcceptReques);
        gridLayout_2->setObjectName("gridLayout_2");
        acceptStkW = new QStackedWidget(AcceptReques);
        acceptStkW->setObjectName("acceptStkW");
        question = new QWidget();
        question->setObjectName("question");
        question->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"                 background-color: white;\n"
"                 color: black;\n"
"                 border: 1px solid rgb(110, 110, 110);\n"
"              border-radius: 10px;\n"
"                 padding: 3px 7px;\n"
"             }\n"
"\n"
"             QLineEdit:focus {\n"
"                 border: 2px solid rgb(90, 90, 90);\n"
"            }QPushButton\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius: 20px;\n"
"box-shadow: 0 0 20px 10px rgb(240, 158, 255);\n"
"width: 90px;\n"
"  height: 90px;\n"
"}\n"
"QPushButton:hover {\n"
"               border: 2px solid rgb(200, 200, 200);\n"
"            }\n"
"QPushButton:pressed {\n"
"             background-color: rgb(255, 255, 255);\n"
"	        color: rgb(0, 0, 0);\n"
"            }"));
        gridLayout = new QGridLayout(question);
        gridLayout->setObjectName("gridLayout");
        refusePb = new QPushButton(question);
        refusePb->setObjectName("refusePb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photo/refuse.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        refusePb->setIcon(icon);
        refusePb->setIconSize(QSize(60, 60));

        gridLayout->addWidget(refusePb, 3, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        accepPB = new QPushButton(question);
        accepPB->setObjectName("accepPB");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/photo/acceptJpg.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        accepPB->setIcon(icon1);
        accepPB->setIconSize(QSize(60, 60));

        gridLayout->addWidget(accepPB, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        label = new QLabel(question);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        acceptStkW->addWidget(question);
        addNewCustomer = new QWidget();
        addNewCustomer->setObjectName("addNewCustomer");
        addNewCustomer->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"	font: 9pt \"Candara\";\n"
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
"    padding: "
                        "4px;\n"
"    border: 1px solid #303030;  /* \320\223\321\200\320\260\320\275\320\270\321\206\321\226 */\n"
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
"    border: 2px solid #303030;  /* \320\232\320\276\320\273\321\226\321"
                        "\200 \320\263\321\200\320\260\320\275\320\270\321\206\321\226 \320\277\321\200\320\270 \320\262\320\270\320\264\321\226\320\273\320\265\320\275\320\275\321\226 */\n"
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
"	font: 10pt \"Candara\";\n"
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
"     "
                        "       }\n"
"QLabel{font: 12pt \"Candara\";}"));
        gridLayout_3 = new QGridLayout(addNewCustomer);
        gridLayout_3->setObjectName("gridLayout_3");
        masterLb = new QLabel(addNewCustomer);
        masterLb->setObjectName("masterLb");

        gridLayout_3->addWidget(masterLb, 6, 4, 1, 1);

        priceLE = new QLineEdit(addNewCustomer);
        priceLE->setObjectName("priceLE");

        gridLayout_3->addWidget(priceLE, 2, 5, 1, 3);

        customerTv = new QTableView(addNewCustomer);
        customerTv->setObjectName("customerTv");

        gridLayout_3->addWidget(customerTv, 1, 1, 1, 5);

        numberLE = new QLineEdit(addNewCustomer);
        numberLE->setObjectName("numberLE");

        gridLayout_3->addWidget(numberLE, 6, 2, 1, 2);

        numberLb = new QLabel(addNewCustomer);
        numberLb->setObjectName("numberLb");

        gridLayout_3->addWidget(numberLb, 4, 0, 3, 1);

        searchLbl = new QLabel(addNewCustomer);
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

        gridLayout_3->addWidget(searchLbl, 0, 1, 1, 1);

        nameLb = new QLabel(addNewCustomer);
        nameLb->setObjectName("nameLb");

        gridLayout_3->addWidget(nameLb, 2, 0, 1, 1);

        surenameLb = new QLabel(addNewCustomer);
        surenameLb->setObjectName("surenameLb");

        gridLayout_3->addWidget(surenameLb, 3, 0, 1, 2);

        nameLE = new QLineEdit(addNewCustomer);
        nameLE->setObjectName("nameLE");

        gridLayout_3->addWidget(nameLE, 2, 2, 1, 2);

        bodyLb = new QLabel(addNewCustomer);
        bodyLb->setObjectName("bodyLb");

        gridLayout_3->addWidget(bodyLb, 3, 4, 2, 1);

        bodyCb = new QComboBox(addNewCustomer);
        bodyCb->setObjectName("bodyCb");

        gridLayout_3->addWidget(bodyCb, 3, 5, 1, 3);

        mastersCb = new QComboBox(addNewCustomer);
        mastersCb->setObjectName("mastersCb");

        gridLayout_3->addWidget(mastersCb, 6, 5, 1, 3);

        priceLb = new QLabel(addNewCustomer);
        priceLb->setObjectName("priceLb");

        gridLayout_3->addWidget(priceLb, 2, 4, 1, 1);

        searchLE = new QLineEdit(addNewCustomer);
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

        gridLayout_3->addWidget(searchLE, 0, 3, 1, 3);

        surenameLE = new QLineEdit(addNewCustomer);
        surenameLE->setObjectName("surenameLE");

        gridLayout_3->addWidget(surenameLE, 3, 2, 1, 2);

        bodyPb = new QPushButton(addNewCustomer);
        bodyPb->setObjectName("bodyPb");

        gridLayout_3->addWidget(bodyPb, 8, 0, 1, 2);

        wantArea = new QLabel(addNewCustomer);
        wantArea->setObjectName("wantArea");

        gridLayout_3->addWidget(wantArea, 8, 3, 1, 1);

        buttonStkw = new QStackedWidget(addNewCustomer);
        buttonStkw->setObjectName("buttonStkw");
        addPbPage = new QWidget();
        addPbPage->setObjectName("addPbPage");
        gridLayout_4 = new QGridLayout(addPbPage);
        gridLayout_4->setObjectName("gridLayout_4");
        addPb = new QPushButton(addPbPage);
        addPb->setObjectName("addPb");

        gridLayout_4->addWidget(addPb, 0, 0, 1, 1);

        buttonStkw->addWidget(addPbPage);
        updatePbPage = new QWidget();
        updatePbPage->setObjectName("updatePbPage");
        gridLayout_5 = new QGridLayout(updatePbPage);
        gridLayout_5->setObjectName("gridLayout_5");
        updatePb = new QPushButton(updatePbPage);
        updatePb->setObjectName("updatePb");

        gridLayout_5->addWidget(updatePb, 0, 0, 1, 1);

        buttonStkw->addWidget(updatePbPage);

        gridLayout_3->addWidget(buttonStkw, 8, 5, 1, 2);

        acceptStkW->addWidget(addNewCustomer);

        gridLayout_2->addWidget(acceptStkW, 0, 0, 1, 1);


        retranslateUi(AcceptReques);

        acceptStkW->setCurrentIndex(1);
        buttonStkw->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AcceptReques);
    } // setupUi

    void retranslateUi(QWidget *AcceptReques)
    {
        AcceptReques->setWindowTitle(QCoreApplication::translate("AcceptReques", "Form", nullptr));
        refusePb->setText(QString());
        accepPB->setText(QString());
        label->setText(QCoreApplication::translate("AcceptReques", "Do you want to accept this application?", nullptr));
        masterLb->setText(QCoreApplication::translate("AcceptReques", "Master:", nullptr));
        numberLb->setText(QCoreApplication::translate("AcceptReques", "Number:", nullptr));
        searchLbl->setText(QString());
        nameLb->setText(QCoreApplication::translate("AcceptReques", "Name:", nullptr));
        surenameLb->setText(QCoreApplication::translate("AcceptReques", "Surename:", nullptr));
        bodyLb->setText(QCoreApplication::translate("AcceptReques", "Body:", nullptr));
        priceLb->setText(QCoreApplication::translate("AcceptReques", "Price:", nullptr));
        bodyPb->setText(QCoreApplication::translate("AcceptReques", "Body", nullptr));
        wantArea->setText(QString());
        addPb->setText(QCoreApplication::translate("AcceptReques", "ADD", nullptr));
        updatePb->setText(QCoreApplication::translate("AcceptReques", "UPDATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AcceptReques: public Ui_AcceptReques {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCEPTREQUES_H
