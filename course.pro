QT       += core gui widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customer.cpp \
    customerwnd.cpp \
    homewnd.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    master.cpp \
    masterswnd.cpp \
    person.cpp \
    regitration.cpp \
    sqldbmaneger.cpp

HEADERS += \
    customer.h \
    customerwnd.h \
    dbmaneger.h \
    homewnd.h \
    login.h \
    mainwindow.h \
    master.h \
    masterswnd.h \
    person.h \
    regitration.h \
    sqldbmaneger.h

FORMS += \
    customerwnd.ui \
    homewnd.ui \
    login.ui \
    mainwindow.ui \
    masterswnd.ui \
    regitration.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc
