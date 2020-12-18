QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialognew.cpp \
    dialogsalvar.cpp \
    gridsculptor.cpp \
    main.cpp \
    mainwindow.cpp \
    sculptor.cpp

HEADERS += \
    dialognew.h \
    dialogsalvar.h \
    gridsculptor.h \
    mainwindow.h \
    sculptor.h

FORMS += \
    dialognew.ui \
    dialogsalvar.ui \
    mainwindow.ui

TRANSLATIONS += \
    Projeto_PA_Unidade3_pt_BR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
