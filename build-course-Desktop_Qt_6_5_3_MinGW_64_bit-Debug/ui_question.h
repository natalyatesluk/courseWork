/********************************************************************************
** Form generated from reading UI file 'question.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTION_H
#define UI_QUESTION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Question
{
public:
    QGridLayout *gridLayout_3;
    QStackedWidget *questionSt;
    QWidget *questionPg;
    QWidget *questionWdg;
    QGridLayout *gridLayout;
    QPushButton *updatePb;
    QLabel *questionLb;
    QPushButton *deletePb;
    QWidget *updateBody;
    QGridLayout *gridLayout_4;
    QLineEdit *areaLE;
    QLabel *areaLb;
    QPushButton *updateBodyPb;
    QWidget *updateMaster;
    QWidget *updateWdg;
    QGridLayout *gridLayout_2;
    QLabel *priceLb;
    QLineEdit *surenameLE;
    QLineEdit *doneWorkLE;
    QLabel *surenameLb;
    QLabel *doneWorkLb;
    QLabel *nameLb;
    QLineEdit *priceLE;
    QLineEdit *nameLE;
    QLineEdit *numberLE;
    QLabel *numberLb;
    QPushButton *updatePb_2;
    QWidget *updateCustomer;
    QGridLayout *gridLayout_6;
    QLineEdit *nameCusLE;
    QLineEdit *masterLE;
    QLabel *surenameCusLb;
    QLineEdit *areaBodyLE;
    QLabel *areaBodyLb;
    QLineEdit *priceCusLE;
    QLineEdit *numberCusLE;
    QLabel *nameCuLb;
    QLabel *numberCusLb;
    QLineEdit *surenameCusLE;
    QLabel *masterLb;
    QLabel *priceCusLb;
    QPushButton *updateCusPb;
    QWidget *updateTime;
    QGridLayout *gridLayout_5;
    QLabel *dateLb;
    QLineEdit *dateLE;
    QLabel *timeLb;
    QLineEdit *timeLE;
    QLabel *masterTimLb;
    QLineEdit *masterTimLE;
    QLabel *customerLb;
    QLineEdit *customerLE;
    QPushButton *updateTimePb;
    QWidget *addSketchPg;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QLineEdit *nameSktLE;
    QLabel *label_2;
    QLineEdit *priceSktLE;
    QPushButton *addPb;

    void setupUi(QWidget *Question)
    {
        if (Question->objectName().isEmpty())
            Question->setObjectName("Question");
        Question->resize(358, 286);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Question->setWindowIcon(icon);
        Question->setStyleSheet(QString::fromUtf8("QWidget\n"
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
        gridLayout_3 = new QGridLayout(Question);
        gridLayout_3->setObjectName("gridLayout_3");
        questionSt = new QStackedWidget(Question);
        questionSt->setObjectName("questionSt");
        questionPg = new QWidget();
        questionPg->setObjectName("questionPg");
        questionWdg = new QWidget(questionPg);
        questionWdg->setObjectName("questionWdg");
        questionWdg->setGeometry(QRect(30, 50, 271, 121));
        gridLayout = new QGridLayout(questionWdg);
        gridLayout->setObjectName("gridLayout");
        updatePb = new QPushButton(questionWdg);
        updatePb->setObjectName("updatePb");

        gridLayout->addWidget(updatePb, 1, 0, 1, 1);

        questionLb = new QLabel(questionWdg);
        questionLb->setObjectName("questionLb");
        questionLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(questionLb, 0, 0, 1, 2);

        deletePb = new QPushButton(questionWdg);
        deletePb->setObjectName("deletePb");

        gridLayout->addWidget(deletePb, 1, 1, 1, 1);

        questionSt->addWidget(questionPg);
        updateBody = new QWidget();
        updateBody->setObjectName("updateBody");
        gridLayout_4 = new QGridLayout(updateBody);
        gridLayout_4->setObjectName("gridLayout_4");
        areaLE = new QLineEdit(updateBody);
        areaLE->setObjectName("areaLE");

        gridLayout_4->addWidget(areaLE, 0, 1, 1, 1);

        areaLb = new QLabel(updateBody);
        areaLb->setObjectName("areaLb");

        gridLayout_4->addWidget(areaLb, 0, 0, 1, 1);

        updateBodyPb = new QPushButton(updateBody);
        updateBodyPb->setObjectName("updateBodyPb");

        gridLayout_4->addWidget(updateBodyPb, 1, 1, 1, 1);

        questionSt->addWidget(updateBody);
        updateMaster = new QWidget();
        updateMaster->setObjectName("updateMaster");
        updateWdg = new QWidget(updateMaster);
        updateWdg->setObjectName("updateWdg");
        updateWdg->setGeometry(QRect(0, 50, 341, 191));
        gridLayout_2 = new QGridLayout(updateWdg);
        gridLayout_2->setObjectName("gridLayout_2");
        priceLb = new QLabel(updateWdg);
        priceLb->setObjectName("priceLb");

        gridLayout_2->addWidget(priceLb, 0, 2, 1, 1);

        surenameLE = new QLineEdit(updateWdg);
        surenameLE->setObjectName("surenameLE");

        gridLayout_2->addWidget(surenameLE, 1, 1, 1, 1);

        doneWorkLE = new QLineEdit(updateWdg);
        doneWorkLE->setObjectName("doneWorkLE");

        gridLayout_2->addWidget(doneWorkLE, 1, 3, 1, 1);

        surenameLb = new QLabel(updateWdg);
        surenameLb->setObjectName("surenameLb");

        gridLayout_2->addWidget(surenameLb, 1, 0, 1, 1);

        doneWorkLb = new QLabel(updateWdg);
        doneWorkLb->setObjectName("doneWorkLb");

        gridLayout_2->addWidget(doneWorkLb, 1, 2, 1, 1);

        nameLb = new QLabel(updateWdg);
        nameLb->setObjectName("nameLb");

        gridLayout_2->addWidget(nameLb, 0, 0, 1, 1);

        priceLE = new QLineEdit(updateWdg);
        priceLE->setObjectName("priceLE");

        gridLayout_2->addWidget(priceLE, 0, 3, 1, 1);

        nameLE = new QLineEdit(updateWdg);
        nameLE->setObjectName("nameLE");

        gridLayout_2->addWidget(nameLE, 0, 1, 1, 1);

        numberLE = new QLineEdit(updateWdg);
        numberLE->setObjectName("numberLE");

        gridLayout_2->addWidget(numberLE, 2, 1, 1, 1);

        numberLb = new QLabel(updateWdg);
        numberLb->setObjectName("numberLb");

        gridLayout_2->addWidget(numberLb, 2, 0, 1, 1);

        updatePb_2 = new QPushButton(updateWdg);
        updatePb_2->setObjectName("updatePb_2");

        gridLayout_2->addWidget(updatePb_2, 4, 0, 1, 4);

        questionSt->addWidget(updateMaster);
        updateCustomer = new QWidget();
        updateCustomer->setObjectName("updateCustomer");
        gridLayout_6 = new QGridLayout(updateCustomer);
        gridLayout_6->setObjectName("gridLayout_6");
        nameCusLE = new QLineEdit(updateCustomer);
        nameCusLE->setObjectName("nameCusLE");

        gridLayout_6->addWidget(nameCusLE, 0, 1, 1, 1);

        masterLE = new QLineEdit(updateCustomer);
        masterLE->setObjectName("masterLE");

        gridLayout_6->addWidget(masterLE, 5, 1, 1, 1);

        surenameCusLb = new QLabel(updateCustomer);
        surenameCusLb->setObjectName("surenameCusLb");

        gridLayout_6->addWidget(surenameCusLb, 1, 0, 1, 1);

        areaBodyLE = new QLineEdit(updateCustomer);
        areaBodyLE->setObjectName("areaBodyLE");

        gridLayout_6->addWidget(areaBodyLE, 4, 1, 1, 1);

        areaBodyLb = new QLabel(updateCustomer);
        areaBodyLb->setObjectName("areaBodyLb");

        gridLayout_6->addWidget(areaBodyLb, 4, 0, 1, 1);

        priceCusLE = new QLineEdit(updateCustomer);
        priceCusLE->setObjectName("priceCusLE");

        gridLayout_6->addWidget(priceCusLE, 3, 1, 1, 1);

        numberCusLE = new QLineEdit(updateCustomer);
        numberCusLE->setObjectName("numberCusLE");

        gridLayout_6->addWidget(numberCusLE, 2, 1, 1, 1);

        nameCuLb = new QLabel(updateCustomer);
        nameCuLb->setObjectName("nameCuLb");

        gridLayout_6->addWidget(nameCuLb, 0, 0, 1, 1);

        numberCusLb = new QLabel(updateCustomer);
        numberCusLb->setObjectName("numberCusLb");

        gridLayout_6->addWidget(numberCusLb, 2, 0, 1, 1);

        surenameCusLE = new QLineEdit(updateCustomer);
        surenameCusLE->setObjectName("surenameCusLE");

        gridLayout_6->addWidget(surenameCusLE, 1, 1, 1, 1);

        masterLb = new QLabel(updateCustomer);
        masterLb->setObjectName("masterLb");

        gridLayout_6->addWidget(masterLb, 5, 0, 1, 1);

        priceCusLb = new QLabel(updateCustomer);
        priceCusLb->setObjectName("priceCusLb");

        gridLayout_6->addWidget(priceCusLb, 3, 0, 1, 1);

        updateCusPb = new QPushButton(updateCustomer);
        updateCusPb->setObjectName("updateCusPb");

        gridLayout_6->addWidget(updateCusPb, 6, 0, 1, 2);

        questionSt->addWidget(updateCustomer);
        updateTime = new QWidget();
        updateTime->setObjectName("updateTime");
        gridLayout_5 = new QGridLayout(updateTime);
        gridLayout_5->setObjectName("gridLayout_5");
        dateLb = new QLabel(updateTime);
        dateLb->setObjectName("dateLb");

        gridLayout_5->addWidget(dateLb, 0, 0, 1, 1);

        dateLE = new QLineEdit(updateTime);
        dateLE->setObjectName("dateLE");

        gridLayout_5->addWidget(dateLE, 0, 1, 1, 2);

        timeLb = new QLabel(updateTime);
        timeLb->setObjectName("timeLb");

        gridLayout_5->addWidget(timeLb, 1, 0, 1, 1);

        timeLE = new QLineEdit(updateTime);
        timeLE->setObjectName("timeLE");

        gridLayout_5->addWidget(timeLE, 1, 1, 1, 2);

        masterTimLb = new QLabel(updateTime);
        masterTimLb->setObjectName("masterTimLb");

        gridLayout_5->addWidget(masterTimLb, 2, 0, 1, 2);

        masterTimLE = new QLineEdit(updateTime);
        masterTimLE->setObjectName("masterTimLE");

        gridLayout_5->addWidget(masterTimLE, 2, 2, 1, 1);

        customerLb = new QLabel(updateTime);
        customerLb->setObjectName("customerLb");

        gridLayout_5->addWidget(customerLb, 3, 0, 1, 2);

        customerLE = new QLineEdit(updateTime);
        customerLE->setObjectName("customerLE");

        gridLayout_5->addWidget(customerLE, 3, 2, 1, 1);

        updateTimePb = new QPushButton(updateTime);
        updateTimePb->setObjectName("updateTimePb");

        gridLayout_5->addWidget(updateTimePb, 4, 0, 1, 3);

        questionSt->addWidget(updateTime);
        addSketchPg = new QWidget();
        addSketchPg->setObjectName("addSketchPg");
        gridLayout_7 = new QGridLayout(addSketchPg);
        gridLayout_7->setObjectName("gridLayout_7");
        label = new QLabel(addSketchPg);
        label->setObjectName("label");

        gridLayout_7->addWidget(label, 0, 0, 1, 1);

        nameSktLE = new QLineEdit(addSketchPg);
        nameSktLE->setObjectName("nameSktLE");

        gridLayout_7->addWidget(nameSktLE, 0, 1, 1, 1);

        label_2 = new QLabel(addSketchPg);
        label_2->setObjectName("label_2");

        gridLayout_7->addWidget(label_2, 1, 0, 1, 1);

        priceSktLE = new QLineEdit(addSketchPg);
        priceSktLE->setObjectName("priceSktLE");

        gridLayout_7->addWidget(priceSktLE, 1, 1, 1, 1);

        addPb = new QPushButton(addSketchPg);
        addPb->setObjectName("addPb");

        gridLayout_7->addWidget(addPb, 2, 0, 1, 2);

        questionSt->addWidget(addSketchPg);

        gridLayout_3->addWidget(questionSt, 0, 0, 1, 1);

        QWidget::setTabOrder(updatePb, deletePb);
        QWidget::setTabOrder(deletePb, updateBodyPb);
        QWidget::setTabOrder(updateBodyPb, areaLE);
        QWidget::setTabOrder(areaLE, nameLE);
        QWidget::setTabOrder(nameLE, surenameLE);
        QWidget::setTabOrder(surenameLE, numberLE);
        QWidget::setTabOrder(numberLE, priceLE);
        QWidget::setTabOrder(priceLE, doneWorkLE);
        QWidget::setTabOrder(doneWorkLE, updatePb_2);
        QWidget::setTabOrder(updatePb_2, nameCusLE);
        QWidget::setTabOrder(nameCusLE, surenameCusLE);
        QWidget::setTabOrder(surenameCusLE, numberCusLE);
        QWidget::setTabOrder(numberCusLE, priceCusLE);
        QWidget::setTabOrder(priceCusLE, areaBodyLE);
        QWidget::setTabOrder(areaBodyLE, masterLE);
        QWidget::setTabOrder(masterLE, updateCusPb);
        QWidget::setTabOrder(updateCusPb, dateLE);
        QWidget::setTabOrder(dateLE, timeLE);
        QWidget::setTabOrder(timeLE, masterTimLE);
        QWidget::setTabOrder(masterTimLE, customerLE);
        QWidget::setTabOrder(customerLE, updateTimePb);
        QWidget::setTabOrder(updateTimePb, nameSktLE);
        QWidget::setTabOrder(nameSktLE, priceSktLE);
        QWidget::setTabOrder(priceSktLE, addPb);

        retranslateUi(Question);

        questionSt->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Question);
    } // setupUi

    void retranslateUi(QWidget *Question)
    {
        Question->setWindowTitle(QCoreApplication::translate("Question", "Question", nullptr));
        updatePb->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        questionLb->setText(QCoreApplication::translate("Question", "Do you want update or delete?", nullptr));
        deletePb->setText(QCoreApplication::translate("Question", "DELETE", nullptr));
        areaLb->setText(QCoreApplication::translate("Question", "Area:", nullptr));
        updateBodyPb->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        priceLb->setText(QCoreApplication::translate("Question", "Price:", nullptr));
        surenameLb->setText(QCoreApplication::translate("Question", "Surename:", nullptr));
        doneWorkLb->setText(QCoreApplication::translate("Question", "Done work:", nullptr));
        nameLb->setText(QCoreApplication::translate("Question", "Name:", nullptr));
        numberLb->setText(QCoreApplication::translate("Question", "Number:", nullptr));
        updatePb_2->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        surenameCusLb->setText(QCoreApplication::translate("Question", "Surename:", nullptr));
        areaBodyLb->setText(QCoreApplication::translate("Question", "Area of body:", nullptr));
        nameCuLb->setText(QCoreApplication::translate("Question", "Name:", nullptr));
        numberCusLb->setText(QCoreApplication::translate("Question", "Number:", nullptr));
        masterLb->setText(QCoreApplication::translate("Question", "Master:", nullptr));
        priceCusLb->setText(QCoreApplication::translate("Question", "Price:", nullptr));
        updateCusPb->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        dateLb->setText(QCoreApplication::translate("Question", "Date:", nullptr));
        timeLb->setText(QCoreApplication::translate("Question", "Time:", nullptr));
        masterTimLb->setText(QCoreApplication::translate("Question", "Master:", nullptr));
        customerLb->setText(QCoreApplication::translate("Question", "Customer:", nullptr));
        updateTimePb->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        label->setText(QCoreApplication::translate("Question", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Question", "TextLabel", nullptr));
        addPb->setText(QCoreApplication::translate("Question", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Question: public Ui_Question {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTION_H
