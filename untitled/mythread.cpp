#include "mythread.h"
#include<QDebug>
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
Mythread::Mythread(QString Type_Request , QString dst): Type_Request(Type_Request),  dst(dst)
{

}


void Mythread::run()
{
    qDebug()<<"Thread Started ... ";

    QFile file("token.txt");
       if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           return;

     QString token= file.readAll();
       file.close();

    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
      //Create The QNetworkRequest With setUrl For Connect To Server
      QNetworkRequest  Request;
      Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request+"?token="+token+"&dst="+dst);
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
           int count_user =  0;
           QString temp ;
           QString temp_Exception ="There Are -0- Message";
           while(true)
           {
               temp = "There Are -"+QString::number(count_user)+"- Messages";
               if(temp==Message)
               break;
               else if(temp_Exception==Message)
               break;
               count_user++;
           }
           int temporally = 0 ;
            QString Message_Recived;
           while(count_user)
           {
               // Using nested jsonobjects
               QJsonObject blockObj= (JObject.value("block "+QString::number(temporally))).toObject();
               Message_Recived = blockObj.value("body").toString();
               temporally++;
               count_user--;
               emit message_recived(Message_Recived);

           }
      }
}
