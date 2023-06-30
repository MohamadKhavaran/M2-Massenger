/********************************************************************************
** Form generated from reading UI file 'sendmessageuser.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGEUSER_H
#define UI_SENDMESSAGEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendmessageuser
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *sendmessageuser)
    {
        if (sendmessageuser->objectName().isEmpty())
            sendmessageuser->setObjectName(QString::fromUtf8("sendmessageuser"));
        sendmessageuser->resize(450, 550);
        sendmessageuser->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        pushButton = new QPushButton(sendmessageuser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(122, 410, 101, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"color: white;\n"
"border-radius: 5px;\n"
"Background: #933;\n"
"color: #fefefe;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"	background-color: rgb(42, 46, 52);\n"
"border-style: solid;\n"
" border-width: 1px;\n"
"	color: rgb(241, 182, 88);\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed {\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"	background-color: rgb(25, 69, 105);\n"
"	color: rgb(85, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(sendmessageuser);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 410, 101, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"color: white;\n"
"border-radius: 5px;\n"
"Background: #393;\n"
"color: #fefefe;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover {\n"
"	background-color: rgb(42, 46, 52);\n"
"border-style: solid;\n"
" border-width: 1px;\n"
"	color: rgb(241, 182, 88);\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed {\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"	background-color: rgb(25, 69, 105);\n"
"	color: rgb(85, 255, 255);\n"
"}"));
        label = new QLabel(sendmessageuser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 160, 421, 34));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        lineEdit = new QLineEdit(sendmessageuser);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 260, 291, 51));
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit#lineEdit {\n"
"\n"
"background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;\n"
"\n"
"}\n"
"\n"
"QLineEdit#lineEdit:hover {\n"
"\n"
"	background-color: rgb(42, 46, 52);\n"
"	border-style: solid;\n"
"	border-color: rgb(245, 179, 1);\n"
"	color: rgb(241, 182, 88);\n"
"\n"
"}"));
        label_2 = new QLabel(sendmessageuser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 291, 61));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));

        retranslateUi(sendmessageuser);

        QMetaObject::connectSlotsByName(sendmessageuser);
    } // setupUi

    void retranslateUi(QWidget *sendmessageuser)
    {
        sendmessageuser->setWindowTitle(QCoreApplication::translate("sendmessageuser", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("sendmessageuser", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sendmessageuser", "Confrim", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_2->setShortcut(QCoreApplication::translate("sendmessageuser", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("sendmessageuser", "Enter the username of the desired person : ", nullptr));
        label_2->setText(QCoreApplication::translate("sendmessageuser", "M2 messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessageuser: public Ui_sendmessageuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGEUSER_H
