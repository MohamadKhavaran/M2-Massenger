/********************************************************************************
** Form generated from reading UI file 'createchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECHANNEL_H
#define UI_CREATECHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateChannel
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *CreateChannel)
    {
        if (CreateChannel->objectName().isEmpty())
            CreateChannel->setObjectName(QString::fromUtf8("CreateChannel"));
        CreateChannel->resize(450, 550);
        CreateChannel->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 255);"));
        label = new QLabel(CreateChannel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 170, 174, 34));
        QFont font;
        font.setPointSize(15);
        font.setItalic(true);
        font.setUnderline(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        label_2 = new QLabel(CreateChannel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 250, 174, 34));
        QFont font1;
        font1.setPointSize(15);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        lineEdit_2 = new QLineEdit(CreateChannel);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 250, 211, 28));
        lineEdit_2->setFocusPolicy(Qt::StrongFocus);
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit#lineEdit_2 {\n"
"\n"
"background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;\n"
"\n"
"}\n"
"\n"
"QLineEdit#lineEdit_2:hover {\n"
"\n"
"	background-color: rgb(42, 46, 52);\n"
"	border-style: solid;\n"
"	border-color: rgb(245, 179, 1);\n"
"	color: rgb(241, 182, 88);\n"
"\n"
"}"));
        lineEdit = new QLineEdit(CreateChannel);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 170, 211, 28));
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
        pushButton = new QPushButton(CreateChannel);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 400, 116, 31));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(false);
        pushButton->setFont(font2);
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
        pushButton_2 = new QPushButton(CreateChannel);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 400, 116, 31));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        pushButton_2->setFont(font3);
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
        label_3 = new QLabel(CreateChannel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 291, 61));
        QFont font4;
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setItalic(true);
        label_3->setFont(font4);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        label_4 = new QLabel(CreateChannel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 10, 91, 91));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/icons/channel icon.png);"));

        retranslateUi(CreateChannel);

        QMetaObject::connectSlotsByName(CreateChannel);
    } // setupUi

    void retranslateUi(QWidget *CreateChannel)
    {
        CreateChannel->setWindowTitle(QCoreApplication::translate("CreateChannel", "Form", nullptr));
        label->setText(QCoreApplication::translate("CreateChannel", "Channel name :", nullptr));
        label_2->setText(QCoreApplication::translate("CreateChannel", "Channel title :", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateChannel", "Confrim", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateChannel", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("CreateChannel", "M2 messenger", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateChannel: public Ui_CreateChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECHANNEL_H
