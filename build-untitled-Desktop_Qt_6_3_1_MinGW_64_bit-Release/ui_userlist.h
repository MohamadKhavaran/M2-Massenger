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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userlist
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *userlist)
    {
        if (userlist->objectName().isEmpty())
            userlist->setObjectName(QString::fromUtf8("userlist"));
        userlist->resize(450, 550);
        userlist->setStyleSheet(QString::fromUtf8("background-color:	rgb(0, 0, 0);\n"
"color:white;"));
        textBrowser = new QTextBrowser(userlist);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 80, 411, 391));
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowsert#textBrowser {\n"
"Padding: 1px;\n"
"Border-radius: 7px;\n"
"Color: #fefefe;\n"
"background-color: rgb(42, 46, 52);\n"
"border-style: solid solid solid solid ;\n"
" border-width: 2px;\n"
"	border-color: rgb(25, 69, 105);\n"
"}\n"
"\n"
"QTextBrowser#textBrowser:hover {\n"
"background-color: rgb(42, 46, 52);\n"
"border-style: solid solid solid solid ;\n"
" border-width: 2px;\n"
"color: rgb(241, 182, 88);\n"
"	border-color: rgb(32, 88, 134);\n"
"}"));
        pushButton = new QPushButton(userlist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 490, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"color: white;\n"
"border-radius: 5px;\n"
"Background: #933;\n"
"color: #fefefe;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover {\n"
"	background-color: rgb(42, 46, 52);\n"
"border-style: solid;\n"
" border-width: 1px;\n"
"	color: rgb(241, 182, 88);\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed {\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"	background-color: rgb(25, 69, 105);\n"
"	color: rgb(85, 255, 255);\n"
"}"));
        label = new QLabel(userlist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 291, 71));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));

        retranslateUi(userlist);

        QMetaObject::connectSlotsByName(userlist);
    } // setupUi

    void retranslateUi(QWidget *userlist)
    {
        userlist->setWindowTitle(QCoreApplication::translate("userlist", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("userlist", "Back", nullptr));
        label->setText(QCoreApplication::translate("userlist", "M2 messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userlist: public Ui_userlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLIST_H
