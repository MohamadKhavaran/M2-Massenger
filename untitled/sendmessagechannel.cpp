#include "sendmessagechannel.h"
#include "ui_sendmessagechannel.h"
#include"chatpage.h"
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
bool sendmessagechannel :: setFileChatChannel(QString Type_Request_to_recive , QString token , QString relevant_channel)
{
    int Count_Message_To_Save_File = 0;
    int temporally = 0 ;

    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
      //Create The QNetworkRequest With setUrl For Connect To Server
      QNetworkRequest  Request;
      Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_recive+"?token="+token+"&dst="+relevant_channel);
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
           QString temp ;
           QString temp_Exception ="There Are -0- Message";
           QString temp_Exception_2 ="There Are -1- Message";
           if(code=="200")
           {
           while(true)
           {
               temp = "There Are -"+QString::number(Count_Message_To_Save_File)+"- Messages";
               if(temp==Message)
               break;
               else if(temp_Exception==Message||temp_Exception_2==Message)
               break;
               Count_Message_To_Save_File++;
           }
           // This File Create For Save Messages In Online Mode

           QFile file(relevant_channel+".txt");
           if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
               return false;


           QTextStream out(&file);
           while(Count_Message_To_Save_File)
           {
               // Using nested jsonobjects

               QJsonObject BlockObj= (JObject.value("block "+QString::number(temporally))).toObject();
               QString Message_Recived = BlockObj.value("body").toString();

               out << Message_Recived << Qt::endl;
               temporally++;
               Count_Message_To_Save_File--;
           }
           file.close();

           QFile Number_Messaging("nm.txt");
           if (!Number_Messaging.open(QIODevice::WriteOnly | QIODevice::Text))
               return false;


           QTextStream out_Number(&Number_Messaging);

           out_Number<<temporally;
           Number_Messaging.close();
           return true;
           }
           else
           {
               QMessageBox::warning(this,"",Message);
               return false;
           }
      }
      else
      {
          QMessageBox::warning(this,"Network Connection","Make sure you are connected to the Internet");
          return false;
      }
}

bool __isStringInFile(const QString& filePath, const QString& searchString)
{
    QFile file(filePath);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return false;

    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.contains(searchString))
            return true;
    }

    return false;
}
sendmessagechannel::sendmessagechannel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sendmessagechannel)
{
    ui->setupUi(this);
}

sendmessagechannel::~sendmessagechannel()
{
    delete ui;
}

void sendmessagechannel::on_pushButton_clicked()
{
    bool DSL;

    if(!(ui->lineEdit->text().trimmed().isEmpty()))
    {

        QString ChannelName = ui->lineEdit->text();

        QFile file("token.txt");
           if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
               return;

         QString token= file.readAll();
           file.close();
        // Close lineedit for non-admin members
                QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
                QNetworkRequest  Request;
                Request.setUrl("http://api.barafardayebehtar.ml:8080/sendmessagechannel?token="+token+"&dst="+ChannelName+"&body=");
                QNetworkReply  * reply = NetAccMan->get(Request);
                while (!reply->isFinished()) {
                    QCoreApplication::processEvents();
                }
                if(reply->error()==QNetworkReply::NoError)
                {
                    QByteArray  Data = reply->readAll();
                    QJsonDocument JsonDocument = QJsonDocument::fromJson(Data);
                    QJsonObject JObject = JsonDocument.object();
                     QString Message = JObject.value("message").toString();
                     if(Message=="You are not Admin of This Channel")
                  DSL = true;
                }


    if(setFileChatChannel("getchannelchats",token,ChannelName))
{
    ChatPage * newChatUser =  new ChatPage(ChannelName,"sendmessagechannel",DSL);

    QFile Channels_To_Chats("ChannelChats.txt");
    if (Channels_To_Chats.exists())
    {

        if (Channels_To_Chats.open(QIODevice::Append | QIODevice::Text))
                {
                    QTextStream stream(&Channels_To_Chats);
                    bool isPresent = __isStringInFile("ChannelChats.txt", ChannelName);
                    if(!isPresent)
                    {
                    stream <<ChannelName << Qt::endl;
                    Channels_To_Chats.close();
                    }
                }
    }
    newChatUser->show();
    this->close();
    }
  }
    else
    {
        QMessageBox::warning(this,"","ChannelName Cannot Be Empty !");
        return;
    }
}

void sendmessagechannel::on_pushButton_2_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();
}



