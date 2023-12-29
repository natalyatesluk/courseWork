/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *choise;
    QGridLayout *gridLayout_3;
    QPushButton *adminPb;
    QLabel *picture_3;
    QPushButton *customerPb;
    QLabel *labelChois;
    QWidget *loginAdmin;
    QLabel *picture;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *systempassLb;
    QLineEdit *systmpassLE;
    QLabel *nameLb;
    QLineEdit *nameLE;
    QLabel *passwordLb;
    QLineEdit *passworLE;
    QPushButton *loginPB;
    QWidget *loginCustomer;
    QLabel *picture_2;
    QWidget *widgetCust;
    QGridLayout *gridLayout_4;
    QLineEdit *nameCustLE;
    QLabel *nameCustLb;
    QLineEdit *passworCustLE;
    QPushButton *loginCustPB;
    QLabel *passwordCustLb;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(528, 515);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setLayoutDirection(Qt::LeftToRight);
        Login->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setObjectName("gridLayout_2");
        stackedWidget = new QStackedWidget(Login);
        stackedWidget->setObjectName("stackedWidget");
        choise = new QWidget();
        choise->setObjectName("choise");
        choise->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        gridLayout_3 = new QGridLayout(choise);
        gridLayout_3->setObjectName("gridLayout_3");
        adminPb = new QPushButton(choise);
        adminPb->setObjectName("adminPb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara Light")});
        font.setPointSize(20);
        adminPb->setFont(font);

        gridLayout_3->addWidget(adminPb, 4, 0, 1, 1);

        picture_3 = new QLabel(choise);
        picture_3->setObjectName("picture_3");
        picture_3->setPixmap(QPixmap(QString::fromUtf8(":/photo/wait.jpg")));
        picture_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(picture_3, 0, 0, 1, 1);

        customerPb = new QPushButton(choise);
        customerPb->setObjectName("customerPb");
        customerPb->setFont(font);

        gridLayout_3->addWidget(customerPb, 2, 0, 1, 1);

        labelChois = new QLabel(choise);
        labelChois->setObjectName("labelChois");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Candara Light")});
        font1.setPointSize(48);
        font1.setBold(false);
        labelChois->setFont(font1);
        labelChois->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelChois, 1, 0, 1, 1);

        stackedWidget->addWidget(choise);
        loginAdmin = new QWidget();
        loginAdmin->setObjectName("loginAdmin");
        loginAdmin->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        picture = new QLabel(loginAdmin);
        picture->setObjectName("picture");
        picture->setGeometry(QRect(0, 20, 201, 461));
        picture->setPixmap(QPixmap(QString::fromUtf8(":/photo/oddmen.jpg")));
        widget = new QWidget(loginAdmin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(210, 90, 301, 301));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        systempassLb = new QLabel(widget);
        systempassLb->setObjectName("systempassLb");

        gridLayout->addWidget(systempassLb, 0, 0, 1, 1);

        systmpassLE = new QLineEdit(widget);
        systmpassLE->setObjectName("systmpassLE");
        systmpassLE->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(systmpassLE, 0, 1, 1, 1);

        nameLb = new QLabel(widget);
        nameLb->setObjectName("nameLb");

        gridLayout->addWidget(nameLb, 1, 0, 1, 1);

        nameLE = new QLineEdit(widget);
        nameLE->setObjectName("nameLE");

        gridLayout->addWidget(nameLE, 1, 1, 1, 1);

        passwordLb = new QLabel(widget);
        passwordLb->setObjectName("passwordLb");

        gridLayout->addWidget(passwordLb, 2, 0, 1, 1);

        passworLE = new QLineEdit(widget);
        passworLE->setObjectName("passworLE");
        passworLE->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passworLE, 2, 1, 1, 1);

        loginPB = new QPushButton(widget);
        loginPB->setObjectName("loginPB");

        gridLayout->addWidget(loginPB, 3, 0, 1, 2);

        stackedWidget->addWidget(loginAdmin);
        loginCustomer = new QWidget();
        loginCustomer->setObjectName("loginCustomer");
        loginCustomer->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        picture_2 = new QLabel(loginCustomer);
        picture_2->setObjectName("picture_2");
        picture_2->setGeometry(QRect(-10, 0, 201, 461));
        picture_2->setPixmap(QPixmap(QString::fromUtf8(":/photo/oddmen.jpg")));
        widgetCust = new QWidget(loginCustomer);
        widgetCust->setObjectName("widgetCust");
        widgetCust->setGeometry(QRect(200, 70, 301, 301));
        gridLayout_4 = new QGridLayout(widgetCust);
        gridLayout_4->setObjectName("gridLayout_4");
        nameCustLE = new QLineEdit(widgetCust);
        nameCustLE->setObjectName("nameCustLE");

        gridLayout_4->addWidget(nameCustLE, 0, 1, 1, 1);

        nameCustLb = new QLabel(widgetCust);
        nameCustLb->setObjectName("nameCustLb");

        gridLayout_4->addWidget(nameCustLb, 0, 0, 1, 1);

        passworCustLE = new QLineEdit(widgetCust);
        passworCustLE->setObjectName("passworCustLE");
        passworCustLE->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(passworCustLE, 1, 1, 1, 1);

        loginCustPB = new QPushButton(widgetCust);
        loginCustPB->setObjectName("loginCustPB");

        gridLayout_4->addWidget(loginCustPB, 2, 0, 1, 2);

        passwordCustLb = new QLabel(widgetCust);
        passwordCustLb->setObjectName("passwordCustLb");

        gridLayout_4->addWidget(passwordCustLb, 1, 0, 1, 1);

        stackedWidget->addWidget(loginCustomer);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        adminPb->setText(QCoreApplication::translate("Login", "ADMIN", nullptr));
        picture_3->setText(QString());
        customerPb->setText(QCoreApplication::translate("Login", "CUSTOMER", nullptr));
        labelChois->setText(QCoreApplication::translate("Login", "who are you?", nullptr));
        picture->setText(QString());
        systempassLb->setText(QCoreApplication::translate("Login", "System password:", nullptr));
        nameLb->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        passwordLb->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        loginPB->setText(QCoreApplication::translate("Login", "Login", nullptr));
        picture_2->setText(QString());
        nameCustLb->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        loginCustPB->setText(QCoreApplication::translate("Login", "Login", nullptr));
        passwordCustLb->setText(QCoreApplication::translate("Login", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
