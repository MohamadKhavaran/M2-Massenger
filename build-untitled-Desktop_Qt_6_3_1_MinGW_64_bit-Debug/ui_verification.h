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

    void setupUi(QWidget *verification)
    {
        if (verification->objectName().isEmpty())
            verification->setObjectName(QString::fromUtf8("verification"));
        verification->resize(727, 610);
        verification->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        CodeSent_lineEdit = new QLineEdit(verification);
        CodeSent_lineEdit->setObjectName(QString::fromUtf8("CodeSent_lineEdit"));
        CodeSent_lineEdit->setGeometry(QRect(340, 200, 41, 28));
        CodeSent_lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        Question_label = new QLabel(verification);
        Question_label->setObjectName(QString::fromUtf8("Question_label"));
        Question_label->setGeometry(QRect(180, 20, 425, 30));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        Question_label->setFont(font);
        Question_label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,51);"));
        PhoneNumber_label = new QLabel(verification);
        PhoneNumber_label->setObjectName(QString::fromUtf8("PhoneNumber_label"));
        PhoneNumber_label->setGeometry(QRect(280, 58, 161, 30));
        PhoneNumber_label->setFont(font);
        PhoneNumber_label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,51);"));
        pushButton = new QPushButton(verification);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 210, 211, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(verification);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 211, 211, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(verification);

        QMetaObject::connectSlotsByName(verification);
    } // setupUi

    void retranslateUi(QWidget *verification)
    {
        verification->setWindowTitle(QCoreApplication::translate("verification", "Form", nullptr));
        CodeSent_lineEdit->setText(QString());
        Question_label->setText(QCoreApplication::translate("verification", "Enter the code sent to the number below", nullptr));
        PhoneNumber_label->setText(QCoreApplication::translate("verification", "09052578107", nullptr));
        pushButton->setText(QCoreApplication::translate("verification", "Change Number", nullptr));
        pushButton_2->setText(QCoreApplication::translate("verification", "Confrim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class verification: public Ui_verification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICATION_H
