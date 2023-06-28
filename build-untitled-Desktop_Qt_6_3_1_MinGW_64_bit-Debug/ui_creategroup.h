/********************************************************************************
** Form generated from reading UI file 'creategroup.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUP_H
#define UI_CREATEGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateGroup
{
public:
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *CreateGroup)
    {
        if (CreateGroup->objectName().isEmpty())
            CreateGroup->setObjectName(QString::fromUtf8("CreateGroup"));
        CreateGroup->resize(670, 400);
        CreateGroup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 255);\n"
"color:rgb(255, 255, 255);"));
        label_2 = new QLabel(CreateGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 200, 161, 34));
        QFont font;
        font.setPointSize(15);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        label = new QLabel(CreateGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 130, 161, 34));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        lineEdit_2 = new QLineEdit(CreateGroup);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(430, 200, 154, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        lineEdit = new QLineEdit(CreateGroup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(430, 130, 154, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        pushButton = new QPushButton(CreateGroup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(480, 290, 116, 31));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color:rgba(254, 231, 21, 1);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color:rgb(0, 255, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}\n"
"\n"
"\n"
""));
        pushButton_2 = new QPushButton(CreateGroup);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(355, 290, 116, 31));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color:rgba(254, 231, 21, 1);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover{\n"
"	background-color:rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        label_3 = new QLabel(CreateGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 291, 61));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setItalic(true);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        label_4 = new QLabel(CreateGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 120, 121, 121));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/icons/group2.png);"));

        retranslateUi(CreateGroup);

        QMetaObject::connectSlotsByName(CreateGroup);
    } // setupUi

    void retranslateUi(QWidget *CreateGroup)
    {
        CreateGroup->setWindowTitle(QCoreApplication::translate("CreateGroup", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("CreateGroup", "Group title :", nullptr));
        label->setText(QCoreApplication::translate("CreateGroup", "Group name :", nullptr));
        pushButton->setText(QCoreApplication::translate("CreateGroup", "Confrim", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreateGroup", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("CreateGroup", "M2 messenger", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateGroup: public Ui_CreateGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUP_H
