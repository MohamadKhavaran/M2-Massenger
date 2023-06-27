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
// for Back to Register PAGE And fill the boxes
void  Register::Change_Number(QString FirstName ,QString LastName  ,QString Username ,QString Password)
{
    ui->FirstName_lineEdit->setText(FirstName);
    ui->LastName_lineEdit->setText(LastName);
    ui->UserName_lineEdit->setText(Username);
    ui->Password_lineEdit->setText(Password);
    ui->ConfrimPassword_lineEdit->setText(Password);
}
void Register::on_Back_pushButton_clicked()
{
    MainWindow  * newMainWindowPage = new MainWindow();
    newMainWindowPage->show();
    this->close();
}

void Register::on_Submit_pushButton_clicked()
{
    QString  LastName  , Username , Password , ConfrimPassword;
    QString FirstName = ui->FirstName_lineEdit->text();
    LastName = ui->LastName_lineEdit->text();
    Username = ui->UserName_lineEdit->text();
    Password = ui->Password_lineEdit->text();
    ConfrimPassword = ui->ConfrimPassword_lineEdit->text();
     QString PhoneNumber = ui->PhoneNumber_lineEdit->text();
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
    // for test server Connection before verification PhoneNumer :QMessageBox::information(this,"",x);
    // verification Phone Number
      int number_sent = 10000 + rand()%100000;
//       QUrl url("http://ippanel.com:8080/?apikey=z36vEB6j1JoMr1-tL7ccHj7wNCyMdt7gpGyHRwzzTrA=&pid=a782whh9p3pzg6w&fnum=3000505&tnum="+PhoneNumber+"&p1=name&p2=ramz&v1="+FirstName+"&v2="+QString::number(number_sent));
//       QNetworkAccessManager* manager = new QNetworkAccessManager(this);
//       QNetworkReply* reply = manager->get(QNetworkRequest(url));
verification * newverification  = new verification();
bool temporal = true;
temporal  = newverification->verificate(FirstName,LastName,Username,Password,PhoneNumber,x,QString::number(number_sent));
if (temporal==true)
{
    newverification->show();
}
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


void Register::on_checkBox_stateChanged(int arg1)
{
    if(arg1) {
        ui->Password_lineEdit->setEchoMode(QLineEdit::Normal);
        ui->ConfrimPassword_lineEdit->setEchoMode(QLineEdit::Normal);
    }
    else {
        ui->Password_lineEdit->setEchoMode(QLineEdit::Password);
        ui->ConfrimPassword_lineEdit->setEchoMode(QLineEdit::Password);
    }
}
