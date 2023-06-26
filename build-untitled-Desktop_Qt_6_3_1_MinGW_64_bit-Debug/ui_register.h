/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QLabel *label_2;
    QLabel *LastName_label;
    QLabel *FirstName_label;
    QLabel *UserName_label;
    QLabel *Password_label;
    QLabel *ConfrimPassword_label;
    QLabel *PhoneNumber_label;
    QPushButton *Submit_pushButton;
    QPushButton *Back_pushButton;
    QLineEdit *FirstName_lineEdit;
    QLineEdit *LastName_lineEdit;
    QLineEdit *UserName_lineEdit;
    QLineEdit *Password_lineEdit;
    QLineEdit *ConfrimPassword_lineEdit;
    QLineEdit *PhoneNumber_lineEdit;
    QLabel *label;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(727, 610);
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 731, 611));
        widget->setStyleSheet(QString::fromUtf8("background-color:	rgb(0, 0, 0);\n"
""));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(272, 50, 261, 81));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,51);"));
        LastName_label = new QLabel(widget);
        LastName_label->setObjectName(QString::fromUtf8("LastName_label"));
        LastName_label->setGeometry(QRect(30, 240, 101, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sina")});
        font1.setPointSize(12);
        font1.setBold(true);
        LastName_label->setFont(font1);
        LastName_label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        FirstName_label = new QLabel(widget);
        FirstName_label->setObjectName(QString::fromUtf8("FirstName_label"));
        FirstName_label->setGeometry(QRect(30, 190, 101, 30));
        FirstName_label->setFont(font1);
        FirstName_label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        UserName_label = new QLabel(widget);
        UserName_label->setObjectName(QString::fromUtf8("UserName_label"));
        UserName_label->setGeometry(QRect(30, 290, 111, 30));
        UserName_label->setFont(font1);
        UserName_label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        Password_label = new QLabel(widget);
        Password_label->setObjectName(QString::fromUtf8("Password_label"));
        Password_label->setGeometry(QRect(30, 340, 101, 30));
        Password_label->setFont(font1);
        Password_label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        ConfrimPassword_label = new QLabel(widget);
        ConfrimPassword_label->setObjectName(QString::fromUtf8("ConfrimPassword_label"));
        ConfrimPassword_label->setGeometry(QRect(30, 390, 181, 30));
        ConfrimPassword_label->setFont(font1);
        ConfrimPassword_label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        PhoneNumber_label = new QLabel(widget);
        PhoneNumber_label->setObjectName(QString::fromUtf8("PhoneNumber_label"));
        PhoneNumber_label->setGeometry(QRect(30, 440, 161, 30));
        PhoneNumber_label->setFont(font1);
        PhoneNumber_label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        Submit_pushButton = new QPushButton(widget);
        Submit_pushButton->setObjectName(QString::fromUtf8("Submit_pushButton"));
        Submit_pushButton->setGeometry(QRect(360, 490, 181, 31));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        Submit_pushButton->setFont(font2);
        Submit_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Submit_pushButton{\n"
"	background-color:rgba(254, 231, 21, 1);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#Submit_pushButton:hover{\n"
"	background-color:rgb(0, 255, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton#Submit_pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}\n"
"\n"
"\n"
""));
        Back_pushButton = new QPushButton(widget);
        Back_pushButton->setObjectName(QString::fromUtf8("Back_pushButton"));
        Back_pushButton->setGeometry(QRect(150, 490, 171, 31));
        Back_pushButton->setFont(font2);
        Back_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Back_pushButton{\n"
"	background-color:rgba(254, 231, 21, 1);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#Back_pushButton:hover{\n"
"	background-color:rgb(255, 0, 0);\n"
"}\n"
"\n"
"QPushButton#Back_pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        FirstName_lineEdit = new QLineEdit(widget);
        FirstName_lineEdit->setObjectName(QString::fromUtf8("FirstName_lineEdit"));
        FirstName_lineEdit->setGeometry(QRect(220, 185, 381, 28));
        FirstName_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        LastName_lineEdit = new QLineEdit(widget);
        LastName_lineEdit->setObjectName(QString::fromUtf8("LastName_lineEdit"));
        LastName_lineEdit->setGeometry(QRect(220, 230, 381, 28));
        LastName_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        UserName_lineEdit = new QLineEdit(widget);
        UserName_lineEdit->setObjectName(QString::fromUtf8("UserName_lineEdit"));
        UserName_lineEdit->setGeometry(QRect(220, 280, 381, 28));
        UserName_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        Password_lineEdit = new QLineEdit(widget);
        Password_lineEdit->setObjectName(QString::fromUtf8("Password_lineEdit"));
        Password_lineEdit->setGeometry(QRect(220, 330, 381, 28));
        Password_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        Password_lineEdit->setEchoMode(QLineEdit::Password);
        ConfrimPassword_lineEdit = new QLineEdit(widget);
        ConfrimPassword_lineEdit->setObjectName(QString::fromUtf8("ConfrimPassword_lineEdit"));
        ConfrimPassword_lineEdit->setGeometry(QRect(220, 378, 381, 28));
        ConfrimPassword_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        ConfrimPassword_lineEdit->setEchoMode(QLineEdit::Password);
        PhoneNumber_lineEdit = new QLineEdit(widget);
        PhoneNumber_lineEdit->setObjectName(QString::fromUtf8("PhoneNumber_lineEdit"));
        PhoneNumber_lineEdit->setGeometry(QRect(220, 430, 381, 28));
        PhoneNumber_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 191, 161));
        label->setStyleSheet(QString::fromUtf8("image: url(:/icons/newregistrationicon.png);"));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "     Register", nullptr));
        LastName_label->setText(QCoreApplication::translate("Register", "Lastname: ", nullptr));
        FirstName_label->setText(QCoreApplication::translate("Register", "Firstname: ", nullptr));
        UserName_label->setText(QCoreApplication::translate("Register", "Username: ", nullptr));
        Password_label->setText(QCoreApplication::translate("Register", "Password: ", nullptr));
        ConfrimPassword_label->setText(QCoreApplication::translate("Register", "Confirm password: ", nullptr));
        PhoneNumber_label->setText(QCoreApplication::translate("Register", "Phone number: ", nullptr));
        Submit_pushButton->setText(QCoreApplication::translate("Register", "Submit", nullptr));
        Back_pushButton->setText(QCoreApplication::translate("Register", "Back", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
