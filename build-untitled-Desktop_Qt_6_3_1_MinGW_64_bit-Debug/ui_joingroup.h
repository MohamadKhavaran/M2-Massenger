/********************************************************************************
** Form generated from reading UI file 'joingroup.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINGROUP_H
#define UI_JOINGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoinGroup
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *JoinGroup)
    {
        if (JoinGroup->objectName().isEmpty())
            JoinGroup->setObjectName(QString::fromUtf8("JoinGroup"));
        JoinGroup->resize(670, 400);
        JoinGroup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 255);"));
        label = new QLabel(JoinGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 180, 161, 34));
        QFont font;
        font.setPointSize(15);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        lineEdit = new QLineEdit(JoinGroup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(420, 180, 221, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        pushButton = new QPushButton(JoinGroup);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 290, 131, 31));
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
        pushButton_2 = new QPushButton(JoinGroup);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 290, 131, 31));
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
        label_2 = new QLabel(JoinGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 291, 61));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setItalic(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        label_3 = new QLabel(JoinGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 130, 161, 131));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/icons/group2.png);"));

        retranslateUi(JoinGroup);

        QMetaObject::connectSlotsByName(JoinGroup);
    } // setupUi

    void retranslateUi(QWidget *JoinGroup)
    {
        JoinGroup->setWindowTitle(QCoreApplication::translate("JoinGroup", "Form", nullptr));
        label->setText(QCoreApplication::translate("JoinGroup", "Group name :", nullptr));
        pushButton->setText(QCoreApplication::translate("JoinGroup", "Confrim", nullptr));
        pushButton_2->setText(QCoreApplication::translate("JoinGroup", "Back", nullptr));
        label_2->setText(QCoreApplication::translate("JoinGroup", "M2 messenger", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JoinGroup: public Ui_JoinGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINGROUP_H
