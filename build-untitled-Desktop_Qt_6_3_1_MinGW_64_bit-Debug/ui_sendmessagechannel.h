/********************************************************************************
** Form generated from reading UI file 'sendmessagechannel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGECHANNEL_H
#define UI_SENDMESSAGECHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendmessagechannel
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *sendmessagechannel)
    {
        if (sendmessagechannel->objectName().isEmpty())
            sendmessagechannel->setObjectName(QString::fromUtf8("sendmessagechannel"));
        sendmessagechannel->resize(450, 550);
        sendmessagechannel->setStyleSheet(QString::fromUtf8("background-color:	rgb(0, 0, 0);\n"
"color:white;"));
        layoutWidget = new QWidget(sendmessagechannel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 330, 195, 38));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"color: white;\n"
"border-radius: 5px;\n"
"Background: #933;\n"
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

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"color: white;\n"
"border-radius: 5px;\n"
"Background: #393;\n"
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

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(sendmessagechannel);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 200, 191, 41));
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
        label = new QLabel(sendmessagechannel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 100, 361, 51));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        font1.setItalic(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        label_2 = new QLabel(sendmessagechannel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 291, 61));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setItalic(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));

        retranslateUi(sendmessagechannel);

        QMetaObject::connectSlotsByName(sendmessagechannel);
    } // setupUi

    void retranslateUi(QWidget *sendmessagechannel)
    {
        sendmessagechannel->setWindowTitle(QCoreApplication::translate("sendmessagechannel", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sendmessagechannel", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("sendmessagechannel", "Confrim", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("sendmessagechannel", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("sendmessagechannel", "Enter the desired channel name :", nullptr));
        label_2->setText(QCoreApplication::translate("sendmessagechannel", "M2 messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessagechannel: public Ui_sendmessagechannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGECHANNEL_H
