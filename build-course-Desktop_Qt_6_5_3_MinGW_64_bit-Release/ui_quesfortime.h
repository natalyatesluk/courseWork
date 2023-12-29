/********************************************************************************
** Form generated from reading UI file 'quesfortime.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESFORTIME_H
#define UI_QUESFORTIME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuesForTime
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *questionStckW;
    QWidget *questionPage;
    QGridLayout *gridLayout_3;
    QLabel *questionLb;
    QPushButton *choisTransPb;
    QPushButton *deletePb;
    QWidget *transferPage;
    QGridLayout *gridLayout_2;
    QLabel *masterLb;
    QLabel *timeLb;
    QLineEdit *timeLE;
    QLineEdit *dateLE;
    QLabel *dateLb;
    QLabel *customerLb;
    QPushButton *transferPb;
    QComboBox *mastersCb;
    QComboBox *customersCb;

    void setupUi(QWidget *QuesForTime)
    {
        if (QuesForTime->objectName().isEmpty())
            QuesForTime->setObjectName("QuesForTime");
        QuesForTime->resize(340, 218);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QuesForTime->setWindowIcon(icon);
        QuesForTime->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 10px; /* \320\240\320\265\320\263\321\203\320\273\321\216\321\224 \320\267\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\203\321\202\321\226\320\262 */\n"
"    padding: 1px 18px 1px 3px; /* \320\240\320\265\320\263\321\203\320\273\321\216\321\224 \320\262\321\226\320\264\321\201\321\202\321\203\320\277\320\270 \320\262\320\275\321\203\321\202\321\200\321\226\321\210\320\275\321\226\321\205 \320\265\320\273\320\265\320\274\320\265\320\275\321\202\321\226\320\262 */\n"
"    min-width: 6em;\n"
"	font: 9pt \"Candara\";\n"
"}QWidget\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"QTableView {\n"
"	font: 9pt \"Century Gothic\";\n"
"    border: 3px solid black;\n"
"    border-radius: 10px;\n"
"    background-color: #f0f0f0;  /* \320\244\320\276\320\275 \320\267\320\260\320\276\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\276\320\263\320\276 \320\262"
                        "\321\226\320\264\320\266\320\265\321\202\320\260 */\n"
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
"    background-color: #404040;  /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 *"
                        "/\n"
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
"        "
                        "         padding: 3px 7px;\n"
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
        gridLayout = new QGridLayout(QuesForTime);
        gridLayout->setObjectName("gridLayout");
        questionStckW = new QStackedWidget(QuesForTime);
        questionStckW->setObjectName("questionStckW");
        questionPage = new QWidget();
        questionPage->setObjectName("questionPage");
        gridLayout_3 = new QGridLayout(questionPage);
        gridLayout_3->setObjectName("gridLayout_3");
        questionLb = new QLabel(questionPage);
        questionLb->setObjectName("questionLb");
        questionLb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(questionLb, 0, 0, 1, 2);

        choisTransPb = new QPushButton(questionPage);
        choisTransPb->setObjectName("choisTransPb");

        gridLayout_3->addWidget(choisTransPb, 1, 0, 1, 1);

        deletePb = new QPushButton(questionPage);
        deletePb->setObjectName("deletePb");

        gridLayout_3->addWidget(deletePb, 1, 1, 1, 1);

        questionStckW->addWidget(questionPage);
        transferPage = new QWidget();
        transferPage->setObjectName("transferPage");
        gridLayout_2 = new QGridLayout(transferPage);
        gridLayout_2->setObjectName("gridLayout_2");
        masterLb = new QLabel(transferPage);
        masterLb->setObjectName("masterLb");

        gridLayout_2->addWidget(masterLb, 3, 0, 1, 1);

        timeLb = new QLabel(transferPage);
        timeLb->setObjectName("timeLb");

        gridLayout_2->addWidget(timeLb, 1, 0, 1, 1);

        timeLE = new QLineEdit(transferPage);
        timeLE->setObjectName("timeLE");

        gridLayout_2->addWidget(timeLE, 1, 1, 1, 1);

        dateLE = new QLineEdit(transferPage);
        dateLE->setObjectName("dateLE");

        gridLayout_2->addWidget(dateLE, 0, 1, 1, 1);

        dateLb = new QLabel(transferPage);
        dateLb->setObjectName("dateLb");

        gridLayout_2->addWidget(dateLb, 0, 0, 1, 1);

        customerLb = new QLabel(transferPage);
        customerLb->setObjectName("customerLb");

        gridLayout_2->addWidget(customerLb, 4, 0, 1, 1);

        transferPb = new QPushButton(transferPage);
        transferPb->setObjectName("transferPb");

        gridLayout_2->addWidget(transferPb, 5, 0, 1, 2);

        mastersCb = new QComboBox(transferPage);
        mastersCb->setObjectName("mastersCb");

        gridLayout_2->addWidget(mastersCb, 3, 1, 1, 1);

        customersCb = new QComboBox(transferPage);
        customersCb->setObjectName("customersCb");

        gridLayout_2->addWidget(customersCb, 4, 1, 1, 1);

        questionStckW->addWidget(transferPage);

        gridLayout->addWidget(questionStckW, 0, 0, 1, 1);

        QWidget::setTabOrder(dateLE, timeLE);
        QWidget::setTabOrder(timeLE, transferPb);
        QWidget::setTabOrder(transferPb, deletePb);
        QWidget::setTabOrder(deletePb, choisTransPb);

        retranslateUi(QuesForTime);

        questionStckW->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QuesForTime);
    } // setupUi

    void retranslateUi(QWidget *QuesForTime)
    {
        QuesForTime->setWindowTitle(QCoreApplication::translate("QuesForTime", "Question", nullptr));
        questionLb->setText(QCoreApplication::translate("QuesForTime", "Do you want transfer to work time or delete?", nullptr));
        choisTransPb->setText(QCoreApplication::translate("QuesForTime", "TRANSFER", nullptr));
        deletePb->setText(QCoreApplication::translate("QuesForTime", "DELETE", nullptr));
        masterLb->setText(QCoreApplication::translate("QuesForTime", "Master:", nullptr));
        timeLb->setText(QCoreApplication::translate("QuesForTime", "Time:", nullptr));
        dateLb->setText(QCoreApplication::translate("QuesForTime", "Date:", nullptr));
        customerLb->setText(QCoreApplication::translate("QuesForTime", "Customer:", nullptr));
        transferPb->setText(QCoreApplication::translate("QuesForTime", "TRANSFER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuesForTime: public Ui_QuesForTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESFORTIME_H
