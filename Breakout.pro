QT       += core gui
QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ball.cpp \
    blocks.cpp \
    health.cpp \
    itemshop.cpp \
    laser.cpp \
    levels.cpp \
    lose.cpp \
    main.cpp \
    mainwindow.cpp \
    score.cpp \
    settings.cpp \
    slider.cpp \
    win.cpp

HEADERS += \
    ball.h \
    blocks.h \
    health.h \
    itemshop.h \
    levels.h \
    lose.h \
    laser.h \
    mainwindow.h \
    score.h \
    settings.h \
    slider.h \
    win.h

FORMS += \
    itemshop.ui \
    levels.ui \
    lose.ui \
    mainwindow.ui \
    settings.ui \
    win.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    levels.qrc
