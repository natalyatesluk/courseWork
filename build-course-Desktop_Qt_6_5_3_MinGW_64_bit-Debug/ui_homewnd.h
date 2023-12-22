/********************************************************************************
** Form generated from reading UI file 'homewnd.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWND_H
#define UI_HOMEWND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWnd
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *homePb;
    QSpacerItem *spacerHomePb;
    QStackedWidget *stackedWidget;
    QWidget *welcome;
    QGridLayout *gridLayout;
    QPushButton *freePb;
    QPushButton *mastersPb;
    QPushButton *pushButton;
    QStackedWidget *avatarStckW;
    QWidget *avatar;
    QGridLayout *gridLayout_4;
    QLabel *usernameLb;
    QLabel *activeAvatarLb;
    QLabel *statusLb;
    QPushButton *changePb;
    QWidget *changeAvatar;
    QGridLayout *gridLayout_3;
    QLabel *wAvatarLb;
    QLabel *mAvatarlb;
    QPushButton *changeWomenPb;
    QPushButton *changeMenPb;
    QPushButton *customerPb;
    QLabel *pictureLb;
    QSpacerItem *horizontalSpacer_2;
    QLabel *welcoeLb;
    QSpacerItem *horizontalSpacer;
    QPushButton *sketchPb;

    void setupUi(QWidget *HomeWnd)
    {
        if (HomeWnd->objectName().isEmpty())
            HomeWnd->setObjectName("HomeWnd");
        HomeWnd->resize(704, 586);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        HomeWnd->setWindowIcon(icon);
        HomeWnd->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton\n"
"{\n"
"	font: 16pt \"Candara\";\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"  border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"width: 50px;\n"
"  height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"               border: 4px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }\n"
"QPushButton:pressed {\n"
" border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }"));
        gridLayout_2 = new QGridLayout(HomeWnd);
        gridLayout_2->setObjectName("gridLayout_2");
        homePb = new QPushButton(HomeWnd);
        homePb->setObjectName("homePb");
        homePb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
" padding-left: 5px; \n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"width: 40px;\n"
"  height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"               border: 4px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }\n"
"QPushButton:pressed {\n"
" border: 2px solid  rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/photo/homeicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        homePb->setIcon(icon1);
        homePb->setIconSize(QSize(35, 35));

        gridLayout_2->addWidget(homePb, 3, 1, 1, 1);

        spacerHomePb = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(spacerHomePb, 3, 0, 1, 1);

        stackedWidget = new QStackedWidget(HomeWnd);
        stackedWidget->setObjectName("stackedWidget");
        welcome = new QWidget();
        welcome->setObjectName("welcome");
        gridLayout = new QGridLayout(welcome);
        gridLayout->setObjectName("gridLayout");
        freePb = new QPushButton(welcome);
        freePb->setObjectName("freePb");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/photo/free.png"), QSize(), QIcon::Normal, QIcon::Off);
        freePb->setIcon(icon2);
        freePb->setIconSize(QSize(35, 35));

        gridLayout->addWidget(freePb, 5, 1, 1, 1);

        mastersPb = new QPushButton(welcome);
        mastersPb->setObjectName("mastersPb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        mastersPb->setFont(font);
        mastersPb->setLayoutDirection(Qt::LeftToRight);
        mastersPb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"  border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"width: 50px;\n"
"  height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"               border: 4px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }\n"
"QPushButton:pressed {\n"
" border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/photo/masters.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        mastersPb->setIcon(icon3);
        mastersPb->setIconSize(QSize(35, 35));

        gridLayout->addWidget(mastersPb, 2, 1, 1, 1);

        pushButton = new QPushButton(welcome);
        pushButton->setObjectName("pushButton");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/photo/work.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(35, 35));

        gridLayout->addWidget(pushButton, 6, 1, 1, 1);

        avatarStckW = new QStackedWidget(welcome);
        avatarStckW->setObjectName("avatarStckW");
        avatar = new QWidget();
        avatar->setObjectName("avatar");
        gridLayout_4 = new QGridLayout(avatar);
        gridLayout_4->setObjectName("gridLayout_4");
        usernameLb = new QLabel(avatar);
        usernameLb->setObjectName("usernameLb");
        usernameLb->setStyleSheet(QString::fromUtf8("QLabel{font: 11pt \"Candara\";}"));
        usernameLb->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(usernameLb, 0, 0, 1, 1);

        activeAvatarLb = new QLabel(avatar);
        activeAvatarLb->setObjectName("activeAvatarLb");
        activeAvatarLb->setPixmap(QPixmap(QString::fromUtf8(":/photo/avatarW.png")));
        activeAvatarLb->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(activeAvatarLb, 0, 1, 2, 1);

        statusLb = new QLabel(avatar);
        statusLb->setObjectName("statusLb");
        statusLb->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(76, 76, 76);\n"
"font: 8pt \"Candara\";}\n"
""));
        statusLb->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(statusLb, 1, 0, 1, 1);

        changePb = new QPushButton(avatar);
        changePb->setObjectName("changePb");
        changePb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{font: 10pt \"Candara\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(255, 255, 255);\n"
"border: 2px solid  rgb(255, 255, 255);\n"
"width: 40px;\n"
"  height: 20px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"               color: rgb(0, 0, 0);\n"
"            }\n"
"QPushButton:pressed {\n"
"background-color: rgb(255, 255, 255);\n"
"	color: rgb(111, 111, 111);\n"
"            }"));

        gridLayout_4->addWidget(changePb, 2, 0, 1, 2);

        avatarStckW->addWidget(avatar);
        changeAvatar = new QWidget();
        changeAvatar->setObjectName("changeAvatar");
        gridLayout_3 = new QGridLayout(changeAvatar);
        gridLayout_3->setObjectName("gridLayout_3");
        wAvatarLb = new QLabel(changeAvatar);
        wAvatarLb->setObjectName("wAvatarLb");
        wAvatarLb->setPixmap(QPixmap(QString::fromUtf8(":/photo/avatarW.png")));

        gridLayout_3->addWidget(wAvatarLb, 0, 0, 1, 1);

        mAvatarlb = new QLabel(changeAvatar);
        mAvatarlb->setObjectName("mAvatarlb");
        mAvatarlb->setPixmap(QPixmap(QString::fromUtf8(":/photo/avatarM.png")));

        gridLayout_3->addWidget(mAvatarlb, 0, 1, 1, 1);

        changeWomenPb = new QPushButton(changeAvatar);
        changeWomenPb->setObjectName("changeWomenPb");
        changeWomenPb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{font: 10pt \"Candara\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(190, 190, 195);\n"
"border: 2px solid  rgb(255, 255, 255);\n"
"width: 40px;\n"
"  height: 20px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"               color: rgb(0, 0, 0);\n"
"            }\n"
"QPushButton:pressed {\n"
"background-color: rgb(255, 255, 255);\n"
"	color: rgb(111, 111, 111);\n"
"            }"));

        gridLayout_3->addWidget(changeWomenPb, 1, 0, 1, 1);

        changeMenPb = new QPushButton(changeAvatar);
        changeMenPb->setObjectName("changeMenPb");
        changeMenPb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{font: 10pt \"Candara\";\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(190, 190, 195);\n"
"border: 2px solid  rgb(255, 255, 255);\n"
"width: 40px;\n"
"  height: 20px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgb(255, 255, 255);\n"
"               color: rgb(0, 0, 0);\n"
"            }\n"
"QPushButton:pressed {\n"
"background-color: rgb(255, 255, 255);\n"
"	color: rgb(111, 111, 111);\n"
"            }"));

        gridLayout_3->addWidget(changeMenPb, 1, 1, 1, 1);

        avatarStckW->addWidget(changeAvatar);

        gridLayout->addWidget(avatarStckW, 0, 2, 1, 1);

        customerPb = new QPushButton(welcome);
        customerPb->setObjectName("customerPb");
        customerPb->setFont(font);
        customerPb->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	color: rgb(0, 0, 0);\n"
"  border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"width: 50px;\n"
"  height: 40px;\n"
"}\n"
"QPushButton:hover {\n"
"               border: 4px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }\n"
"QPushButton:pressed {\n"
" border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"            }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/photo/customer.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        customerPb->setIcon(icon5);
        customerPb->setIconSize(QSize(37, 37));

        gridLayout->addWidget(customerPb, 3, 1, 1, 1);

        pictureLb = new QLabel(welcome);
        pictureLb->setObjectName("pictureLb");
        pictureLb->setPixmap(QPixmap(QString::fromUtf8(":/photo/moons.jpg")));
        pictureLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pictureLb, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        welcoeLb = new QLabel(welcome);
        welcoeLb->setObjectName("welcoeLb");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Candara Light")});
        font1.setPointSize(48);
        welcoeLb->setFont(font1);
        welcoeLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(welcoeLb, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        sketchPb = new QPushButton(welcome);
        sketchPb->setObjectName("sketchPb");

        gridLayout->addWidget(sketchPb, 7, 1, 1, 1);

        stackedWidget->addWidget(welcome);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 2);


        retranslateUi(HomeWnd);

        stackedWidget->setCurrentIndex(0);
        avatarStckW->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HomeWnd);
    } // setupUi

    void retranslateUi(QWidget *HomeWnd)
    {
        HomeWnd->setWindowTitle(QCoreApplication::translate("HomeWnd", "Home", nullptr));
        homePb->setText(QString());
        freePb->setText(QCoreApplication::translate("HomeWnd", "Free time", nullptr));
        mastersPb->setText(QCoreApplication::translate("HomeWnd", "Masters", nullptr));
        pushButton->setText(QCoreApplication::translate("HomeWnd", "Work time", nullptr));
        usernameLb->setText(QString());
        activeAvatarLb->setText(QString());
        statusLb->setText(QCoreApplication::translate("HomeWnd", "admin", nullptr));
        changePb->setText(QCoreApplication::translate("HomeWnd", "change", nullptr));
        wAvatarLb->setText(QString());
        mAvatarlb->setText(QString());
        changeWomenPb->setText(QCoreApplication::translate("HomeWnd", "change", nullptr));
        changeMenPb->setText(QCoreApplication::translate("HomeWnd", "change", nullptr));
        customerPb->setText(QCoreApplication::translate("HomeWnd", "Customers", nullptr));
        pictureLb->setText(QString());
        welcoeLb->setText(QCoreApplication::translate("HomeWnd", "Welcome!", nullptr));
        sketchPb->setText(QCoreApplication::translate("HomeWnd", "Sketch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeWnd: public Ui_HomeWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWND_H