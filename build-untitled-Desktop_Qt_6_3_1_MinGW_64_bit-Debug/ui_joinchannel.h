/********************************************************************************
** Form generated from reading UI file 'joinchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINCHANNEL_H
#define UI_JOINCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoinChannel
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *JoinChannel)
    {
        if (JoinChannel->objectName().isEmpty())
            JoinChannel->setObjectName(QString::fromUtf8("JoinChannel"));
        JoinChannel->resize(686, 375);
        widget = new QWidget(JoinChannel);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 330, 195, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        widget1 = new QWidget(JoinChannel);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(120, 120, 330, 36));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        retranslateUi(JoinChannel);

        QMetaObject::connectSlotsByName(JoinChannel);
    } // setupUi

    void retranslateUi(QWidget *JoinChannel)
    {
        JoinChannel->setWindowTitle(QCoreApplication::translate("JoinChannel", "Form", nullptr));
        pushButton_2->setText(QCoreApplication::translate("JoinChannel", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("JoinChannel", "Confrim", nullptr));
        label->setText(QCoreApplication::translate("JoinChannel", "channelname : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoinChannel: public Ui_JoinChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINCHANNEL_H
