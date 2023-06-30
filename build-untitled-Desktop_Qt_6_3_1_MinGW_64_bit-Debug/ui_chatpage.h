/********************************************************************************
** Form generated from reading UI file 'chatpage.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATPAGE_H
#define UI_CHATPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatPage
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *Send_pushButton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *ChatPage)
    {
        if (ChatPage->objectName().isEmpty())
            ChatPage->setObjectName(QString::fromUtf8("ChatPage"));
        ChatPage->resize(450, 550);
        ChatPage->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
""));
        textBrowser = new QTextBrowser(ChatPage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 70, 430, 371));
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
        label = new QLabel(ChatPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 291, 61));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        horizontalLayoutWidget_2 = new QWidget(ChatPage);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 500, 169, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
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

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color: black;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));

        horizontalLayout_2->addWidget(pushButton_2);

        Send_pushButton = new QPushButton(ChatPage);
        Send_pushButton->setObjectName(QString::fromUtf8("Send_pushButton"));
        Send_pushButton->setGeometry(QRect(380, 450, 61, 31));
        Send_pushButton->setStyleSheet(QString::fromUtf8("QPushButton#Send_pushButton {\n"
"color: white;\n"
"border-radius: 5px;\n"
"Background: #393;\n"
"color: #fefefe;\n"
"}\n"
"\n"
"QPushButton#Sendd_pushButton:hover {\n"
"	background-color: rgb(42, 46, 52);\n"
"border-style: solid;\n"
" border-width: 1px;\n"
"	color: rgb(241, 182, 88);\n"
"}\n"
"\n"
"QPushButton#Send_pushButton:pressed {\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"	background-color: rgb(25, 69, 105);\n"
"	color: rgb(85, 255, 255);\n"
"}"));
        lineEdit = new QLineEdit(ChatPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 450, 361, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#lineEdit {\n"
"\n"
"background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;\n"
"\n"
"}\n"
"\n"
"QLineEdit#lineEdit:hover {\n"
"\n"
"	background-color: rgb(42, 46, 52);\n"
"	border-style: solid;\n"
"	border-color: rgb(245, 179, 1);\n"
"	color: rgb(241, 182, 88);\n"
"\n"
"}"));

        retranslateUi(ChatPage);

        QMetaObject::connectSlotsByName(ChatPage);
    } // setupUi

    void retranslateUi(QWidget *ChatPage)
    {
        ChatPage->setWindowTitle(QCoreApplication::translate("ChatPage", "Form", nullptr));
        label->setText(QCoreApplication::translate("ChatPage", "M2 messenger", nullptr));
        pushButton->setText(QCoreApplication::translate("ChatPage", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ChatPage", "Home", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_2->setShortcut(QCoreApplication::translate("ChatPage", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        Send_pushButton->setText(QCoreApplication::translate("ChatPage", "Send", nullptr));
#if QT_CONFIG(shortcut)
        Send_pushButton->setShortcut(QCoreApplication::translate("ChatPage", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        lineEdit->setPlaceholderText(QCoreApplication::translate("ChatPage", "Write your messege ...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatPage: public Ui_ChatPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATPAGE_H
