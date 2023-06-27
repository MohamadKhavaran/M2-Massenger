#include "createchannel.h"
#include "ui_createchannel.h"
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
//#include<QTimer>
CreateChannel::CreateChannel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateChannel)
{
    ui->setupUi(this);
    //ui->lineEdit->setFocusPolicy(Qt::StrongFocus);
    ui->lineEdit->setFocus();
    //QTimer::singleShot(0, ui->lineEdit, SLOT(setFocus()));
    this->setFixedSize(this->width(), this->height());

}
bool CreateChannel:: CheckingBox(QString ChannelName ,QString ChannelTitle)
{
    if(ChannelName.length() == 0){
       QMessageBox::warning(this, "Invalid input", "channelname cannot be empty!");
       return false;
   }
   else if(ChannelTitle.length() == 0){
       QMessageBox::warning(this, "Invalid input", "channeltitle cannot be empty!");
       return false;
}
   return true;

}

CreateChannel::~CreateChannel()
{
    delete ui;
}
// Creation New Group Department
void CreateChannel::on_pushButton_clicked()
{
    QString ChannelName = ui->lineEdit->text();
    QString ChannelTitle = ui->lineEdit_2->text();
    if(!CheckingBox(ChannelName,ChannelTitle))
        return;

    QFile file("token.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QString token = file.readAll();
    file.close();

    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
    //Create The QNetworkRequest With setUrl For Connect To Server
    QNetworkRequest  Request;
    Request.setUrl("http://api.barafardayebehtar.ml:8080/createchannel?token="+token+"&channel_name="+ChannelName+"&channel_title="+ChannelTitle);
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


void CreateChannel::on_pushButton_2_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage ->show();
            this->close();
}

