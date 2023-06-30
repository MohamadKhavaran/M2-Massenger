#include "sendmessagegroup.h"
#include "ui_sendmessagegroup.h"
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
#include<QThread>
#include<QTimer>
void sendmessagegroup :: setFileChatGroup(QString Type_Request_to_recive , QString token , QString relevant_group)
{
    int Count_Message_To_Save_File = 0;
    int temporally = 0 ;

    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
      //Create The QNetworkRequest With setUrl For Connect To Server
      QNetworkRequest  Request;
      Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_recive+"?token="+token+"&dst="+relevant_group);
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
           QString temp ;
           QString temp_Exception ="There Are -0- Message";
           QString temp_Exception_2 ="There Are -1- Message";
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

           QFile file(relevant_group+".txt");
           if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
               return;


           QTextStream out(&file);
           while(Count_Message_To_Save_File)
           {
               // Using nested jsonobjects

               QJsonObject BlockObj= (JObject.value("block "+QString::number(temporally))).toObject();
               QString Message_Recived = BlockObj.value("body").toString();
               QString Type_User_Send_Message = BlockObj.value("src").toString();

               // Determining the sender and receiver of the message

               if(Type_User_Send_Message==Username)
               out<<"You : "<<Message_Recived<<Qt::endl;
               else
                   out<<Type_User_Send_Message+" : "<<Message_Recived<<Qt::endl;

               out << Message_Recived << Qt::endl;
               temporally++;
               Count_Message_To_Save_File--;
           }
           file.close();

           QFile Number_Messaging("nm.txt");
           if (!Number_Messaging.open(QIODevice::WriteOnly | QIODevice::Text))
               return;


           QTextStream out_Number(&Number_Messaging);

           out_Number<<temporally;
           Number_Messaging.close();
      }
}

bool _isStringInFile(const QString& filePath, const QString& searchString)
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

sendmessagegroup::sendmessagegroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sendmessagegroup)
{
    //Set Private Method : Username
    QFile Read_Username("Username.txt");
    if (Read_Username.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&Read_Username);
        Username = in.readLine();
    }

    ui->setupUi(this);
}

sendmessagegroup::~sendmessagegroup()
{
    delete ui;
}

void sendmessagegroup::on_pushButton_clicked()
{
    QString groupName = ui->lineEdit->text();
    if(!(ui->lineEdit->text().trimmed().isEmpty()))
    {

        QFile file("token.txt");
           if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
               return;

         QString token= file.readAll();
           file.close();

           setFileChatGroup("getgroupchats",token,groupName);

    ChatPage * newChatUser =  new ChatPage(groupName,"sendmessagegroup");

    QFile Groups_To_Chats("GroupChats.txt");
    if (Groups_To_Chats.exists())
    {

        if (Groups_To_Chats.open(QIODevice::Append | QIODevice::Text))
                {
                    QTextStream stream(&Groups_To_Chats);
                    bool isPresent = _isStringInFile("GroupChats.txt", groupName);
                    if(!isPresent)
                    {
                    stream <<groupName << Qt::endl;
                    Groups_To_Chats.close();
                    }
                }
    }

    newChatUser->show();
    this->close();
    }
    else
    {
        QMessageBox::warning(this,"","GroupName Cannot Be Empty !");
        return;
    }
}


void sendmessagegroup::on_pushButton_2_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();
}

