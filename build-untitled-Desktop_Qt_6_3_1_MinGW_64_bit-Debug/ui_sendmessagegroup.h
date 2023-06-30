/********************************************************************************
** Form generated from reading UI file 'sendmessagegroup.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMESSAGEGROUP_H
#define UI_SENDMESSAGEGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sendmessagegroup
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *sendmessagegroup)
    {
        if (sendmessagegroup->objectName().isEmpty())
            sendmessagegroup->setObjectName(QString::fromUtf8("sendmessagegroup"));
        sendmessagegroup->resize(531, 478);
        label = new QLabel(sendmessagegroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 60, 361, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        lineEdit = new QLineEdit(sendmessagegroup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 150, 191, 41));
        widget = new QWidget(sendmessagegroup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 380, 195, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(sendmessagegroup);

        QMetaObject::connectSlotsByName(sendmessagegroup);
    } // setupUi

    void retranslateUi(QWidget *sendmessagegroup)
    {
        sendmessagegroup->setWindowTitle(QCoreApplication::translate("sendmessagegroup", "Form", nullptr));
        label->setText(QCoreApplication::translate("sendmessagegroup", "Enter the desired group name :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("sendmessagegroup", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("sendmessagegroup", "Confrim", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("sendmessagegroup", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class sendmessagegroup: public Ui_sendmessagegroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGEGROUP_H
