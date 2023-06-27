#include "joinchannel.h"
#include "ui_joinchannel.h"
#include"afterlogin.h"
#include "ui_joingroup.h"
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
JoinChannel::JoinChannel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JoinChannel)
{
    ui->setupUi(this);
}

JoinChannel::~JoinChannel()
{
    delete ui;
}
bool JoinChannel:: CheckingBox(QString ChannelName)
{
    if(ChannelName.length() == 0){
       QMessageBox::warning(this, "Invalid input", "channelname cannot be empty!");
       return false;
   }
   return true;
}

void JoinChannel::on_pushButton_clicked()
{
    QString ChannelName  = ui->lineEdit->text();
    if(!CheckingBox(ChannelName))
        return;

    QFile file("token.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString token = file.readAll();
    file.close();

    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
    //Create The QNetworkRequest With setUrl For Connect To Server
    QNetworkRequest  Request;
    Request.setUrl("http://api.barafardayebehtar.ml:8080/joinchannel?token="+token+"&channel_name="+ChannelName);
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


void JoinChannel::on_pushButton_2_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage ->show();
            this->close();
}

