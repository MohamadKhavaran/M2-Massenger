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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Back_pushButton;
    QPushButton *Submit_pushButton;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *FirstName_label;
    QLineEdit *FirstName_lineEdit;
    QLabel *LastName_label;
    QLineEdit *LastName_lineEdit;
    QLabel *UserName_label;
    QLineEdit *UserName_lineEdit;
    QLabel *Password_label;
    QLineEdit *Password_lineEdit;
    QLabel *ConfrimPassword_label;
    QLineEdit *ConfrimPassword_lineEdit;
    QLabel *PhoneNumber_label;
    QLineEdit *PhoneNumber_lineEdit;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(778, 484);
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 440, 611, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Back_pushButton = new QPushButton(layoutWidget);
        Back_pushButton->setObjectName(QString::fromUtf8("Back_pushButton"));

        horizontalLayout->addWidget(Back_pushButton);

        Submit_pushButton = new QPushButton(layoutWidget);
        Submit_pushButton->setObjectName(QString::fromUtf8("Submit_pushButton"));

        horizontalLayout->addWidget(Submit_pushButton);

        layoutWidget_2 = new QWidget(Register);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(160, 10, 511, 415));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        FirstName_label = new QLabel(layoutWidget_2);
        FirstName_label->setObjectName(QString::fromUtf8("FirstName_label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sina")});
        font.setPointSize(12);
        font.setBold(true);
        FirstName_label->setFont(font);

        verticalLayout->addWidget(FirstName_label);

        FirstName_lineEdit = new QLineEdit(layoutWidget_2);
        FirstName_lineEdit->setObjectName(QString::fromUtf8("FirstName_lineEdit"));

        verticalLayout->addWidget(FirstName_lineEdit);

        LastName_label = new QLabel(layoutWidget_2);
        LastName_label->setObjectName(QString::fromUtf8("LastName_label"));
        LastName_label->setFont(font);

        verticalLayout->addWidget(LastName_label);

        LastName_lineEdit = new QLineEdit(layoutWidget_2);
        LastName_lineEdit->setObjectName(QString::fromUtf8("LastName_lineEdit"));

        verticalLayout->addWidget(LastName_lineEdit);

        UserName_label = new QLabel(layoutWidget_2);
        UserName_label->setObjectName(QString::fromUtf8("UserName_label"));
        UserName_label->setFont(font);

        verticalLayout->addWidget(UserName_label);

        UserName_lineEdit = new QLineEdit(layoutWidget_2);
        UserName_lineEdit->setObjectName(QString::fromUtf8("UserName_lineEdit"));

        verticalLayout->addWidget(UserName_lineEdit);

        Password_label = new QLabel(layoutWidget_2);
        Password_label->setObjectName(QString::fromUtf8("Password_label"));
        Password_label->setFont(font);

        verticalLayout->addWidget(Password_label);

        Password_lineEdit = new QLineEdit(layoutWidget_2);
        Password_lineEdit->setObjectName(QString::fromUtf8("Password_lineEdit"));

        verticalLayout->addWidget(Password_lineEdit);

        ConfrimPassword_label = new QLabel(layoutWidget_2);
        ConfrimPassword_label->setObjectName(QString::fromUtf8("ConfrimPassword_label"));
        ConfrimPassword_label->setFont(font);

        verticalLayout->addWidget(ConfrimPassword_label);

        ConfrimPassword_lineEdit = new QLineEdit(layoutWidget_2);
        ConfrimPassword_lineEdit->setObjectName(QString::fromUtf8("ConfrimPassword_lineEdit"));

        verticalLayout->addWidget(ConfrimPassword_lineEdit);

        PhoneNumber_label = new QLabel(layoutWidget_2);
        PhoneNumber_label->setObjectName(QString::fromUtf8("PhoneNumber_label"));
        PhoneNumber_label->setFont(font);

        verticalLayout->addWidget(PhoneNumber_label);

        PhoneNumber_lineEdit = new QLineEdit(layoutWidget_2);
        PhoneNumber_lineEdit->setObjectName(QString::fromUtf8("PhoneNumber_lineEdit"));

        verticalLayout->addWidget(PhoneNumber_lineEdit);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Form", nullptr));
        Back_pushButton->setText(QCoreApplication::translate("Register", "Back", nullptr));
        Submit_pushButton->setText(QCoreApplication::translate("Register", "Submit", nullptr));
        FirstName_label->setText(QCoreApplication::translate("Register", "FirstName ", nullptr));
        LastName_label->setText(QCoreApplication::translate("Register", "LastName ", nullptr));
        UserName_label->setText(QCoreApplication::translate("Register", "Username ", nullptr));
        Password_label->setText(QCoreApplication::translate("Register", "Password ", nullptr));
        ConfrimPassword_label->setText(QCoreApplication::translate("Register", "Confrim Password ", nullptr));
        PhoneNumber_label->setText(QCoreApplication::translate("Register", "Phone Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
