#include "sendmessageuser.h"
#include "ui_sendmessageuser.h"
#include"afterlogin.h"
#include"chatpage.h"
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
int temporally = 0 ;
// This function was created to create a file with the user's name once, without update capability, and later in the ChatPage object, it is used to read from the file and by
//connect(timer,SIGNAL(timeout()),this,SLOT(update()));
//timer->start(0);
//be updated
void setFileChatUser(QString Type_Request_to_recive , QString token , QString relevant_username)
{
    int Count_Message_To_Save_File = 0;

    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
      //Create The QNetworkRequest With setUrl For Connect To Server
      QNetworkRequest  Request;
      Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_recive+"?token="+token+"&dst="+relevant_username);
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

           QFile file(relevant_username+".txt");
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

               if(Type_User_Send_Message==relevant_username)
               out<<"dst"<<Qt::endl;
               else
                   out<<"src"<<Qt::endl;

               out << Message_Recived << Qt::endl;
               temporally++;
               Count_Message_To_Save_File--;
           }
           file.close();
      }
}

bool isStringInFile(const QString& filePath, const QString& searchString)
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
sendmessageuser::sendmessageuser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sendmessageuser)
{
    ui->setupUi(this);
}

sendmessageuser::~sendmessageuser()
{
    delete ui;
}

void sendmessageuser::on_pushButton_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();
}


void sendmessageuser::on_pushButton_2_clicked()
{
    QFile file("token.txt");
       if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           return;

     QString token= file.readAll();
       file.close();
QString User = ui->lineEdit->text();
setFileChatUser("getuserchats",token,User);
ChatPage * newChatUser =  new ChatPage(temporally,User,"sendmessageuser");

QFile Usernames_To_Chats("UserChats.txt");
if (Usernames_To_Chats.exists())
{

    if (Usernames_To_Chats.open(QIODevice::Append | QIODevice::Text))
            {
                QTextStream stream(&Usernames_To_Chats);
                bool isPresent = isStringInFile("UserChats.txt", User);
                if(!isPresent)
                {
                stream <<User << Qt::endl;
                Usernames_To_Chats.close();
                }
            }
}

this->close();
newChatUser->show();

}

