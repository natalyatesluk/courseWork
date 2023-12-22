/********************************************************************************
** Form generated from reading UI file 'regitration.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGITRATION_H
#define UI_REGITRATION_H

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

class Ui_Regitration
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *registrationStWdg;
    QWidget *chosePage;
    QPushButton *customerPb;
    QLabel *labelChois;
    QLabel *picture_3;
    QPushButton *adminPb;
    QWidget *systemPage;
    QLineEdit *systempassLE;
    QPushButton *checksysLE;
    QLabel *label;
    QWidget *registerPage;
    QWidget *enterWg;
    QGridLayout *gridLayout;
    QLabel *numberLb;
    QLineEdit *nameLE;
    QPushButton *registrationPb;
    QLineEdit *numberLE;
    QLabel *nameLb;
    QLineEdit *passworLE;
    QLabel *passwordLb;
    QLabel *label_2;

    void setupUi(QWidget *Regitration)
    {
        if (Regitration->objectName().isEmpty())
            Regitration->setObjectName("Regitration");
        Regitration->resize(425, 293);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Regitration->setWindowIcon(icon);
        Regitration->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"QPushButton\n"
"{\n"
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
"            }"));
        gridLayout_2 = new QGridLayout(Regitration);
        gridLayout_2->setObjectName("gridLayout_2");
        registrationStWdg = new QStackedWidget(Regitration);
        registrationStWdg->setObjectName("registrationStWdg");
        chosePage = new QWidget();
        chosePage->setObjectName("chosePage");
        chosePage->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
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
"            }"));
        customerPb = new QPushButton(chosePage);
        customerPb->setObjectName("customerPb");
        customerPb->setGeometry(QRect(70, 180, 291, 40));
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara Light")});
        font.setPointSize(20);
        customerPb->setFont(font);
        labelChois = new QLabel(chosePage);
        labelChois->setObjectName("labelChois");
        labelChois->setGeometry(QRect(50, 110, 331, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Candara Light")});
        font1.setPointSize(28);
        font1.setBold(false);
        labelChois->setFont(font1);
        labelChois->setAlignment(Qt::AlignCenter);
        picture_3 = new QLabel(chosePage);
        picture_3->setObjectName("picture_3");
        picture_3->setGeometry(QRect(-20, 30, 471, 81));
        picture_3->setPixmap(QPixmap(QString::fromUtf8(":/photo/wait.jpg")));
        picture_3->setAlignment(Qt::AlignCenter);
        adminPb = new QPushButton(chosePage);
        adminPb->setObjectName("adminPb");
        adminPb->setGeometry(QRect(70, 230, 291, 41));
        adminPb->setFont(font);
        registrationStWdg->addWidget(chosePage);
        systemPage = new QWidget();
        systemPage->setObjectName("systemPage");
        systempassLE = new QLineEdit(systemPage);
        systempassLE->setObjectName("systempassLE");
        systempassLE->setGeometry(QRect(70, 70, 291, 31));
        systempassLE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        systempassLE->setEchoMode(QLineEdit::Password);
        checksysLE = new QPushButton(systemPage);
        checksysLE->setObjectName("checksysLE");
        checksysLE->setGeometry(QRect(110, 110, 201, 31));
        checksysLE->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius: 10px;\n"
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
""));
        label = new QLabel(systemPage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 170, 225, 121));
        label->setPixmap(QPixmap(QString::fromUtf8(":/photo/cat.png")));
        registrationStWdg->addWidget(systemPage);
        registerPage = new QWidget();
        registerPage->setObjectName("registerPage");
        enterWg = new QWidget(registerPage);
        enterWg->setObjectName("enterWg");
        enterWg->setGeometry(QRect(70, 10, 341, 171));
        enterWg->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"border-radius: 15px;\n"
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
"QLineEdit {\n"
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
        gridLayout = new QGridLayout(enterWg);
        gridLayout->setObjectName("gridLayout");
        numberLb = new QLabel(enterWg);
        numberLb->setObjectName("numberLb");

        gridLayout->addWidget(numberLb, 4, 0, 1, 1);

        nameLE = new QLineEdit(enterWg);
        nameLE->setObjectName("nameLE");

        gridLayout->addWidget(nameLE, 0, 1, 1, 1);

        registrationPb = new QPushButton(enterWg);
        registrationPb->setObjectName("registrationPb");

        gridLayout->addWidget(registrationPb, 5, 1, 1, 1);

        numberLE = new QLineEdit(enterWg);
        numberLE->setObjectName("numberLE");

        gridLayout->addWidget(numberLE, 4, 1, 1, 1);

        nameLb = new QLabel(enterWg);
        nameLb->setObjectName("nameLb");

        gridLayout->addWidget(nameLb, 0, 0, 1, 1);

        passworLE = new QLineEdit(enterWg);
        passworLE->setObjectName("passworLE");
        passworLE->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passworLE, 2, 1, 1, 1);

        passwordLb = new QLabel(enterWg);
        passwordLb->setObjectName("passwordLb");

        gridLayout->addWidget(passwordLb, 2, 0, 1, 1);

        label_2 = new QLabel(registerPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 170, 225, 121));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/photo/cat.png")));
        registrationStWdg->addWidget(registerPage);

        gridLayout_2->addWidget(registrationStWdg, 0, 0, 1, 1);

        QWidget::setTabOrder(customerPb, adminPb);
        QWidget::setTabOrder(adminPb, systempassLE);
        QWidget::setTabOrder(systempassLE, checksysLE);
        QWidget::setTabOrder(checksysLE, nameLE);
        QWidget::setTabOrder(nameLE, passworLE);
        QWidget::setTabOrder(passworLE, numberLE);
        QWidget::setTabOrder(numberLE, registrationPb);

        retranslateUi(Regitration);

        registrationStWdg->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Regitration);
    } // setupUi

    void retranslateUi(QWidget *Regitration)
    {
        Regitration->setWindowTitle(QCoreApplication::translate("Regitration", "Registration", nullptr));
        customerPb->setText(QCoreApplication::translate("Regitration", "CUSTOMER", nullptr));
        labelChois->setText(QCoreApplication::translate("Regitration", "who are you?", nullptr));
        picture_3->setText(QString());
        adminPb->setText(QCoreApplication::translate("Regitration", "ADMIN", nullptr));
        systempassLE->setText(QString());
        systempassLE->setPlaceholderText(QCoreApplication::translate("Regitration", "Enter system password...", nullptr));
        checksysLE->setText(QCoreApplication::translate("Regitration", "Check", nullptr));
        label->setText(QString());
        numberLb->setText(QCoreApplication::translate("Regitration", "Number:", nullptr));
        registrationPb->setText(QCoreApplication::translate("Regitration", "Registration", nullptr));
        nameLb->setText(QCoreApplication::translate("Regitration", "Username:", nullptr));
        passwordLb->setText(QCoreApplication::translate("Regitration", "Password:", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Regitration: public Ui_Regitration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGITRATION_H
