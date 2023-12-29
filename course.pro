QT       += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    acceptreques.cpp \
    application.cpp \
    bodywnd.cpp \
    customer.cpp \
    customerwnd.cpp \
    freetadd.cpp \
    freetime.cpp \
    homecustomer.cpp \
    homewnd.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    master.cpp \
    masterswnd.cpp \
    person.cpp \
    quesfortime.cpp \
    question.cpp \
    regitration.cpp \
    scketchwnd.cpp \
    sketch.cpp \
    sqldbmaneger.cpp \
    worktime.cpp \
    workwnd.cpp

HEADERS += \
    acceptreques.h \
    application.h \
    bodywnd.h \
    customer.h \
    customerwnd.h \
    dbmaneger.h \
    freetadd.h \
    freetime.h \
    homecustomer.h \
    homewnd.h \
    login.h \
    mainwindow.h \
    master.h \
    masterswnd.h \
    person.h \
    quesfortime.h \
    question.h \
    regitration.h \
    scketchwnd.h \
    sketch.h \
    sqldbmaneger.h \
    worktime.h \
    workwnd.h

FORMS += \
    acceptreques.ui \
    application.ui \
    bodywnd.ui \
    customerwnd.ui \
    freetadd.ui \
    homecustomer.ui \
    homewnd.ui \
    login.ui \
    mainwindow.ui \
    masterswnd.ui \
    quesfortime.ui \
    question.ui \
    regitration.ui \
    scketchwnd.ui \
    workwnd.ui

# Default rules for deployment.

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc
