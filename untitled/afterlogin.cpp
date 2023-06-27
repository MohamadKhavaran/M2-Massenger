#include "afterlogin.h"
#include"creategroup.h"
#include"createchannel.h"
#include"joingroup.h"
#include"joinchannel.h"
#include "ui_afterlogin.h"
#include"mainwindow.h"
#include<QFile>
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
afterLogin::afterLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::afterLogin)
{
    ui->setupUi(this);
}

afterLogin::~afterLogin()
{
    delete ui;
}

void afterLogin::on_pushButton_4_clicked()
{
    //logout
    QFile Username_file("Username.txt");
    if (!Username_file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString Username = Username_file.readAll();
    Username_file.close();
    QFile Password_file("Password.txt");
    if (!Password_file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString Password = Password_file.readAll();
    Password_file.close();
    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
    //Create The QNetworkRequest With setUrl For Connect To Server
    QNetworkRequest  Request;
    Request.setUrl("http://api.barafardayebehtar.ml:8080/logout?username="+Username+"&password="+Password);
    // Update token.txt File
    QFile file("token.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << "";
    file.close();
    QFile file1("Username.txt");
    if (!file1.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out1(&file1);
    out1 << "";
    file1.close();
    QFile file2("Password.txt");
    if (!file2.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out2(&file2);
    out2 << "";
    file.close();
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
         QString Message = JObject.value("message").toString();
    QMessageBox::information(this," ",Message);
 MainWindow * AfterLogout = new MainWindow;
 AfterLogout->show();
 this->close();
    }
}

void afterLogin::on_pushButton_clicked()
{
   CreateGroup * newGroup = new CreateGroup();
   newGroup->show();
   this->close();
}


void afterLogin::on_pushButton_8_clicked()
{
    CreateChannel * newChannel = new CreateChannel();
    newChannel->show();
    this->close();

}


void afterLogin::on_pushButton_2_clicked()
{
  JoinGroup * newJoinGroup = new JoinGroup();
newJoinGroup ->show();
this->close();
}


void afterLogin::on_pushButton_9_clicked()
{
    JoinChannel * newJoinChannel = new JoinChannel();
  newJoinChannel ->show();
  this->close();
}


void afterLogin::on_pushButton_pressed()
{
    CreateGroup * newGroup = new CreateGroup();
    newGroup->show();
    this->close();
}

