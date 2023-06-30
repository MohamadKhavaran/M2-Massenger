#include "userlist.h"
#include "ui_userlist.h"
#include"afterlogin.h"
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
#include<QFile>
userlist::userlist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userlist)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());

    QFile file("token.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString token = file.readAll();
    file.close();


    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
    //Create The QNetworkRequest With setUrl For Connect To Server
    QNetworkRequest  Request;
    Request.setUrl("http://api.barafardayebehtar.ml:8080/getuserlist?token="+token);
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
         int count_user =  0;
         QString temp ;
         QString temp_Exception ="You Have Chat With -0- User";
         QString temp_Exception_2 ="You Have Chat With -1- User";
         while(true)
         {
             temp = "You Have Chat With -"+QString::number(count_user)+"- Users";
             if(temp==Message)
             break;
             else if(temp_Exception==Message||temp_Exception_2==Message)
             {
                 count_user++;
             break;
             }
             count_user++;
         }
         int temporally = 0 ;
         while(count_user)
         {
             // Using nested jsonobjects
             QJsonObject Name= (JObject.value("block "+QString::number(temporally))).toObject();
             QString userName = Name.value("src").toString();
             ui->textBrowser->append(userName);
             temporally++;
             count_user--;
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

userlist::~userlist()
{
    delete ui;
}

void userlist::on_pushButton_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();

}

