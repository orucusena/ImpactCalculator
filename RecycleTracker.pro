QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutpage.cpp \
    aluminumpage.cpp \
    calculateimpactpage.cpp \
    glasspage.cpp \
    main.cpp \
    mainwindow.cpp \
    paperpage.cpp \
    plasticpage.cpp \
    startpage.cpp

HEADERS += \
    aboutpage.h \
    aluminumpage.h \
    calculateimpactpage.h \
    glasspage.h \
    mainwindow.h \
    paperpage.h \
    plasticpage.h \
    startpage.h

FORMS += \
    aboutpage.ui \
    aluminumpage.ui \
    calculateimpactpage.ui \
    glasspage.ui \
    mainwindow.ui \
    paperpage.ui \
    plasticpage.ui \
    startpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
