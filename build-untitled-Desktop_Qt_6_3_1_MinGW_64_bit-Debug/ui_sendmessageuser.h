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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *sendmessageuser)
    {
        if (sendmessageuser->objectName().isEmpty())
            sendmessageuser->setObjectName(QString::fromUtf8("sendmessageuser"));
        sendmessageuser->resize(754, 520);
        pushButton = new QPushButton(sendmessageuser);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 430, 93, 29));
        pushButton_2 = new QPushButton(sendmessageuser);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 430, 93, 29));
        widget = new QWidget(sendmessageuser);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 220, 642, 36));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(sendmessageuser);

        QMetaObject::connectSlotsByName(sendmessageuser);
    } // setupUi

    void retranslateUi(QWidget *sendmessageuser)
    {
        sendmessageuser->setWindowTitle(QCoreApplication::translate("sendmessageuser", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("sendmessageuser", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sendmessageuser", "Confrim", nullptr));
        label->setText(QCoreApplication::translate("sendmessageuser", "Enter the username of the desired person : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sendmessageuser: public Ui_sendmessageuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGEUSER_H
