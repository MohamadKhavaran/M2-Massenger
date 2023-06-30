QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    afterlogin.cpp \
    channellist.cpp \
    chatpage.cpp \
    createchannel.cpp \
    creategroup.cpp \
    grouplist.cpp \
    joinchannel.cpp \
    joingroup.cpp \
    main.cpp \
    mainwindow.cpp \
    mythread.cpp \
    register.cpp \
    sendmessageuser.cpp \
    userlist.cpp \
    verification.cpp

HEADERS += \
    afterlogin.h \
    channellist.h \
    chatpage.h \
    createchannel.h \
    creategroup.h \
    grouplist.h \
    joinchannel.h \
    joingroup.h \
    mainwindow.h \
    mythread.h \
    register.h \
    sendmessageuser.h \
    userlist.h \
    verification.h

FORMS += \
    afterlogin.ui \
    channellist.ui \
    chatpage.ui \
    createchannel.ui \
    creategroup.ui \
    grouplist.ui \
    joinchannel.ui \
    joingroup.ui \
    mainwindow.ui \
    register.ui \
    sendmessageuser.ui \
    userlist.ui \
    verification.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    logo.qrc

DISTFILES +=
