/********************************************************************************
** Form generated from reading UI file 'quesforreqaceptance.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESFORREQACEPTANCE_H
#define UI_QUESFORREQACEPTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
    QLabel *questionLb;
    QPushButton *updatePb;
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
    QLabel *nameCuLb;
    QLabel *numberCusLb;
    QComboBox *masterCusCb;
    QLabel *masterLb;
    QLineEdit *nameCusLE;
    QLineEdit *priceCusLE;
    QLabel *areaBodyLb;
    QLineEdit *surenameCusLE;
    QLabel *priceCusLb;
    QLabel *surenameCusLb;
    QLineEdit *numberCusLE;
    QComboBox *bodyCusCb;
    QPushButton *AddCusPb;
    QPushButton *pushButton;
    QWidget *updateTime;
    QGridLayout *gridLayout_5;
    QLabel *dateLb;
    QLineEdit *dateLE;
    QLabel *timeLb;
    QLineEdit *timeLE;
    QPushButton *updateTimePb;
    QLabel *masterTimLb;
    QLabel *customerLb;
    QComboBox *masterTimCb;
    QComboBox *customerCb;
    QWidget *addSketchPg;
    QGridLayout *gridLayout_7;
    QLabel *label;
    QLineEdit *nameSktLE;
    QLabel *label_2;
    QLineEdit *priceSktLE;
    QPushButton *addPb;
    QWidget *applicPage;
    QGridLayout *gridLayout_8;
    QLineEdit *numberAplLE;
    QLineEdit *bodyAplLE;
    QPushButton *submitApliPb;
    QLineEdit *surenameAplLE;
    QComboBox *masterCb;
    QLineEdit *nameAplLE;
    QComboBox *timeCb;
    QComboBox *dateCb;

    void setupUi(QWidget *Question)
    {
        if (Question->objectName().isEmpty())
            Question->setObjectName("Question");
        Question->resize(632, 439);
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
        questionLb = new QLabel(questionPg);
        questionLb->setObjectName("questionLb");
        questionLb->setGeometry(QRect(220, 80, 253, 73));
        questionLb->setAlignment(Qt::AlignCenter);
        updatePb = new QPushButton(questionPg);
        updatePb->setObjectName("updatePb");
        updatePb->setGeometry(QRect(120, 260, 124, 24));
        deletePb = new QPushButton(questionPg);
        deletePb->setObjectName("deletePb");
        deletePb->setGeometry(QRect(220, 260, 253, 24));
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
        nameCuLb = new QLabel(updateCustomer);
        nameCuLb->setObjectName("nameCuLb");

        gridLayout_6->addWidget(nameCuLb, 0, 0, 1, 1);

        numberCusLb = new QLabel(updateCustomer);
        numberCusLb->setObjectName("numberCusLb");

        gridLayout_6->addWidget(numberCusLb, 2, 0, 1, 1);

        masterCusCb = new QComboBox(updateCustomer);
        masterCusCb->setObjectName("masterCusCb");

        gridLayout_6->addWidget(masterCusCb, 5, 1, 1, 1);

        masterLb = new QLabel(updateCustomer);
        masterLb->setObjectName("masterLb");

        gridLayout_6->addWidget(masterLb, 5, 0, 1, 1);

        nameCusLE = new QLineEdit(updateCustomer);
        nameCusLE->setObjectName("nameCusLE");

        gridLayout_6->addWidget(nameCusLE, 0, 1, 1, 1);

        priceCusLE = new QLineEdit(updateCustomer);
        priceCusLE->setObjectName("priceCusLE");

        gridLayout_6->addWidget(priceCusLE, 3, 1, 1, 1);

        areaBodyLb = new QLabel(updateCustomer);
        areaBodyLb->setObjectName("areaBodyLb");

        gridLayout_6->addWidget(areaBodyLb, 4, 0, 1, 1);

        surenameCusLE = new QLineEdit(updateCustomer);
        surenameCusLE->setObjectName("surenameCusLE");

        gridLayout_6->addWidget(surenameCusLE, 1, 1, 1, 1);

        priceCusLb = new QLabel(updateCustomer);
        priceCusLb->setObjectName("priceCusLb");

        gridLayout_6->addWidget(priceCusLb, 3, 0, 1, 1);

        surenameCusLb = new QLabel(updateCustomer);
        surenameCusLb->setObjectName("surenameCusLb");

        gridLayout_6->addWidget(surenameCusLb, 1, 0, 1, 1);

        numberCusLE = new QLineEdit(updateCustomer);
        numberCusLE->setObjectName("numberCusLE");

        gridLayout_6->addWidget(numberCusLE, 2, 1, 1, 1);

        bodyCusCb = new QComboBox(updateCustomer);
        bodyCusCb->setObjectName("bodyCusCb");

        gridLayout_6->addWidget(bodyCusCb, 4, 1, 1, 1);

        AddCusPb = new QPushButton(updateCustomer);
        AddCusPb->setObjectName("AddCusPb");

        gridLayout_6->addWidget(AddCusPb, 8, 1, 1, 1);

        pushButton = new QPushButton(updateCustomer);
        pushButton->setObjectName("pushButton");

        gridLayout_6->addWidget(pushButton, 8, 0, 1, 1);

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

        updateTimePb = new QPushButton(updateTime);
        updateTimePb->setObjectName("updateTimePb");

        gridLayout_5->addWidget(updateTimePb, 4, 0, 1, 3);

        masterTimLb = new QLabel(updateTime);
        masterTimLb->setObjectName("masterTimLb");

        gridLayout_5->addWidget(masterTimLb, 2, 0, 1, 1);

        customerLb = new QLabel(updateTime);
        customerLb->setObjectName("customerLb");

        gridLayout_5->addWidget(customerLb, 3, 0, 1, 1);

        masterTimCb = new QComboBox(updateTime);
        masterTimCb->setObjectName("masterTimCb");

        gridLayout_5->addWidget(masterTimCb, 2, 1, 1, 2);

        customerCb = new QComboBox(updateTime);
        customerCb->setObjectName("customerCb");

        gridLayout_5->addWidget(customerCb, 3, 1, 1, 2);

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
        applicPage = new QWidget();
        applicPage->setObjectName("applicPage");
        applicPage->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid black;\n"
"    border-radius: 10px;\n"
"    padding: 1px 18px 10px 3px;\n"
"    selection-background-color: lightgray;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"QComboBox:!editable,\n"
"QComboBox::drop-down:editable {\n"
"    background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QComboBox:!editable:on,\n"
"QComboBox::drop-down:editable:on {\n"
"    background: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QComboBox:on {\n"
"    background: #rgb(225, 225, 225);\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 25px;\n"
"    background-color: rgb(3, 3, 3);\n"
"    border-left-width: 2px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/photo/upArrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"    border-radius: 8px;\n"
"    background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QComboBox::dow"
                        "n-arrow:on {\n"
"    top: 1px;\n"
"    left: 1px;\n"
"    background-color: rgb(9, 9, 9);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    border-radius: 10px; /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 \320\264\320\273\321\217 \320\262\320\270\320\277\320\260\320\264\320\260\321\216\321\207\320\276\320\263\320\276 \321\201\320\277\320\270\321\201\320\272\321\203 */\n"
"}\n"
""));
        gridLayout_8 = new QGridLayout(applicPage);
        gridLayout_8->setObjectName("gridLayout_8");
        numberAplLE = new QLineEdit(applicPage);
        numberAplLE->setObjectName("numberAplLE");

        gridLayout_8->addWidget(numberAplLE, 2, 3, 1, 1);

        bodyAplLE = new QLineEdit(applicPage);
        bodyAplLE->setObjectName("bodyAplLE");

        gridLayout_8->addWidget(bodyAplLE, 3, 3, 1, 1);

        submitApliPb = new QPushButton(applicPage);
        submitApliPb->setObjectName("submitApliPb");

        gridLayout_8->addWidget(submitApliPb, 8, 1, 1, 3);

        surenameAplLE = new QLineEdit(applicPage);
        surenameAplLE->setObjectName("surenameAplLE");

        gridLayout_8->addWidget(surenameAplLE, 1, 3, 1, 1);

        masterCb = new QComboBox(applicPage);
        masterCb->setObjectName("masterCb");

        gridLayout_8->addWidget(masterCb, 1, 1, 1, 2);

        nameAplLE = new QLineEdit(applicPage);
        nameAplLE->setObjectName("nameAplLE");

        gridLayout_8->addWidget(nameAplLE, 4, 1, 1, 1);

        timeCb = new QComboBox(applicPage);
        timeCb->setObjectName("timeCb");

        gridLayout_8->addWidget(timeCb, 3, 1, 1, 2);

        dateCb = new QComboBox(applicPage);
        dateCb->setObjectName("dateCb");

        gridLayout_8->addWidget(dateCb, 2, 1, 1, 2);

        questionSt->addWidget(applicPage);

        gridLayout_3->addWidget(questionSt, 0, 0, 1, 1);


        retranslateUi(Question);

        questionSt->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Question);
    } // setupUi

    void retranslateUi(QWidget *Question)
    {
        Question->setWindowTitle(QCoreApplication::translate("Question", "Form", nullptr));
        questionLb->setText(QCoreApplication::translate("Question", "Do you want update or delete?", nullptr));
        updatePb->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        deletePb->setText(QCoreApplication::translate("Question", "DELETE", nullptr));
        areaLb->setText(QCoreApplication::translate("Question", "Area:", nullptr));
        updateBodyPb->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        priceLb->setText(QCoreApplication::translate("Question", "Price:", nullptr));
        surenameLb->setText(QCoreApplication::translate("Question", "Surename:", nullptr));
        doneWorkLb->setText(QCoreApplication::translate("Question", "Done work:", nullptr));
        nameLb->setText(QCoreApplication::translate("Question", "Name:", nullptr));
        numberLb->setText(QCoreApplication::translate("Question", "Number:", nullptr));
        updatePb_2->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        nameCuLb->setText(QCoreApplication::translate("Question", "Name:", nullptr));
        numberCusLb->setText(QCoreApplication::translate("Question", "Number:", nullptr));
        masterLb->setText(QCoreApplication::translate("Question", "Master:", nullptr));
        areaBodyLb->setText(QCoreApplication::translate("Question", "Area of body:", nullptr));
        priceCusLb->setText(QCoreApplication::translate("Question", "Price:", nullptr));
        surenameCusLb->setText(QCoreApplication::translate("Question", "Surename:", nullptr));
        AddCusPb->setText(QCoreApplication::translate("Question", "ADD", nullptr));
        pushButton->setText(QCoreApplication::translate("Question", "PushButton", nullptr));
        dateLb->setText(QCoreApplication::translate("Question", "Date:", nullptr));
        timeLb->setText(QCoreApplication::translate("Question", "Time:", nullptr));
        updateTimePb->setText(QCoreApplication::translate("Question", "UPDATE", nullptr));
        masterTimLb->setText(QCoreApplication::translate("Question", "Master:", nullptr));
        customerLb->setText(QCoreApplication::translate("Question", "Customer:", nullptr));
        label->setText(QCoreApplication::translate("Question", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Question", "TextLabel", nullptr));
        addPb->setText(QCoreApplication::translate("Question", "Add", nullptr));
        numberAplLE->setPlaceholderText(QCoreApplication::translate("Question", "Enter your number", nullptr));
        bodyAplLE->setPlaceholderText(QCoreApplication::translate("Question", "Enter area body", nullptr));
        submitApliPb->setText(QCoreApplication::translate("Question", "SUBMIT AN APLICATION", nullptr));
        surenameAplLE->setPlaceholderText(QCoreApplication::translate("Question", "Enter your surename", nullptr));
        nameAplLE->setPlaceholderText(QCoreApplication::translate("Question", "Enter your name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Question: public Ui_Question {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESFORREQACEPTANCE_H
