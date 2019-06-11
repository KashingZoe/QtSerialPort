/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_dial.h"
#include "qwt_thermo.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *clear_button2;
    QPushButton *receive_modl;
    QTextEdit *Receive_text_window;
    QLabel *label_7;
    QTextEdit *send_text_window;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *send_button;
    QPushButton *clear_button_1;
    QPushButton *send_modl;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *bit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *jiaoyan;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *baud;
    QPushButton *open_port;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *com;
    QPushButton *close_port;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *stopbit;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QwtThermo *Thermo_5;
    QwtThermo *Thermo_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_27;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QwtThermo *Thermo;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_8;
    QWidget *widget_3;
    QLabel *label_26;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLCDNumber *lcdNumber_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLCDNumber *lcdNumber_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLCDNumber *lcdNumber_4;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_13;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_18;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLCDNumber *lcdNumber_5;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_16;
    QLCDNumber *lcdNumber_6;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_17;
    QLCDNumber *lcdNumber_7;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_18;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_22;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_19;
    QLCDNumber *lcdNumber_8;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_20;
    QLCDNumber *lcdNumber_9;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_21;
    QLCDNumber *lcdNumber_10;
    QWidget *widget_24;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_10;
    QwtDial *Dial;
    QWidget *widget_19;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *capture;
    QPushButton *exit;
    QWidget *widget_20;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_28;
    QwtThermo *Thermo_6;
    QWidget *widget_22;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_29;
    QwtThermo *Thermo_7;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_25;
    QLCDNumber *lcdNumber;
    QLabel *label_24;
    QLabel *label_23;
    QLabel *label_30;
    QWidget *widget_26;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_31;
    QLabel *label_32;
    QWidget *widget_25;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_33;
    QWidget *widget_27;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1043, 842);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 30, 501, 321));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        clear_button2 = new QPushButton(widget);
        clear_button2->setObjectName(QStringLiteral("clear_button2"));

        horizontalLayout_7->addWidget(clear_button2);

        receive_modl = new QPushButton(widget);
        receive_modl->setObjectName(QStringLiteral("receive_modl"));

        horizontalLayout_7->addWidget(receive_modl);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 2, 1, 2);

        Receive_text_window = new QTextEdit(widget);
        Receive_text_window->setObjectName(QStringLiteral("Receive_text_window"));
        Receive_text_window->setReadOnly(false);

        gridLayout_3->addWidget(Receive_text_window, 1, 1, 1, 3);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 3, 1, 1, 1);

        send_text_window = new QTextEdit(widget);
        send_text_window->setObjectName(QStringLiteral("send_text_window"));

        gridLayout_3->addWidget(send_text_window, 4, 1, 2, 3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        send_button = new QPushButton(widget);
        send_button->setObjectName(QStringLiteral("send_button"));

        horizontalLayout_6->addWidget(send_button);

        clear_button_1 = new QPushButton(widget);
        clear_button_1->setObjectName(QStringLiteral("clear_button_1"));

        horizontalLayout_6->addWidget(clear_button_1);

        send_modl = new QPushButton(widget);
        send_modl->setObjectName(QStringLiteral("send_modl"));

        horizontalLayout_6->addWidget(send_modl);


        gridLayout_3->addLayout(horizontalLayout_6, 6, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        bit = new QComboBox(widget);
        bit->addItem(QString());
        bit->addItem(QString());
        bit->addItem(QString());
        bit->addItem(QString());
        bit->setObjectName(QStringLiteral("bit"));

        horizontalLayout_3->addWidget(bit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        jiaoyan = new QComboBox(widget);
        jiaoyan->addItem(QString());
        jiaoyan->setObjectName(QStringLiteral("jiaoyan"));

        horizontalLayout_4->addWidget(jiaoyan);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        baud = new QComboBox(widget);
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->addItem(QString());
        baud->setObjectName(QStringLiteral("baud"));

        horizontalLayout_2->addWidget(baud);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        open_port = new QPushButton(widget);
        open_port->setObjectName(QStringLiteral("open_port"));
        open_port->setStyleSheet(QStringLiteral("background-color: rgb(85, 170, 255);"));

        gridLayout->addWidget(open_port, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        com = new QComboBox(widget);
        com->setObjectName(QStringLiteral("com"));

        horizontalLayout->addWidget(com);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        close_port = new QPushButton(widget);
        close_port->setObjectName(QStringLiteral("close_port"));

        gridLayout->addWidget(close_port, 6, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        stopbit = new QComboBox(widget);
        stopbit->addItem(QString());
        stopbit->setObjectName(QStringLiteral("stopbit"));

        horizontalLayout_5->addWidget(stopbit);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 7, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(500, 30, 221, 321));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        Thermo_5 = new QwtThermo(widget_2);
        Thermo_5->setObjectName(QStringLiteral("Thermo_5"));

        gridLayout_2->addWidget(Thermo_5, 1, 4, 2, 1);

        Thermo_2 = new QwtThermo(widget_2);
        Thermo_2->setObjectName(QStringLiteral("Thermo_2"));

        gridLayout_2->addWidget(Thermo_2, 1, 2, 2, 1);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        label_27 = new QLabel(widget_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(12);
        label_27->setFont(font);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_27, 0, 4, 1, 1);

        label_9 = new QLabel(widget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        Thermo = new QwtThermo(widget_2);
        Thermo->setObjectName(QStringLiteral("Thermo"));
        Thermo->setAlarmEnabled(false);

        gridLayout_2->addWidget(Thermo, 1, 0, 2, 1);

        horizontalSpacer_6 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 3, 1, 1);

        label_8 = new QLabel(widget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        widget_3 = new QWidget(Widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(0, 350, 661, 281));
        label_26 = new QLabel(widget_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(9, 9, 80, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\232\266\344\271\246"));
        font1.setPointSize(15);
        label_26->setFont(font1);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(74, 51, 115, 198));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget_8 = new QWidget(widget_4);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        horizontalLayout_12 = new QHBoxLayout(widget_8);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_11 = new QLabel(widget_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font2.setPointSize(15);
        label_11->setFont(font2);
        label_11->setTextFormat(Qt::AutoText);
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_11);


        verticalLayout_3->addWidget(widget_8);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_11 = new QHBoxLayout(widget_5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(widget_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font3.setBold(true);
        font3.setWeight(75);
        font3.setStyleStrategy(QFont::PreferAntialias);
        label_12->setFont(font3);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_12);

        lcdNumber_2 = new QLCDNumber(widget_5);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        horizontalLayout_11->addWidget(lcdNumber_2);


        verticalLayout_3->addWidget(widget_5);

        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout_13 = new QHBoxLayout(widget_6);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_13 = new QLabel(widget_6);
        label_13->setObjectName(QStringLiteral("label_13"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font4.setBold(true);
        font4.setWeight(75);
        label_13->setFont(font4);
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(label_13);

        lcdNumber_3 = new QLCDNumber(widget_6);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));

        horizontalLayout_13->addWidget(lcdNumber_3);


        verticalLayout_3->addWidget(widget_6);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_14 = new QHBoxLayout(widget_7);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_14 = new QLabel(widget_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font4);
        label_14->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(label_14);

        lcdNumber_4 = new QLCDNumber(widget_7);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));

        horizontalLayout_14->addWidget(lcdNumber_4);


        verticalLayout_3->addWidget(widget_7);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(204, 66, 115, 198));
        verticalLayout_4 = new QVBoxLayout(widget_9);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_13 = new QWidget(widget_9);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        horizontalLayout_16 = new QHBoxLayout(widget_13);
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_18 = new QLabel(widget_13);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font2);
        label_18->setTextFormat(Qt::AutoText);
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(label_18);


        verticalLayout_4->addWidget(widget_13);

        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        horizontalLayout_15 = new QHBoxLayout(widget_10);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_15 = new QLabel(widget_10);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font3);
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_15->addWidget(label_15);

        lcdNumber_5 = new QLCDNumber(widget_10);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));

        horizontalLayout_15->addWidget(lcdNumber_5);


        verticalLayout_4->addWidget(widget_10);

        widget_11 = new QWidget(widget_9);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        horizontalLayout_17 = new QHBoxLayout(widget_11);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_16 = new QLabel(widget_11);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font4);
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(label_16);

        lcdNumber_6 = new QLCDNumber(widget_11);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));

        horizontalLayout_17->addWidget(lcdNumber_6);


        verticalLayout_4->addWidget(widget_11);

        widget_12 = new QWidget(widget_9);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        horizontalLayout_18 = new QHBoxLayout(widget_12);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_17 = new QLabel(widget_12);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font4);
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_17);

        lcdNumber_7 = new QLCDNumber(widget_12);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));

        horizontalLayout_18->addWidget(lcdNumber_7);


        verticalLayout_4->addWidget(widget_12);

        widget_14 = new QWidget(widget_3);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        widget_14->setGeometry(QRect(537, 66, 115, 198));
        verticalLayout_5 = new QVBoxLayout(widget_14);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widget_18 = new QWidget(widget_14);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        horizontalLayout_19 = new QHBoxLayout(widget_18);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_22 = new QLabel(widget_18);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font2);
        label_22->setTextFormat(Qt::AutoText);
        label_22->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_22);


        verticalLayout_5->addWidget(widget_18);

        widget_15 = new QWidget(widget_14);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_20 = new QHBoxLayout(widget_15);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_19 = new QLabel(widget_15);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font3);
        label_19->setLayoutDirection(Qt::LeftToRight);
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_19);

        lcdNumber_8 = new QLCDNumber(widget_15);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));

        horizontalLayout_20->addWidget(lcdNumber_8);


        verticalLayout_5->addWidget(widget_15);

        widget_16 = new QWidget(widget_14);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        horizontalLayout_21 = new QHBoxLayout(widget_16);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_20 = new QLabel(widget_16);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setFont(font4);
        label_20->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_20->setAlignment(Qt::AlignCenter);

        horizontalLayout_21->addWidget(label_20);

        lcdNumber_9 = new QLCDNumber(widget_16);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));

        horizontalLayout_21->addWidget(lcdNumber_9);


        verticalLayout_5->addWidget(widget_16);

        widget_17 = new QWidget(widget_14);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout_22 = new QHBoxLayout(widget_17);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_21 = new QLabel(widget_17);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font4);
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_21->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(label_21);

        lcdNumber_10 = new QLCDNumber(widget_17);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));

        horizontalLayout_22->addWidget(lcdNumber_10);


        verticalLayout_5->addWidget(widget_17);

        widget_24 = new QWidget(widget_3);
        widget_24->setObjectName(QStringLiteral("widget_24"));
        widget_24->setGeometry(QRect(320, 20, 224, 250));
        verticalLayout_8 = new QVBoxLayout(widget_24);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_10 = new QLabel(widget_24);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\351\232\266\344\271\246"));
        font5.setPointSize(15);
        label_10->setFont(font5);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setTextFormat(Qt::AutoText);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_10);

        Dial = new QwtDial(widget_24);
        Dial->setObjectName(QStringLiteral("Dial"));
        Dial->setAutoFillBackground(false);
        Dial->setSingleSteps(1u);
        Dial->setStepAlignment(true);
        Dial->setTracking(true);
        Dial->setWrapping(false);
        Dial->setInvertedControls(false);
        Dial->setLineWidth(10);
        Dial->setMinScaleArc(50);
        Dial->setMaxScaleArc(310);

        verticalLayout_8->addWidget(Dial);

        widget_19 = new QWidget(Widget);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        widget_19->setGeometry(QRect(720, 30, 301, 321));
        verticalLayout_6 = new QVBoxLayout(widget_19);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout->addLayout(verticalLayout_2);

        capture = new QPushButton(widget_19);
        capture->setObjectName(QStringLiteral("capture"));

        verticalLayout->addWidget(capture);

        exit = new QPushButton(widget_19);
        exit->setObjectName(QStringLiteral("exit"));

        verticalLayout->addWidget(exit);


        verticalLayout_6->addLayout(verticalLayout);

        widget_20 = new QWidget(Widget);
        widget_20->setObjectName(QStringLiteral("widget_20"));
        widget_20->setGeometry(QRect(680, 370, 351, 231));
        verticalLayout_7 = new QVBoxLayout(widget_20);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        widget_21 = new QWidget(widget_20);
        widget_21->setObjectName(QStringLiteral("widget_21"));
        horizontalLayout_8 = new QHBoxLayout(widget_21);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_28 = new QLabel(widget_21);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font2);

        horizontalLayout_8->addWidget(label_28);

        Thermo_6 = new QwtThermo(widget_21);
        Thermo_6->setObjectName(QStringLiteral("Thermo_6"));
        Thermo_6->setUpperBound(14);
        Thermo_6->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(Thermo_6);


        verticalLayout_7->addWidget(widget_21);

        widget_22 = new QWidget(widget_20);
        widget_22->setObjectName(QStringLiteral("widget_22"));
        horizontalLayout_9 = new QHBoxLayout(widget_22);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_29 = new QLabel(widget_22);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setFont(font5);

        horizontalLayout_9->addWidget(label_29);

        Thermo_7 = new QwtThermo(widget_22);
        Thermo_7->setObjectName(QStringLiteral("Thermo_7"));
        Thermo_7->setUpperBound(14);
        Thermo_7->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(Thermo_7);


        verticalLayout_7->addWidget(widget_22);

        widget_23 = new QWidget(widget_20);
        widget_23->setObjectName(QStringLiteral("widget_23"));
        horizontalLayout_10 = new QHBoxLayout(widget_23);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_25 = new QLabel(widget_23);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font2);

        horizontalLayout_10->addWidget(label_25);

        lcdNumber = new QLCDNumber(widget_23);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout_10->addWidget(lcdNumber);


        verticalLayout_7->addWidget(widget_23);

        label_24 = new QLabel(Widget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 10, 186, 22));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font6.setPointSize(16);
        label_24->setFont(font6);
        label_23 = new QLabel(Widget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(740, 10, 104, 31));
        label_23->setMaximumSize(QSize(104, 16777215));
        label_23->setBaseSize(QSize(20, 0));
        label_23->setFont(font5);
        label_23->setFrameShadow(QFrame::Sunken);
        label_23->setLineWidth(1);
        label_23->setTextFormat(Qt::PlainText);
        label_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_30 = new QLabel(Widget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(260, 800, 561, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font7.setPointSize(24);
        label_30->setFont(font7);
        widget_26 = new QWidget(Widget);
        widget_26->setObjectName(QStringLiteral("widget_26"));
        widget_26->setGeometry(QRect(20, 670, 171, 91));
        horizontalLayout_23 = new QHBoxLayout(widget_26);
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_31 = new QLabel(widget_26);
        label_31->setObjectName(QStringLiteral("label_31"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font8.setBold(true);
        font8.setWeight(75);
        label_31->setFont(font8);

        horizontalLayout_23->addWidget(label_31);

        label_32 = new QLabel(widget_26);
        label_32->setObjectName(QStringLiteral("label_32"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font9.setPointSize(15);
        font9.setBold(true);
        font9.setWeight(75);
        label_32->setFont(font9);
        label_32->setAlignment(Qt::AlignCenter);

        horizontalLayout_23->addWidget(label_32);

        widget_25 = new QWidget(Widget);
        widget_25->setObjectName(QStringLiteral("widget_25"));
        widget_25->setGeometry(QRect(700, 680, 151, 81));
        horizontalLayout_24 = new QHBoxLayout(widget_25);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_33 = new QLabel(widget_25);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_24->addWidget(label_33);

        widget_27 = new QWidget(widget_25);
        widget_27->setObjectName(QStringLiteral("widget_27"));

        horizontalLayout_24->addWidget(widget_27);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        clear_button2->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        receive_modl->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
        label_7->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\347\252\227\345\217\243", nullptr));
        send_button->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        clear_button_1->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        send_modl->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\346\250\241\345\274\217", nullptr));
        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        bit->setItemText(0, QApplication::translate("Widget", "8", nullptr));
        bit->setItemText(1, QApplication::translate("Widget", "5", nullptr));
        bit->setItemText(2, QApplication::translate("Widget", "6", nullptr));
        bit->setItemText(3, QApplication::translate("Widget", "7", nullptr));

        label_4->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        jiaoyan->setItemText(0, QApplication::translate("Widget", "0", nullptr));

        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        baud->setItemText(0, QApplication::translate("Widget", "9600", nullptr));
        baud->setItemText(1, QApplication::translate("Widget", "115200", nullptr));
        baud->setItemText(2, QApplication::translate("Widget", "1200", nullptr));
        baud->setItemText(3, QApplication::translate("Widget", "2400", nullptr));
        baud->setItemText(4, QApplication::translate("Widget", "4800", nullptr));
        baud->setItemText(5, QApplication::translate("Widget", "14400", nullptr));
        baud->setItemText(6, QApplication::translate("Widget", "19200", nullptr));
        baud->setItemText(7, QApplication::translate("Widget", "28800", nullptr));

        open_port->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        close_port->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        label_5->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        stopbit->setItemText(0, QApplication::translate("Widget", "1", nullptr));

        label_6->setText(QApplication::translate("Widget", "\346\216\245\346\224\266\347\252\227\345\217\243", nullptr));
        label_27->setText(QApplication::translate("Widget", "\350\210\261\345\244\226\346\270\251\345\272\246", nullptr));
        label_9->setText(QApplication::translate("Widget", "\350\210\261\345\206\205\346\270\251\345\272\246", nullptr));
        label_8->setText(QApplication::translate("Widget", "\350\210\261\345\206\205\346\271\277\345\272\246", nullptr));
        label_26->setText(QApplication::translate("Widget", "\346\225\260\345\255\227\346\230\276\347\244\272", nullptr));
        label_11->setText(QApplication::translate("Widget", "\345\212\240\351\200\237\345\272\246", nullptr));
        label_12->setText(QApplication::translate("Widget", "X", nullptr));
        label_13->setText(QApplication::translate("Widget", "Y", nullptr));
        label_14->setText(QApplication::translate("Widget", "Z", nullptr));
        label_18->setText(QApplication::translate("Widget", "\350\247\222\351\200\237\345\272\246", nullptr));
        label_15->setText(QApplication::translate("Widget", "X", nullptr));
        label_16->setText(QApplication::translate("Widget", "Y", nullptr));
        label_17->setText(QApplication::translate("Widget", "Z", nullptr));
        label_22->setText(QApplication::translate("Widget", "\350\247\222\345\272\246", nullptr));
        label_19->setText(QApplication::translate("Widget", "X", nullptr));
        label_20->setText(QApplication::translate("Widget", "Y", nullptr));
        label_21->setText(QApplication::translate("Widget", "Z", nullptr));
        label_10->setText(QApplication::translate("Widget", " \350\210\252\351\200\237", nullptr));
        capture->setText(QApplication::translate("Widget", "Capture", nullptr));
        exit->setText(QApplication::translate("Widget", "Eixt", nullptr));
        label_28->setText(QApplication::translate("Widget", "PH\345\200\274", nullptr));
        label_29->setText(QApplication::translate("Widget", "\345\216\213\345\212\233", nullptr));
        label_25->setText(QApplication::translate("Widget", "\346\260\247\345\220\253\351\207\217", nullptr));
        label_24->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\272\244\344\272\222\345\214\272", nullptr));
        label_23->setText(QApplication::translate("Widget", "\346\260\264\344\270\213\347\224\273\351\235\242", nullptr));
        label_30->setText(QApplication::translate("Widget", "\346\265\267\346\264\213\347\211\247\345\234\272\346\234\272\345\231\250\344\272\272Smart-ROV\344\270\223\347\224\250\344\270\212\344\275\215\346\234\272", nullptr));
        label_31->setText(QApplication::translate("Widget", "\350\277\220\345\212\250\347\212\266\346\200\201\357\274\232", nullptr));
        label_32->setText(QString());
        label_33->setText(QApplication::translate("Widget", "\345\274\200\345\205\263\346\214\207\347\244\272\347\201\257\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
