#include "widget.h"
#include <QApplication>
#include <qDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDesktopWidget>
#include <QIcon>
#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon icon(":/new/prefix1/c.png");
    a.setWindowIcon(icon);
    QDesktopWidget *desk = QApplication::desktop();
    Widget w;
    w.move((desk->width() - w.width())/2,40);



//    QPixmap pixmap(":/back/honeycomb.png");
//    QPalette palette;
//    palette.setBrush(w.backgroundRole(),QBrush(pixmap));
//    w.setPalette(palette);
    w.show();



    return a.exec();
}
