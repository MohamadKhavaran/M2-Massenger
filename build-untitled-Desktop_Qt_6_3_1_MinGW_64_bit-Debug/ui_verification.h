/********************************************************************************
** Form generated from reading UI file 'verification.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICATION_H
#define UI_VERIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_verification
{
public:

    void setupUi(QWidget *verification)
    {
        if (verification->objectName().isEmpty())
            verification->setObjectName(QString::fromUtf8("verification"));
        verification->resize(400, 300);

        retranslateUi(verification);

        QMetaObject::connectSlotsByName(verification);
    } // setupUi

    void retranslateUi(QWidget *verification)
    {
        verification->setWindowTitle(QCoreApplication::translate("verification", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class verification: public Ui_verification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICATION_H
