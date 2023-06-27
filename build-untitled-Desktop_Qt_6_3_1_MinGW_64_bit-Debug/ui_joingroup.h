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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JoinGroup
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *JoinGroup)
    {
        if (JoinGroup->objectName().isEmpty())
            JoinGroup->setObjectName(QString::fromUtf8("JoinGroup"));
        JoinGroup->resize(789, 422);
        widget = new QWidget(JoinGroup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 150, 312, 36));
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

        widget1 = new QWidget(JoinGroup);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 360, 195, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        retranslateUi(JoinGroup);

        QMetaObject::connectSlotsByName(JoinGroup);
    } // setupUi

    void retranslateUi(QWidget *JoinGroup)
    {
        JoinGroup->setWindowTitle(QCoreApplication::translate("JoinGroup", "Form", nullptr));
        label->setText(QCoreApplication::translate("JoinGroup", "groupname : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("JoinGroup", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("JoinGroup", "confrim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoinGroup: public Ui_JoinGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINGROUP_H
