QT       += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    departure_control.cpp \
    individualdlg.cpp \
    individualwg.cpp \
    main.cpp \
    mainwindow.cpp \
    traffic_control.cpp

HEADERS += \
    departure_control.h \
    individualdlg.h \
    individualwg.h \
    mainwindow.h \
    traffic_control.h

FORMS += \
    departure_control.ui \
    individualdlg.ui \
    individualwg.ui \
    mainwindow.ui \
    traffic_control.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
