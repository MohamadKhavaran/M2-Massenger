#include "creategroup.h"
#include "ui_creategroup.h"
#include"afterlogin.h"
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
#include<QFile>
CreateGroup::CreateGroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateGroup)
{
    ui->setupUi(this);
}
bool CreateGroup:: CheckingBox(QString GroupName ,QString GroupTitle)
{
    if(GroupName.length() == 0){
       QMessageBox::warning(this, "Invalid input", "groupname cannot be empty!");
       return false;
   }
   else if(GroupTitle.length() == 0){
       QMessageBox::warning(this, "Invalid input", "grouptitle cannot be empty!");
       return false;
}
   return true;

}

CreateGroup::~CreateGroup()
{
    delete ui;
}
// Creation New Group Department
void CreateGroup::on_pushButton_clicked()
{
    QString GroupName = ui->lineEdit->text();
    QString GroupTitle = ui->lineEdit_2->text();
    if(!CheckingBox(GroupName,GroupTitle))
        return;

    QFile file("token.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString token = file.readAll();
    file.close();

    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
    //Create The QNetworkRequest With setUrl For Connect To Server
    QNetworkRequest  Request;
    Request.setUrl("http://api.barafardayebehtar.ml:8080/creategroup?token="+token+"&group_name="+GroupName+"&group_title="+GroupTitle);
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
         QString code = JObject.value("code").toString();
    if(code=="200")
    {
        QMessageBox::information(this,"",Message);
        afterLogin * BacktoPage = new afterLogin();
        BacktoPage ->show();
                this->close();

    }
    else
    {
        QMessageBox::warning(this,"",Message);
        return ;
    }
    }
    else
    {
        QMessageBox::warning(this,"Network Connection","Make sure you are connected to the Internet");
return;
    }
}


void CreateGroup::on_pushButton_2_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage ->show();
            this->close();
}

