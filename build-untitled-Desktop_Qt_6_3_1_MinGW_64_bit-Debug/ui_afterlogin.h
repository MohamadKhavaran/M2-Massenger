/********************************************************************************
** Form generated from reading UI file 'afterlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFTERLOGIN_H
#define UI_AFTERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_afterLogin
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QGroupBox *group_groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QGroupBox *channel_groupBox;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QGroupBox *pv_groupBox;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QLabel *group_label;
    QLabel *channel_label;
    QLabel *pv_label;

    void setupUi(QWidget *afterLogin)
    {
        if (afterLogin->objectName().isEmpty())
            afterLogin->setObjectName(QString::fromUtf8("afterLogin"));
        afterLogin->resize(1078, 729);
        afterLogin->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(afterLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 1081, 731));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 631, 70));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(980, 680, 81, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_4{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_4:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_4:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(980, 590, 81, 81));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/icons/logout3.png);"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1000, 10, 61, 61));
        QFont font2;
        font2.setPointSize(12);
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/icons/close3.png);\n"
"\n"
"\n"
"\n"
""));
        group_groupBox = new QGroupBox(widget);
        group_groupBox->setObjectName(QString::fromUtf8("group_groupBox"));
        group_groupBox->setGeometry(QRect(30, 190, 290, 520));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        group_groupBox->setFont(font3);
        group_groupBox->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0);\n"
""));
        pushButton = new QPushButton(group_groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 80, 270, 40));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_2 = new QPushButton(group_groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 170, 270, 40));
        pushButton_2->setFont(font4);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_3 = new QPushButton(group_groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 440, 270, 40));
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_3:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_6 = new QPushButton(group_groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 260, 270, 40));
        pushButton_6->setFont(font4);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_6{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_6:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_6:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_7 = new QPushButton(group_groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 350, 270, 40));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        pushButton_7->setFont(font5);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_7{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_7:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_7:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        channel_groupBox = new QGroupBox(widget);
        channel_groupBox->setObjectName(QString::fromUtf8("channel_groupBox"));
        channel_groupBox->setGeometry(QRect(350, 190, 290, 520));
        channel_groupBox->setFont(font3);
        channel_groupBox->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0);\n"
""));
        pushButton_8 = new QPushButton(channel_groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 80, 270, 40));
        pushButton_8->setFont(font4);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_8{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_8:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_8:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_9 = new QPushButton(channel_groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 170, 270, 40));
        pushButton_9->setFont(font4);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_9{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_9:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_9:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_10 = new QPushButton(channel_groupBox);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 260, 270, 40));
        pushButton_10->setFont(font4);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_10{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_10:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_10:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_11 = new QPushButton(channel_groupBox);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(10, 350, 270, 40));
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(true);
        pushButton_11->setFont(font6);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_11{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_11:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_11:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_12 = new QPushButton(channel_groupBox);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(10, 440, 270, 40));
        pushButton_12->setFont(font4);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_12{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_12:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_12:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pv_groupBox = new QGroupBox(widget);
        pv_groupBox->setObjectName(QString::fromUtf8("pv_groupBox"));
        pv_groupBox->setGeometry(QRect(650, 190, 290, 520));
        pv_groupBox->setFont(font3);
        pv_groupBox->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0);\n"
""));
        pushButton_13 = new QPushButton(pv_groupBox);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 80, 270, 40));
        pushButton_13->setFont(font5);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_13{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_13:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_13:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_14 = new QPushButton(pv_groupBox);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(10, 170, 270, 40));
        pushButton_14->setFont(font4);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_14{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_14:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_14:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_15 = new QPushButton(pv_groupBox);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(10, 260, 270, 40));
        pushButton_15->setFont(font4);
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_15{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_15:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_15:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        group_label = new QLabel(widget);
        group_label->setObjectName(QString::fromUtf8("group_label"));
        group_label->setGeometry(QRect(160, 100, 151, 101));
        group_label->setStyleSheet(QString::fromUtf8("image: url(:/icons/group2.png);"));
        channel_label = new QLabel(widget);
        channel_label->setObjectName(QString::fromUtf8("channel_label"));
        channel_label->setGeometry(QRect(510, 100, 121, 111));
        channel_label->setStyleSheet(QString::fromUtf8("image: url(:/icons/channel icon.png);"));
        pv_label = new QLabel(widget);
        pv_label->setObjectName(QString::fromUtf8("pv_label"));
        pv_label->setGeometry(QRect(820, 100, 131, 101));
        pv_label->setStyleSheet(QString::fromUtf8("image: url(:/icons/pv.png);"));

        retranslateUi(afterLogin);

        QMetaObject::connectSlotsByName(afterLogin);
    } // setupUi

    void retranslateUi(QWidget *afterLogin)
    {
        afterLogin->setWindowTitle(QCoreApplication::translate("afterLogin", "Form", nullptr));
        label->setText(QCoreApplication::translate("afterLogin", "Welcome to M2 messenger", nullptr));
        pushButton_4->setText(QCoreApplication::translate("afterLogin", "Log out", nullptr));
        label_5->setText(QString());
        pushButton_5->setText(QString());
        group_groupBox->setTitle(QCoreApplication::translate("afterLogin", "Groups", nullptr));
        pushButton->setText(QCoreApplication::translate("afterLogin", "Create a new group", nullptr));
        pushButton_2->setText(QCoreApplication::translate("afterLogin", "Join groups", nullptr));
        pushButton_3->setText(QCoreApplication::translate("afterLogin", "Get groups chats", nullptr));
        pushButton_6->setText(QCoreApplication::translate("afterLogin", "List of groups", nullptr));
        pushButton_7->setText(QCoreApplication::translate("afterLogin", "Send messege in groups", nullptr));
        channel_groupBox->setTitle(QCoreApplication::translate("afterLogin", "Channels", nullptr));
        pushButton_8->setText(QCoreApplication::translate("afterLogin", "Create a new channel", nullptr));
        pushButton_9->setText(QCoreApplication::translate("afterLogin", "Join channels", nullptr));
        pushButton_10->setText(QCoreApplication::translate("afterLogin", "List of channels", nullptr));
        pushButton_11->setText(QCoreApplication::translate("afterLogin", "Send messege in channels", nullptr));
        pushButton_12->setText(QCoreApplication::translate("afterLogin", "Get channels chats", nullptr));
        pv_groupBox->setTitle(QCoreApplication::translate("afterLogin", "Private chats", nullptr));
        pushButton_13->setText(QCoreApplication::translate("afterLogin", "Send message to users", nullptr));
        pushButton_14->setText(QCoreApplication::translate("afterLogin", "List of users", nullptr));
        pushButton_15->setText(QCoreApplication::translate("afterLogin", "Get users chats", nullptr));
        group_label->setText(QString());
        channel_label->setText(QString());
        pv_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class afterLogin: public Ui_afterLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFTERLOGIN_H
