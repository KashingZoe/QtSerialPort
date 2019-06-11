#-------------------------------------------------
#
# Project created by QtCreator 2018-04-26T19:07:06
#
#-------------------------------------------------

QT       += core gui widgets
CONFIG += qwt
CONFIG += release
QT       += serialport
QT       += multimedia
QT       += multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = SerialPort
#TARGET = QCameraTest
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

DEFINES += QT_DLL QWT_DLL
#LIBS += -L"C:\Qt\Qt5.11.1\5.11.1\mingw53_32\lib" -lqwtd
LIBS += -L"C:\Qt\Qt5.11.1\5.11.1\mingw53_32\lib" -lqwt
INCLUDEPATH += C:\Qt\Qt5.11.1\5.11.1\mingw53_32\include\Qwt
RC_FILE = rel.rc

RESOURCES += \
    images.qrc
