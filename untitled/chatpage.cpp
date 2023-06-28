#include "chatpage.h"
#include "ui_chatpage.h"
#include"afterlogin.h"
#include"sendmessageuser.h"
#include"mythread.h"
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
#include<QThread>
#include<QMutex>

QMutex m ;
ChatPage::ChatPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatPage)
{
    ui->setupUi(this);        
}

ChatPage::ChatPage(QString relevant_username , QString Type_Request_to_send )   : ui(new Ui::ChatPage)

{
    // Set The Relevant Username
    // Set The Type      Request
    // They Are Used In Send Request To Server
    ui->setupUi(this);
this->relevant_username = relevant_username;
this->Type_Request_to_send = Type_Request_to_send;
    QFile file("token.txt");
       if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           return;

     this->token= file.readAll();
       file.close();

       if(Type_Request_to_send=="sendmessageuser")
   Type_Request_to_recive = "getuserchats";
Mythread * newThread = new Mythread(Type_Request_to_recive,relevant_username);
QObject::connect(newThread, &Mythread::message_recived,this,&ChatPage::on_message_recived);
newThread->start();
}

void ChatPage::on_message_recived(QString message_recived)
{
    m.lock();
    ui->textBrowser->setStyleSheet("color : red;");
ui->textBrowser->append(message_recived);
    m.unlock();
}

ChatPage::~ChatPage()
{
    delete ui;
}

void ChatPage::on_pushButton_clicked()
{
    sendmessageuser * backtoPage = new sendmessageuser();
    backtoPage->show();
    this->close();
}


void ChatPage::on_pushButton_2_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();
}




void ChatPage::on_Send_pushButton_clicked()
{

       QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
         //Create The QNetworkRequest With setUrl For Connect To Server
         QNetworkRequest  Request;
         Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_send+"?token="+token+"&dst="+relevant_username+"&body="+ui->lineEdit->text());
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
             QThread t;
            // t(getChat());
             ui->textBrowser->setStyleSheet("color : green;");
             m.lock();
             ui->textBrowser->append(ui->lineEdit->text());
             m.unlock();
             ui->lineEdit->setText("");
return;

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

