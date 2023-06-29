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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 600));
        widget->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 255);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 100, 161, 71));
        QFont font;
        font.setPointSize(30);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(630, 0, 151, 171));
        label->setStyleSheet(QString::fromUtf8("image: url(:/icons/telegramlogo.jpeg);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 341, 71));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(220, 210, 351, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font2;
        font2.setPointSize(10);
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit#lineEdit {\n"
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

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit#lineEdit_2 {\n"
"\n"
"background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(254, 231, 21, 1);\n"
"color:rgba(255, 255, 255, 255);\n"
"padding-bottom:7px;\n"
"\n"
"}\n"
"\n"
"QLineEdit#lineEdit_2:hover {\n"
"\n"
"	background-color: rgb(42, 46, 52);\n"
"	border-style: solid;\n"
"	border-color: rgb(245, 179, 1);\n"
"	color: rgb(241, 182, 88);\n"
"\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(220, 380, 351, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_3{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color: black;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
"QPushButton#pushButton_3:hover{\n"
"	background-color:rgb(246, 120, 29);\n"
"\n"
"}\n"
"\n"
"QPushButton#pushButton_3:pressed{\n"
"	padding-left:5px;\n"
"	padding-top:5px;\n"
"	background-color:rgba(150,123, 111, 255);\n"
"}"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"color:white;\n"
"border-radius: 5px;\n"
"Background: #393;\n"
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

        horizontalLayout->addWidget(pushButton);

        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(590, 320, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(verticalLayoutWidget_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        QFont font5;
        font5.setBold(true);
        checkBox->setFont(font5);
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox#checkBox {\n"
"padding-left: 10px;\n"
"border-radius: 5px;\n"
"color: #fefefe;\n"
"}\n"
"\n"
"QCheckBox#checkBox:hover {\n"
"	color: rgb(241, 182, 88);\n"
"}\n"
"\n"
"QCheckBox#checkBox:pressed {\n"
"	color: rgb(85, 255, 255);\n"
"}"));

        verticalLayout_2->addWidget(checkBox);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font6;
        font6.setPointSize(8);
        font6.setBold(true);
        pushButton_2->setFont(font6);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2{\n"
"	background-color:rgba(255, 255, 0, 190);\n"
"	color:rgba(0, 0, 0, 255);\n"
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

        verticalLayout_2->addWidget(pushButton_2);

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
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "M2 messenger", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", " Username", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", " Password", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "SIGN IN", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Show password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Forgot password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
