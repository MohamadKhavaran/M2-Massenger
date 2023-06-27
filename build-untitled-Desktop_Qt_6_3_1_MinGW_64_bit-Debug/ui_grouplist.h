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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupList
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *GroupList)
    {
        if (GroupList->objectName().isEmpty())
            GroupList->setObjectName(QString::fromUtf8("GroupList"));
        GroupList->resize(674, 434);
        pushButton = new QPushButton(GroupList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 380, 93, 29));
        textBrowser = new QTextBrowser(GroupList);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 70, 361, 301));

        retranslateUi(GroupList);

        QMetaObject::connectSlotsByName(GroupList);
    } // setupUi

    void retranslateUi(QWidget *GroupList)
    {
        GroupList->setWindowTitle(QCoreApplication::translate("GroupList", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("GroupList", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupList: public Ui_GroupList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPLIST_H
