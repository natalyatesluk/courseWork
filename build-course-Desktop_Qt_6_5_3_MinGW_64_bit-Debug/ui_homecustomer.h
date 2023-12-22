/********************************************************************************
** Form generated from reading UI file 'homecustomer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMECUSTOMER_H
#define UI_HOMECUSTOMER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeCustomer
{
public:
    QGridLayout *gridLayout_5;
    QStackedWidget *homeCusStckW;
    QWidget *welcomePage;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *welcoeLb;
    QLabel *pictureLb;
    QPushButton *sketchPb;
    QPushButton *freePb;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *mastersPb;
    QStackedWidget *avatarStckW;
    QWidget *avatar;
    QGridLayout *gridLayout_7;
    QLabel *usernameLb;
    QPushButton *changePb;
    QLabel *activeAvatarLb;
    QLabel *statusLb;
    QWidget *changeAvatarP;
    QGridLayout *gridLayout_8;
    QLabel *wAvatarLb;
    QLabel *mAvatarlb;
    QPushButton *changeWomenPb;
    QPushButton *changeMenPb;
    QWidget *masterPage;
    QGridLayout *gridLayout_3;
    QTableView *masterTv;
    QPushButton *homePb;
    QHBoxLayout *horizontalLayout;
    QLabel *searchLblMaster;
    QLineEdit *searchLEMaster;
    QWidget *timePage;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *searchLblTime;
    QLineEdit *searchLETime;
    QTableView *timeTv;
    QPushButton *homeTPb;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QPushButton *backPb;
    QStackedWidget *sketchStckW;
    QPushButton *nextPb;
    QPushButton *selectPb;
    QPushButton *homeSPb;

    void setupUi(QWidget *HomeCustomer)
    {
        if (HomeCustomer->objectName().isEmpty())
            HomeCustomer->setObjectName("HomeCustomer");
        HomeCustomer->resize(756, 470);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build-course-Desktop_Qt_6_5_3_MinGW_64_bit-Debug/icons/iconka.ico"), QSize(), QIcon::Normal, QIcon::Off);
        HomeCustomer->setWindowIcon(icon);
        HomeCustomer->setStyleSheet(QString::fromUtf8("QTableView {\n"
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
"    border: 1px solid #303030;  /* \320\223\321\200\320\260\320\275\320\270\321\206\321\226 */\n"
"}\n"
"\n"
""
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
"    border: 2px solid #303030;  /* \320\232\320\276\320\273\321\226\321\200 \320\263\321\200\320\260\320\275\320\270\321\206\321\226 \320\277\321\200\320\270 \320\262\320\270\320\264\321\226"
                        "\320\273\320\265\320\275\320\275\321\226 */\n"
"}QWidget\n"
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
        gridLayout_5 = new QGridLayout(HomeCustomer);
        gridLayout_5->setObjectName("gridLayout_5");
        homeCusStckW = new QStackedWidget(HomeCustomer);
        homeCusStckW->setObjectName("homeCusStckW");
        welcomePage = new QWidget();
        welcomePage->setObjectName("welcomePage");
        gridLayout = new QGridLayout(welcomePage);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        welcoeLb = new QLabel(welcomePage);
        welcoeLb->setObjectName("welcoeLb");
        QFont font;
        font.setFamilies({QString::fromUtf8("Candara Light")});
        font.setPointSize(48);
        welcoeLb->setFont(font);
        welcoeLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(welcoeLb, 1, 1, 1, 1);

        pictureLb = new QLabel(welcomePage);
        pictureLb->setObjectName("pictureLb");
        pictureLb->setPixmap(QPixmap(QString::fromUtf8(":/photo/moons.jpg")));
        pictureLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pictureLb, 2, 1, 2, 1);

        sketchPb = new QPushButton(welcomePage);
        sketchPb->setObjectName("sketchPb");

        gridLayout->addWidget(sketchPb, 6, 1, 1, 1);

        freePb = new QPushButton(welcomePage);
        freePb->setObjectName("freePb");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/photo/free.png"), QSize(), QIcon::Normal, QIcon::Off);
        freePb->setIcon(icon1);
        freePb->setIconSize(QSize(35, 35));

        gridLayout->addWidget(freePb, 5, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        mastersPb = new QPushButton(welcomePage);
        mastersPb->setObjectName("mastersPb");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Candara")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        mastersPb->setFont(font1);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/photo/masters.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        mastersPb->setIcon(icon2);
        mastersPb->setIconSize(QSize(35, 35));

        gridLayout->addWidget(mastersPb, 4, 1, 1, 1);

        avatarStckW = new QStackedWidget(welcomePage);
        avatarStckW->setObjectName("avatarStckW");
        avatar = new QWidget();
        avatar->setObjectName("avatar");
        gridLayout_7 = new QGridLayout(avatar);
        gridLayout_7->setObjectName("gridLayout_7");
        usernameLb = new QLabel(avatar);
        usernameLb->setObjectName("usernameLb");
        usernameLb->setStyleSheet(QString::fromUtf8("QLabel{font: 11pt \"Candara\";}"));
        usernameLb->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(usernameLb, 0, 0, 1, 1);

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

        gridLayout_7->addWidget(changePb, 2, 0, 1, 2);

        activeAvatarLb = new QLabel(avatar);
        activeAvatarLb->setObjectName("activeAvatarLb");
        activeAvatarLb->setPixmap(QPixmap(QString::fromUtf8(":/photo/avatarW.png")));
        activeAvatarLb->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(activeAvatarLb, 0, 1, 2, 1);

        statusLb = new QLabel(avatar);
        statusLb->setObjectName("statusLb");
        statusLb->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(76, 76, 76);\n"
"font: 8pt \"Candara\";}\n"
""));
        statusLb->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(statusLb, 1, 0, 1, 1);

        avatarStckW->addWidget(avatar);
        changeAvatarP = new QWidget();
        changeAvatarP->setObjectName("changeAvatarP");
        gridLayout_8 = new QGridLayout(changeAvatarP);
        gridLayout_8->setObjectName("gridLayout_8");
        wAvatarLb = new QLabel(changeAvatarP);
        wAvatarLb->setObjectName("wAvatarLb");
        wAvatarLb->setPixmap(QPixmap(QString::fromUtf8(":/photo/avatarW.png")));

        gridLayout_8->addWidget(wAvatarLb, 0, 0, 1, 1);

        mAvatarlb = new QLabel(changeAvatarP);
        mAvatarlb->setObjectName("mAvatarlb");
        mAvatarlb->setPixmap(QPixmap(QString::fromUtf8(":/photo/avatarM.png")));

        gridLayout_8->addWidget(mAvatarlb, 0, 1, 1, 1);

        changeWomenPb = new QPushButton(changeAvatarP);
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

        gridLayout_8->addWidget(changeWomenPb, 1, 0, 1, 1);

        changeMenPb = new QPushButton(changeAvatarP);
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

        gridLayout_8->addWidget(changeMenPb, 1, 1, 1, 1);

        avatarStckW->addWidget(changeAvatarP);

        gridLayout->addWidget(avatarStckW, 0, 2, 2, 1);

        homeCusStckW->addWidget(welcomePage);
        masterPage = new QWidget();
        masterPage->setObjectName("masterPage");
        gridLayout_3 = new QGridLayout(masterPage);
        gridLayout_3->setObjectName("gridLayout_3");
        masterTv = new QTableView(masterPage);
        masterTv->setObjectName("masterTv");

        gridLayout_3->addWidget(masterTv, 1, 0, 1, 1);

        homePb = new QPushButton(masterPage);
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/photo/homeicon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        homePb->setIcon(icon3);
        homePb->setIconSize(QSize(35, 35));

        gridLayout_3->addWidget(homePb, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchLblMaster = new QLabel(masterPage);
        searchLblMaster->setObjectName("searchLblMaster");
        searchLblMaster->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        searchLblMaster->setPixmap(QPixmap(QString::fromUtf8(":/photo/search.png")));

        horizontalLayout->addWidget(searchLblMaster);

        searchLEMaster = new QLineEdit(masterPage);
        searchLEMaster->setObjectName("searchLEMaster");
        searchLEMaster->setStyleSheet(QString::fromUtf8(" border: 1px solid #000000; /* \320\227\320\260\320\264\320\260\320\271\321\202\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\321\216 */\n"
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

        horizontalLayout->addWidget(searchLEMaster);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        homeCusStckW->addWidget(masterPage);
        timePage = new QWidget();
        timePage->setObjectName("timePage");
        gridLayout_2 = new QGridLayout(timePage);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        searchLblTime = new QLabel(timePage);
        searchLblTime->setObjectName("searchLblTime");
        searchLblTime->setStyleSheet(QString::fromUtf8("QLabel {\n"
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
        searchLblTime->setPixmap(QPixmap(QString::fromUtf8(":/photo/search.png")));

        horizontalLayout_3->addWidget(searchLblTime);

        searchLETime = new QLineEdit(timePage);
        searchLETime->setObjectName("searchLETime");
        searchLETime->setStyleSheet(QString::fromUtf8(" border: 1px solid #000000; /* \320\227\320\260\320\264\320\260\320\271\321\202\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\321\216 */\n"
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

        horizontalLayout_3->addWidget(searchLETime);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 2);

        timeTv = new QTableView(timePage);
        timeTv->setObjectName("timeTv");

        gridLayout_2->addWidget(timeTv, 1, 1, 1, 1);

        homeTPb = new QPushButton(timePage);
        homeTPb->setObjectName("homeTPb");
        homeTPb->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        homeTPb->setIcon(icon3);
        homeTPb->setIconSize(QSize(35, 35));

        gridLayout_2->addWidget(homeTPb, 2, 0, 1, 2);

        homeCusStckW->addWidget(timePage);
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"	font: 14pt \"Candara\";\n"
"}\n"
"QPushButton\n"
"{\n"
" padding-left: 5px; \n"
"	background-color: rgb(0, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 2px solid  rgb(0, 0, 0);\n"
"border-radius: 20px;\n"
"\n"
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
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName("gridLayout_4");
        backPb = new QPushButton(page);
        backPb->setObjectName("backPb");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/photo/back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        backPb->setIcon(icon4);
        backPb->setIconSize(QSize(35, 28));

        gridLayout_4->addWidget(backPb, 0, 0, 1, 1);

        sketchStckW = new QStackedWidget(page);
        sketchStckW->setObjectName("sketchStckW");

        gridLayout_4->addWidget(sketchStckW, 0, 1, 1, 1);

        nextPb = new QPushButton(page);
        nextPb->setObjectName("nextPb");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/photo/next.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        nextPb->setIcon(icon5);
        nextPb->setIconSize(QSize(35, 28));

        gridLayout_4->addWidget(nextPb, 0, 2, 1, 1);

        selectPb = new QPushButton(page);
        selectPb->setObjectName("selectPb");

        gridLayout_4->addWidget(selectPb, 3, 0, 1, 3);

        homeSPb = new QPushButton(page);
        homeSPb->setObjectName("homeSPb");
        homeSPb->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        homeSPb->setIcon(icon3);
        homeSPb->setIconSize(QSize(35, 35));

        gridLayout_4->addWidget(homeSPb, 4, 0, 1, 1);

        homeCusStckW->addWidget(page);

        gridLayout_5->addWidget(homeCusStckW, 0, 0, 1, 1);


        retranslateUi(HomeCustomer);

        homeCusStckW->setCurrentIndex(3);
        avatarStckW->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(HomeCustomer);
    } // setupUi

    void retranslateUi(QWidget *HomeCustomer)
    {
        HomeCustomer->setWindowTitle(QCoreApplication::translate("HomeCustomer", "Home", nullptr));
        welcoeLb->setText(QCoreApplication::translate("HomeCustomer", "Welcome!", nullptr));
        pictureLb->setText(QString());
        sketchPb->setText(QCoreApplication::translate("HomeCustomer", "Sketches", nullptr));
        freePb->setText(QCoreApplication::translate("HomeCustomer", "Free time", nullptr));
        mastersPb->setText(QCoreApplication::translate("HomeCustomer", "Masters", nullptr));
        usernameLb->setText(QString());
        changePb->setText(QCoreApplication::translate("HomeCustomer", "change", nullptr));
        activeAvatarLb->setText(QString());
        statusLb->setText(QCoreApplication::translate("HomeCustomer", "customer", nullptr));
        wAvatarLb->setText(QString());
        mAvatarlb->setText(QString());
        changeWomenPb->setText(QCoreApplication::translate("HomeCustomer", "change", nullptr));
        changeMenPb->setText(QCoreApplication::translate("HomeCustomer", "change", nullptr));
        homePb->setText(QString());
        searchLblMaster->setText(QString());
        searchLblTime->setText(QString());
        homeTPb->setText(QString());
        backPb->setText(QString());
        nextPb->setText(QString());
        selectPb->setText(QCoreApplication::translate("HomeCustomer", "SELECT", nullptr));
        homeSPb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomeCustomer: public Ui_HomeCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMECUSTOMER_H
