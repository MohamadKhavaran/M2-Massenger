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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_channellist
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *channellist)
    {
        if (channellist->objectName().isEmpty())
            channellist->setObjectName(QString::fromUtf8("channellist"));
        channellist->resize(754, 487);
        pushButton = new QPushButton(channellist);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 330, 93, 29));
        textBrowser = new QTextBrowser(channellist);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 361, 301));

        retranslateUi(channellist);

        QMetaObject::connectSlotsByName(channellist);
    } // setupUi

    void retranslateUi(QWidget *channellist)
    {
        channellist->setWindowTitle(QCoreApplication::translate("channellist", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("channellist", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class channellist: public Ui_channellist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANNELLIST_H
