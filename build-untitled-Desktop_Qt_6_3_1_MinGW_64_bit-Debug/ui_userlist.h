/********************************************************************************
** Form generated from reading UI file 'userlist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLIST_H
#define UI_USERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userlist
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *userlist)
    {
        if (userlist->objectName().isEmpty())
            userlist->setObjectName(QString::fromUtf8("userlist"));
        userlist->resize(529, 420);
        textBrowser = new QTextBrowser(userlist);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(30, 50, 361, 301));
        pushButton = new QPushButton(userlist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 360, 93, 29));

        retranslateUi(userlist);

        QMetaObject::connectSlotsByName(userlist);
    } // setupUi

    void retranslateUi(QWidget *userlist)
    {
        userlist->setWindowTitle(QCoreApplication::translate("userlist", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("userlist", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userlist: public Ui_userlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLIST_H
