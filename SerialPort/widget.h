#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <qDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTime>
#include <qwt_dial_needle.h>
#include <QKeyEvent>


namespace Ui {
class Widget;


}
class QKeyEvent;
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QTransform;
class QColor;

class Widget : public QWidget
{
    Q_OBJECT


public:
    explicit Widget(QWidget *parent = 0);

    ~Widget();
    QwtDialSimpleNeedle *needle;
    void keyPressEvent(QKeyEvent *ev);
    void keyReleaseEvent(QKeyEvent *ev);
    bool isfalse = false;
    bool fisfalse = false;
    bool gisfalse = false;
    QPainter *painter;

public Q_SLOTS:

private slots:
    void Read_Date();       //读取串口数据
    void find_port();       //查找可用串口
    void sleep(int msec);      //延时函数

    void on_send_button_clicked();
    void on_open_port_clicked();
    void on_close_port_clicked();
    void on_clear_button_1_clicked();
    void on_clear_button2_clicked();
    void on_receive_modl_clicked();
    void on_send_modl_clicked();

    void exitBtnResponded();
    void cameraImageCaptured(int,QImage);
protected:
    void paintEvent(QPaintEvent *);

private:
    bool m_alarm;
    Ui::Widget *ui;
    QSerialPort *serialport;
    bool textstate_receive;
    bool textstate_send;

    QCamera *m_pCamera; //读取摄像头
    QCameraViewfinder *m_pViewfinder; //渲染摄像头
    QCameraImageCapture *m_pImageCapture; //获取摄像头当前帧
    QTransform *transform;


};

#endif // WIDGET_H
