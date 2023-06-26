#include "verification.h"
#include<register.h>
#include "ui_verification.h"
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
#include<mainwindow.h>
verification::verification(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::verification)
{
    ui->setupUi(this);
}
//verification::verification()
//{

//}
verification::~verification()
{
    delete ui;
}
bool verification::verificate(QString FirstName ,QString LastName  ,QString Username ,QString Password ,QString PhoneNumber, QString Message,QString number_sent )
{
    this->FirstName=FirstName;
    this->LastName =LastName;
    this->Username  =Username;
    this->Password =Password;
    this->number_sent = number_sent;
    this->Message = Message;
    if(Message=="User Exist Try Another!")
    {
        MainWindow * ExistedUser = new MainWindow();
        ExistedUser ->show();
        QMessageBox :: warning(ExistedUser," ",Message);
            return false ;
    }
ui->PhoneNumber_label->setText("< "+PhoneNumber+" >");
ui->CodeSent_lineEdit->setText(number_sent);
   return true;
}

void verification::on_pushButton_clicked()
{
 Register * ChangeNumber = new Register();
ChangeNumber->Change_Number(this->FirstName,this->LastName,this->Username,this->Password);
ChangeNumber->show();
this->close();
}


void verification::on_pushButton_2_clicked()
{
    if(ui->CodeSent_lineEdit->text()==number_sent)
    {
        QMessageBox::information(this,"Message verification"," is correct !");
    }
    else
    {
        QMessageBox::warning(this,"Message verification"," is incorrect !");
        QMessageBox::warning(this," ",Message);
    }
}

