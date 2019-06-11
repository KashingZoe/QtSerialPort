#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QByteArray>
#include <QDebug>
#include <qwt_dial_needle.h>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QPushButton>
#include <QFileDialog>
#include <QTransform>
#include <QKeyEvent>
#include <QPainter>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    m_alarm = false;
    resize(100,100);
    ui->setupUi(this);
    textstate_receive = false;
    textstate_send = false;
    setWindowTitle("海洋牧场机器人");


    ui->send_button->setEnabled(false);     //设置控件不可用
    ui->close_port->setEnabled(false);

    m_pCamera = new QCamera(this);
    m_pViewfinder = new QCameraViewfinder(this);
    m_pImageCapture = new QCameraImageCapture(m_pCamera);

    ui->verticalLayout_2->addWidget(m_pViewfinder);

    connect(ui->capture, SIGNAL(clicked()), m_pImageCapture, SLOT(capture()));
    serialport = new QSerialPort;
    find_port();                    //查找可用串口    connect(ui->exit, SIGNAL(clicked()), this, SLOT(exitBtnResponded()));
    connect(m_pImageCapture, SIGNAL(imageCaptured(int,QImage)), this, SLOT(cameraImageCaptured(int,QImage)));
    m_pImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    m_pCamera->setCaptureMode(QCamera::CaptureStillImage);
    m_pCamera->setViewfinder(m_pViewfinder);
    m_pCamera->start();


    this->grabKeyboard();

    //Qt设置QLineEdit控件不可编辑
    ui->Receive_text_window->setFocusPolicy(Qt::NoFocus);

}
Widget::~Widget()
{
    delete ui,serialport;
    delete m_pCamera;
    delete m_pViewfinder;
    delete m_pImageCapture;
}

//发送数据
void Widget::on_send_button_clicked()
{

    if(textstate_send == true)  //文版模式
    {
        serialport->write(ui->send_text_window->toPlainText().toLatin1());
    }

    if(textstate_send == false)     //16进制
    {
        QString str = ui->send_text_window->toPlainText();
        int num = str.toInt();
        str = str.setNum(num,16);
        ui->send_text_window->clear();
        ui->send_text_window->append(str);
        serialport->write(ui->send_text_window->toPlainText().toLatin1());
    }


}
//打开串口
void Widget::on_open_port_clicked()
{
   update();
   sleep(100);      //延时100ms
   find_port();     //重新查找com
    //初始化串口
        serialport->setPortName(ui->com->currentText());        //设置串口名
        if(serialport->open(QIODevice::ReadWrite))              //打开串口成功
        {
            serialport->setBaudRate(ui->baud->currentText().toInt());       //设置波特率
            switch(ui->bit->currentIndex())                   //设置数据位数
            {
                case 8:serialport->setDataBits(QSerialPort::Data8);break;
                default: break;
            }
            switch(ui->jiaoyan->currentIndex())                   //设置奇偶校验
            {
                case 0: serialport->setParity(QSerialPort::NoParity);break;
                default: break;
            }
            switch(ui->stopbit->currentIndex())                     //设置停止位
            {
                case 1: serialport->setStopBits(QSerialPort::OneStop);break;
                case 2: serialport->setStopBits(QSerialPort::TwoStop);break;
                default: break;
            }
            serialport->setFlowControl(QSerialPort::NoFlowControl);     //设置流控制
            //连接槽函数
            QObject::connect(serialport, &QSerialPort::readyRead, this, &Widget::Read_Date);
            // 设置控件可否使用
            ui->send_button->setEnabled(true);
            ui->close_port->setEnabled(true);
            ui->open_port->setEnabled(false);
        }
        else    //打开失败提示
        {
            sleep(100);
            QMessageBox::information(this,tr("Erro"),tr("Open the failure"),QMessageBox::Ok);
        }
}
//关闭串口
void Widget::on_close_port_clicked()
{
    serialport->clear();        //清空缓存区
    serialport->close();        //关闭串口

    ui->send_button->setEnabled(false);
    ui->open_port->setEnabled(true);
    ui->close_port->setEnabled(false);
}
//窗口显示串口传来的数据
void Widget::Read_Date()
{

    QByteArray buf;
    buf = serialport->readAll();
    //qDebug()<<buf;

    //舱外温度T
    QByteArray buf1 = buf.mid(1,2);
    int ot = buf1.toInt();
    //qDebug()<<ot;
    ui->Thermo_5->setValue(ot);

    //舱内湿度h
    QByteArray buf2 = buf.mid(9,2);
    int h = buf2.toInt();
    ui->Thermo->setValue(h);
    //qDebug()<<h;

    //舱内温度t
    QByteArray buf3 = buf.mid(17,2);
    int ct = buf3.toInt();
    //qDebug()<<ct;
    ui->Thermo_2->backgroundRole();
    ui->Thermo_2->setValue(ct);

    //PH p
    QByteArray buf4 = buf.mid(25,4);
    double ph = buf4.toDouble();
    //qDebug()<<ph;
    ui->Thermo_6->backgroundRole();
    ui->Thermo_6->setValue(ph);

    //压力 P
    QByteArray buf5 = buf.mid(33,4);
    double pr = buf5.toDouble();
    ui->Thermo_7->backgroundRole();
    ui->Thermo_7->setValue(pr);


    //航速 S
    QByteArray buf6 = buf.mid(41,2);
    int speed = buf6.toInt();
    needle = new QwtDialSimpleNeedle(QwtDialSimpleNeedle::Arrow,true,Qt::red,Qt::darkRed);
    ui->Dial->setNeedle(needle);
    ui->Dial->setValue(speed);


    //加速度 X,Y,Z
    QByteArray buf7 = buf.mid(49,2);
    int x1 = buf7.toInt();
    ui->lcdNumber_2->display(x1);
    QByteArray buf8 = buf.mid(57,2);
    int y1 = buf8.toInt();
    ui->lcdNumber_3->display(y1);
    QByteArray buf9 = buf.mid(65,2);
    int z1 = buf9.toInt();
    ui->lcdNumber_4->display(z1);


    //角速度 x,y,z
    QByteArray buf10 = buf.mid(73,2);
    int x2 = buf10.toInt();
    ui->lcdNumber_5->display(x2);
    QByteArray buf11 = buf.mid(81,2);
    int y2 = buf11.toInt();
    ui->lcdNumber_6->display(y2);
    QByteArray buf12 = buf.mid(89,2);
    int z2 = buf12.toInt();
    ui->lcdNumber_7->display(z2);


    //角度 a,b,c
    QByteArray buf13 = buf.mid(97,2);
    int x3 = buf13.toInt();
    ui->lcdNumber_8->display(x3);
    QByteArray buf14 = buf.mid(105,2);
    int y3 = buf14.toInt();
    ui->lcdNumber_9->display(y3);
    QByteArray buf15 = buf.mid(113,2);
    int z3 = buf15.toInt();
    ui->lcdNumber_10->display(z3);


    //氧含量 O
    QByteArray buf16 = buf.mid(121,2);
    double ox = buf16.toDouble();
    ui->lcdNumber->display(ox);


    if(!buf.isEmpty())          //将数据显示到文本串口
    {


        if(textstate_receive == false)   //文本模式
        {
            QString str = ui->Receive_text_window->toPlainText();
            str+=tr(buf);
            //str += "  ";
            ui->Receive_text_window->clear();
            ui->Receive_text_window->append(str);
        }
        if(textstate_receive == true)   //hex模式16进制
        {
            QString str = ui->Receive_text_window->toPlainText();
            // byteArray 转 16进制
            QByteArray temp = buf.toHex();
            str+=tr(temp);
            str += "  ";
            ui->Receive_text_window->clear();
            ui->Receive_text_window->append(str);
        }
   }
    buf.clear();    //清空缓存区
}

//查找串口
void Widget::find_port()
{
    //查找可用的串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);   //设置串口
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->com->addItem(serial.portName());        //显示串口name
            serial.close();
        }
    }
}

//延时函数
void Widget::sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


void Widget::on_clear_button_1_clicked()
{
    ui->send_text_window->clear();
}

void Widget::on_clear_button2_clicked()
{
    ui->Receive_text_window->clear();
}

//接收框文本模式转换
void Widget::on_receive_modl_clicked()
{
    if(ui->receive_modl->text() == "hex模式")
    {
        textstate_receive = true;
        ui->receive_modl->setText("文本模式");
    }
    else
    {
        ui->receive_modl->setText("hex模式");
        textstate_receive = false;
    }
}

//发送框文本转换
void Widget::on_send_modl_clicked()
{
    if(ui->send_modl->text() == "文本模式")
    {
        textstate_send = true;
        ui->send_modl->setText("hex模式");
    }
    else
    {
        ui->send_modl->setText("文本模式");
        textstate_send = false;
    }
}

void Widget::exitBtnResponded()
{
    m_pCamera->stop();
    close();
}
void Widget::cameraImageCaptured(int, QImage image)
{
    QString savepath = QFileDialog::getSaveFileName(this,"Save Capture","Capture","Image png(*.png);;Image jpg(*.jpg);;Image bmp(*.bmp)");
    if(!savepath.isEmpty()){
        image.save(savepath);
    }
}

void Widget::keyPressEvent(QKeyEvent *ev)
{

    //前进
    if(ev->key() == Qt::Key_W ||ev->key() == Qt::Key_Up)
    {
        ui->label_32->setText("前进");

        QString str1= "w";
        QByteArray ba1 = str1.toLatin1();
        serialport->write(ba1);
        //qDebug()<< ba1;
        return;
    }
    //后退
    if(ev->key() == Qt::Key_S || ev->key() == Qt::Key_Down)
    {
        ui->label_32->setText("后退");
        QString str2= "s";
        QByteArray ba2 = str2.toLatin1();
        serialport->write(ba2);
        //qDebug()<< ba2;
        return;
    }
    //向左
    if(ev->key() == Qt::Key_A || ev->key() == Qt::Key_Left)
    {
        ui->label_32->setText("向左");
        QString str3= "a";
        QByteArray ba3 = str3.toLatin1();
        serialport->write(ba3);
        //qDebug()<< ba3;
        return;
    }
    //向右
    if(ev->key() == Qt::Key_D || ev->key() == Qt::Key_Right)
    {
        ui->label_32->setText("向右");
        QString str4= "d";
        QByteArray ba4 = str4.toLatin1();
        serialport->write(ba4);
        //qDebug()<< ba4;
        return;
    }
    //开关灯
    if(ev->key() == Qt::Key_R)
    {

        if(!isfalse){
        m_alarm = true;
        QString str5= "R";

        update();


        QByteArray ba5 = str5.toLatin1();
        serialport->write(ba5);
        qDebug()<< ba5;
        isfalse = true;
        }else if(isfalse){
        m_alarm = false;
        QString str6= "C";
        update();
        QByteArray ba6 = str6.toLatin1();
        serialport->write(ba6);
        qDebug()<< ba6;
        isfalse = false;
        }
    }

    //推杆伸
    if(ev->key() == Qt::Key_H){
        QString strf= "f";
        QByteArray baf = strf.toLatin1();
        serialport->write(baf);
        qDebug()<< baf;
    }
    //推杆缩
    if(ev->key() == Qt::Key_J){
        QString strh= "t";
        QByteArray bah = strh.toLatin1();
        serialport->write(bah);
        qDebug()<< bah;
    }
    //机械手张
    if(ev->key() == Qt::Key_K){
        QString strz= "z";
        QByteArray baz = strz.toLatin1();
        serialport->write(baz);
        qDebug()<< baz;
    }
    //机械手合
    if(ev->key() == Qt::Key_L){
        QString strh= "h";
        QByteArray bah = strh.toLatin1();
        serialport->write(bah);
        qDebug()<< bah;
    }
    //前倾
    if(ev->key() == Qt::Key_V){
        QString strh= "q";
        QByteArray bah = strh.toLatin1();
        serialport->write(bah);
        qDebug()<< bah;
    }
    //后倾
    if(ev->key() == Qt::Key_B){
        QString strh= "e";
        QByteArray bah = strh.toLatin1();
        serialport->write(bah);
        qDebug()<< bah;

    }
    //左倾
    if(ev->key() == Qt::Key_N){
        QString strh= "n";
        QByteArray bah = strh.toLatin1();
        serialport->write(bah);
        qDebug()<< bah;

    }
    //右倾
    if(ev->key() == Qt::Key_M){
        QString strh= "m";
        QByteArray bah = strh.toLatin1();
        serialport->write(bah);
        qDebug()<< bah;

    }
}
void Widget::keyReleaseEvent(QKeyEvent *ev){
    if(ev->key() == Qt::Key_W){
        ui->label_32->setText("");
    }
    if(ev->key() == Qt::Key_S){
        ui->label_32->setText("");
    }
    if(ev->key() == Qt::Key_A){
        ui->label_32->setText("");
    }
    if(ev->key() == Qt::Key_D){
        ui->label_32->setText("");
    }
    if(ev->key() == Qt::Key_V){
        ui->label_32->setText("");
    }
    if(ev->key() == Qt::Key_B){
        ui->label_32->setText("");
    }
    if(ev->key() == Qt::Key_N){
        ui->label_32->setText("");
    }
    if(ev->key() == Qt::Key_M){
        ui->label_32->setText("");
    }


}

void Widget::paintEvent(QPaintEvent *){
        QPainter painter(this);
        //painter.drawPixmap(rect(),QPixmap(":/back/honeycomb.png"));
        painter.setRenderHint(QPainter::Antialiasing); 	/* 使用反锯齿(如果可用) */
        painter.translate(950, 720);	/* 坐标变换为窗体中心 */
        int side = qMin(50, 50);
        painter.scale(side / 200.0, side / 200.0);		/* 比例缩放 */
        painter.setPen(Qt::NoPen);

        int radius = 100;

        /* 外边框 */
        QLinearGradient lg1(0, -radius, 0, radius);
        lg1.setColorAt(0, QColor(255, 255, 255));
        lg1.setColorAt(1, QColor(166, 166, 166));
        painter.setBrush(lg1);
        painter.drawEllipse(-radius, -radius, radius << 1, radius << 1);

        /* 内边框 */
        radius -= 13;
        QLinearGradient lg2(0, -radius, 0, radius);
        lg2.setColorAt(0, QColor(166, 166, 166));
        lg2.setColorAt(1, QColor(255, 255, 255));
        painter.setBrush(lg2);
        painter.drawEllipse(-radius, -radius, radius << 1, radius << 1);

        /* 内部指示颜色 */
        radius -= 4;
        QRadialGradient rg(0, 0, radius);
        if (m_alarm == false)
        {
            rg.setColorAt(0, QColor(245, 0, 0));
            rg.setColorAt(0.6, QColor(210, 0, 0));
            rg.setColorAt(1, QColor(166, 0, 0));

        }
        else if(m_alarm == true)
        {
            rg.setColorAt(0, QColor(0, 245, 0));
            rg.setColorAt(0.6, QColor(0, 210, 0));
            rg.setColorAt(1, QColor(0, 166, 0));

        }
        painter.setBrush(rg);
        painter.drawEllipse(-radius, -radius, radius << 1, radius << 1);


}

