/********************************************************************************
** Form generated from reading UI file 'channellist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANNELLIST_H
#define UI_CHANNELLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_channellist
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QWidget *channellist)
    {
        if (channellist->objectName().isEmpty())
            channellist->setObjectName(QString::fromUtf8("channellist"));
        channellist->resize(450, 550);
        channellist->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        pushButton = new QPushButton(channellist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 490, 71, 31));
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
        textBrowser = new QTextBrowser(channellist);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 90, 421, 371));
        QFont font;
        font.setBold(false);
        textBrowser->setFont(font);
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
        label = new QLabel(channellist);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 291, 71));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));

        retranslateUi(channellist);

        QMetaObject::connectSlotsByName(channellist);
    } // setupUi

    void retranslateUi(QWidget *channellist)
    {
        channellist->setWindowTitle(QCoreApplication::translate("channellist", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("channellist", "Back", nullptr));
        label->setText(QCoreApplication::translate("channellist", "M2 messenger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class channellist: public Ui_channellist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELLIST_H
