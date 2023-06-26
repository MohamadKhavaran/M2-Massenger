/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(731, 611);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 731, 611));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 40, 131, 71));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;\n"
""));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 140, 271, 40));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 200, 271, 40));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("bbackground-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 290, 271, 40));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton:hover{\n"
"	background-color:rgba(255, 163, 81, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 390, 121, 41));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover{\n"
"	background-color:rgba(255, 163, 81, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 390, 141, 41));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(true);
        pushButton_3->setFont(font4);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover{\n"
"	background-color:rgba(255, 163, 81, 255);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_3:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 110, 311, 351));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:C:\\Users\\Modern\\Documents\\GitHub\\AP-project\\untitled\\telegramlogo2.png)"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", " Login", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", " Username", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", " Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "SIGN IN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Forgot password?", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
