#include "grouplist.h"
#include "ui_grouplist.h"
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
GroupList::GroupList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GroupList)
{
    ui->setupUi(this);
    QFile file("token.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString token = file.readAll();
    file.close();


    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
    //Create The QNetworkRequest With setUrl For Connect To Server
    QNetworkRequest  Request;
    Request.setUrl("http://api.barafardayebehtar.ml:8080/getgrouplist?token="+token);
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
         int count_group =  0;
         QString temp ;
         while(true)
         {
             temp = "You Are in -"+QString::number(count_group)+"- Groups";
             if(temp==Message)
             break;

             count_group++;
         }
         int temporally = 0 ;
         while(count_group)
         {
             // Using nested jsonobjects
             QJsonObject Name= (JObject.value("block "+QString::number(temporally))).toObject();
             QString groupName = Name.value("group_name").toString();
             ui->textBrowser->append(groupName);
             temporally++;
             count_group--;
         }
         QString code = JObject.value("code").toString();
         if(code=="200")
         {
             QMessageBox::information(this,"",Message);
//             afterLogin * BacktoPage = new afterLogin();
             this->close();
//             BacktoPage ->show();
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

GroupList::~GroupList()
{
    delete ui;
}


void GroupList::on_pushButton_clicked()
{
   afterLogin * BacktoPage = new afterLogin();
   BacktoPage->show();
   this->close();
}

