/********************************************************************************
** Form generated from reading UI file 'grouplist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPLIST_H
#define UI_GROUPLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupList
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QWidget *GroupList)
    {
        if (GroupList->objectName().isEmpty())
            GroupList->setObjectName(QString::fromUtf8("GroupList"));
        GroupList->resize(670, 400);
        GroupList->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        pushButton = new QPushButton(GroupList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 310, 71, 71));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/icons/back_icon_2.png);"));
        textBrowser = new QTextBrowser(GroupList);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(210, 80, 431, 301));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        label = new QLabel(GroupList);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 291, 61));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0);"));

        retranslateUi(GroupList);

        QMetaObject::connectSlotsByName(GroupList);
    } // setupUi

    void retranslateUi(QWidget *GroupList)
    {
        GroupList->setWindowTitle(QCoreApplication::translate("GroupList", "Form", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("GroupList", "M2 messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupList: public Ui_GroupList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPLIST_H
