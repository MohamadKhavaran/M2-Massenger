/********************************************************************************
** Form generated from reading UI file 'verification.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICATION_H
#define UI_VERIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_verification
{
public:
    QLineEdit *CodeSent_lineEdit;
    QLabel *Question_label;
    QLabel *PhoneNumber_label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *verification)
    {
        if (verification->objectName().isEmpty())
            verification->setObjectName(QString::fromUtf8("verification"));
        verification->resize(616, 312);
        verification->setStyleSheet(QString::fromUtf8("background-color:	rgb(0, 0, 0);\n"
"color:white;"));
        CodeSent_lineEdit = new QLineEdit(verification);
        CodeSent_lineEdit->setObjectName(QString::fromUtf8("CodeSent_lineEdit"));
        CodeSent_lineEdit->setGeometry(QRect(260, 150, 111, 28));
        QFont font;
        font.setPointSize(12);
        CodeSent_lineEdit->setFont(font);
        CodeSent_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        Question_label = new QLabel(verification);
        Question_label->setObjectName(QString::fromUtf8("Question_label"));
        Question_label->setGeometry(QRect(60, 40, 521, 30));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        Question_label->setFont(font1);
        Question_label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        PhoneNumber_label = new QLabel(verification);
        PhoneNumber_label->setObjectName(QString::fromUtf8("PhoneNumber_label"));
        PhoneNumber_label->setGeometry(QRect(240, 90, 161, 30));
        PhoneNumber_label->setFont(font1);
        PhoneNumber_label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,51);"));
        pushButton = new QPushButton(verification);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 230, 211, 29));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color:rgba(255, 0, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_2 = new QPushButton(verification);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 230, 211, 29));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover{\n"
"	background-color:rgba(0, 255, 0);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        label = new QLabel(verification);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 90, 111, 91));
        label->setStyleSheet(QString::fromUtf8("image: url(:/icons/icons8-password-64 (1).png);"));

        retranslateUi(verification);

        QMetaObject::connectSlotsByName(verification);
    } // setupUi

    void retranslateUi(QWidget *verification)
    {
        verification->setWindowTitle(QCoreApplication::translate("verification", "Form", nullptr));
        CodeSent_lineEdit->setText(QString());
        CodeSent_lineEdit->setPlaceholderText(QCoreApplication::translate("verification", " Enter code", nullptr));
        Question_label->setText(QCoreApplication::translate("verification", " Enter the code sent to the phone number below", nullptr));
        PhoneNumber_label->setText(QCoreApplication::translate("verification", "09052578107", nullptr));
        pushButton->setText(QCoreApplication::translate("verification", "Change Number", nullptr));
        pushButton_2->setText(QCoreApplication::translate("verification", "Confrim", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class verification: public Ui_verification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICATION_H
