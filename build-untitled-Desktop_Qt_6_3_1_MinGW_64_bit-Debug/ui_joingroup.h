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
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *JoinGroup)
    {
        if (JoinGroup->objectName().isEmpty())
            JoinGroup->setObjectName(QString::fromUtf8("JoinGroup"));
        JoinGroup->resize(450, 500);
        JoinGroup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 255);"));
        label = new QLabel(JoinGroup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 210, 161, 34));
        QFont font;
        font.setPointSize(15);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgba(254, 231, 21, 1);"));
        lineEdit = new QLineEdit(JoinGroup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 210, 221, 28));
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
        label_2 = new QLabel(JoinGroup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 291, 61));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255,255,0)	;"));
        label_3 = new QLabel(JoinGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 20, 101, 91));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/icons/group2.png);"));
        horizontalLayoutWidget = new QWidget(JoinGroup);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 360, 251, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_2 {\n"
"color: white;\n"
"border-radius: 5px;\n"
"Background: #933;\n"
"color: #fefefe;\n"
"}\n"
"\n"
"QPushButton#pushButton_2:hover {\n"
"	background-color: rgb(42, 46, 52);\n"
"border-style: solid;\n"
" border-width: 1px;\n"
"	color: rgb(241, 182, 88);\n"
"}\n"
"\n"
"QPushButton#pushButton_2:pressed {\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"	background-color: rgb(25, 69, 105);\n"
"	color: rgb(85, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton#pushButton {\n"
"color: white;\n"
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


        retranslateUi(JoinGroup);

        QMetaObject::connectSlotsByName(JoinGroup);
    } // setupUi

    void retranslateUi(QWidget *JoinGroup)
    {
        JoinGroup->setWindowTitle(QCoreApplication::translate("JoinGroup", "Form", nullptr));
        label->setText(QCoreApplication::translate("JoinGroup", "Group name :", nullptr));
        label_2->setText(QCoreApplication::translate("JoinGroup", "M2 messenger", nullptr));
        label_3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("JoinGroup", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("JoinGroup", "Confrim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JoinGroup: public Ui_JoinGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINGROUP_H
