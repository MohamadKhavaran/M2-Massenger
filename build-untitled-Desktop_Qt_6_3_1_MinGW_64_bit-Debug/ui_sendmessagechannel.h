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

    void setupUi(QWidget *sendmessagechannel)
    {
        if (sendmessagechannel->objectName().isEmpty())
            sendmessagechannel->setObjectName(QString::fromUtf8("sendmessagechannel"));
        sendmessagechannel->resize(685, 455);
        layoutWidget = new QWidget(sendmessagechannel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 390, 195, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(sendmessagechannel);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(270, 170, 191, 41));
        label = new QLabel(sendmessagechannel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 80, 361, 51));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

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
    } // retranslateUi

};

namespace Ui {
    class sendmessagechannel: public Ui_sendmessagechannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMESSAGECHANNEL_H
