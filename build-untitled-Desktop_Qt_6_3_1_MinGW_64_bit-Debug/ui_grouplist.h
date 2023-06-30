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
        GroupList->resize(450, 550);
        GroupList->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        pushButton = new QPushButton(GroupList);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 490, 71, 41));
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
        textBrowser = new QTextBrowser(GroupList);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 90, 431, 381));
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
        pushButton->setText(QCoreApplication::translate("GroupList", "Back", nullptr));
        label->setText(QCoreApplication::translate("GroupList", "M2 messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupList: public Ui_GroupList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPLIST_H
