#include "register.h"
#include "ui_register.h"
#include"mainwindow.h"
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
#include<verification.h>
Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_Back_pushButton_clicked()
{
    MainWindow  * newMainWindowPage = new MainWindow();
    newMainWindowPage->show();
    this->close();
}

void Register::on_Submit_pushButton_clicked()
{
    QString FirstName , LastName  , Username , Password , ConfrimPassword,PhoneNumber;
    FirstName = ui->FirstName_lineEdit->text();
    LastName = ui->LastName_lineEdit->text();
    Username = ui->UserName_lineEdit->text();
    Password = ui->Password_lineEdit->text();
    ConfrimPassword = ui->ConfrimPassword_lineEdit->text();
    PhoneNumber = ui->PhoneNumber_lineEdit->text();
    if(!CheckingBox( FirstName , LastName  , Username , Password , ConfrimPassword,PhoneNumber))
        return;
QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
//Create The QNetworkRequest With setUrl For Connect To Server
QNetworkRequest  Request;
Request.setUrl("http://api.barafardayebehtar.ml:8080/signup?username="+Username+"&password="+Password+"&firstname="+FirstName
               +"&lastname="+LastName);
// Send Request To Server By QNetworkReply Object
QNetworkReply  * reply = NetAccMan->get(Request);
while (!reply->isFinished()) {
    QCoreApplication::processEvents();
}
//Checking Network Connection
if(reply->error()==QNetworkReply::NoError)
{
    QByteArray  Data = reply->readAll();
    QJsonDocument JsonDocument = QJsonDocument::fromJson(Data);
    QJsonObject JObject = JsonDocument.object();
    QString x = JObject.value("message").toString();
    // for test server Connection before verification PhoneNumer :  QMessageBox::information(this,"",x);
    // verification Phone Number
    this->close();
    verification  * newverification = new verification(PhoneNumber,FirstName,x);
    newverification->show();
    this->close();
}
else
{QMessageBox::warning(this,"Network Connection","Make sure you are connected to the Internet");
    MainWindow  * newMainWindowPage = new MainWindow();
    newMainWindowPage->show();
    this->close();
}
}
bool Register:: CheckingBox(QString FirstName ,QString LastName  ,QString Username ,QString Password ,QString ConfrimPassword,QString PhoneNumber)
{
    if(FirstName.length() == 0){
        QMessageBox::warning(this, "Invalid input", "FirstName  cannot be empty!");
        return false;
    }
    else if(LastName.length() == 0){
        QMessageBox::warning(this, "Invalid input", "LastName cannot be empty!");
        return false;
    }
    else if(Username.length() == 0){
        QMessageBox::warning(this, "Invalid input", "Username cannot be empty!");
        return false;
    }
    else if(Password.length() == 0){
        QMessageBox::warning(this, "Invalid input", "Password cannot be empty!");
        return false;
    }
    else if(PhoneNumber.length() == 0){
        QMessageBox::warning(this, "Invalid input", "PhoneNumber cannot be empty!");
        return false;
    }

    else if(Password != ConfrimPassword){
        QMessageBox::warning(this, "Invalid input", "Password and confirm password are different!");
        return false;
    }
    return true;
}

