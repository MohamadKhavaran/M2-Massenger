    #include "chatpage.h"
#include "ui_chatpage.h"
#include"afterlogin.h"
#include"sendmessageuser.h"
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
#include<QTimer>
#include<QVector>

QTimer * timer = new QTimer;


void ChatPage :: update()
{
    QFile Number_Messaging("nm.txt");
       if (!Number_Messaging.open(QIODevice::ReadOnly | QIODevice::Text))
           return;

        int counting = 0 ;
      counting = Number_Messaging.readAll().toInt();
       Number_Messaging.close();

    qDebug()<<"Update is Working ...";
    int Count_Message_To_Save_File = 0;
    int temporally = 0 ;
    netAccMan = new QNetworkAccessManager();
      //Create The QNetworkRequest With setUrl For Connect To Server
    if(Type_Request_to_send=="sendmessageuser")
    {
      Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_recive+"?token="+token+"&dst="+relevant_username);
    }
    if(Type_Request_to_send=="sendmessagegroup")
    {
      Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_recive+"?token="+token+"&dst="+GroupName);
    }
      // Send Request To Server By QNetworkReply Object
       reply = netAccMan->get(Request);
      while (!reply->isFinished()) {
          QCoreApplication::processEvents();
      }
      //Checking Network Connection
      if(reply->error()==QNetworkReply::NoError)
      {
            Data = reply->readAll();
            JsonDocument = QJsonDocument::fromJson(Data);
            JObject = JsonDocument.object();
            Message = JObject.value("message").toString();
            code = JObject.value("code").toString();

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
if(Type_Request_to_send=="sendmessageuser")
{
           QFile file(relevant_username+".txt");
           if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
               return;

           QTextStream out(&file);

           while(Count_Message_To_Save_File)
           {
               // Using nested jsonobjects

               BlockObj= (JObject.value("block "+QString::number(temporally))).toObject();
               Message_Recived = BlockObj.value("body").toString();
               Type_User_Send_Message = BlockObj.value("src").toString();

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
if(Type_Request_to_send=="sendmessagegroup")
{
           QFile file(GroupName+".txt");
           if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
               return;

           QTextStream out(&file);

           while(Count_Message_To_Save_File)
           {
               // Using nested jsonobjects

                BlockObj= (JObject.value("block "+QString::number(temporally))).toObject();
                Message_Recived = BlockObj.value("body").toString();
                Type_User_Send_Message = BlockObj.value("src").toString();
// Open Username.txt for checking 'src' Is Username Or Not in if
                QFile Username_file("Username.txt");
                if (!Username_file.open(QIODevice::ReadOnly | QIODevice::Text))
                    return;

                QString Username = Username_file.readAll();
                Username_file.close();

               // Determining the sender and receiver of the message

               if(Type_User_Send_Message==Username)
               out<<"You : "<<Message_Recived<<Qt::endl;
               else
                   out<<Type_User_Send_Message+" : "<<Message_Recived<<Qt::endl;

               temporally++;
               Count_Message_To_Save_File--;
           }
           file.close();
}

      }

qDebug()<<temporally;
qDebug()<<counting;
if(Type_Request_to_send=="sendmessageuser")
{
    if(temporally>counting)
    {
        ui->textBrowser->clear();
        QFile file_for_textBrowser(relevant_username+".txt");
        if (file_for_textBrowser.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file_for_textBrowser);
            while (!in.atEnd())
            {
                QString line = in.readLine();
                  if(line=="src")
                  {
                      QTextCharFormat format;
                      format.setForeground(Qt::green);
                      ui->textBrowser->setCurrentCharFormat(format);
                      continue;
                  }
                  else if(line=="dst")
                  {
                      QTextCharFormat format;
                      format.setForeground(Qt::red);
                      ui->textBrowser->setCurrentCharFormat(format);
                      continue;
                  }

                     ui->textBrowser->append(line);

            }

            QFile Number_Message("nm.txt");
            if (!Number_Message.open(QIODevice::WriteOnly | QIODevice::Text))
                return;


            QTextStream out_Number(&Number_Message);

            out_Number<<temporally;
            Number_Message.close();
            file_for_textBrowser.close();
        }
    }
}

else if(Type_Request_to_send=="sendmessagegroup")
{
    if(temporally>counting)
    {
        ui->textBrowser->clear();
        QFile file_for_textBrowser(GroupName+".txt");
        if (file_for_textBrowser.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&file_for_textBrowser);
            while (!in.atEnd())
            {
                QString line = in.readLine();
                QTextCharFormat format;
                format.setForeground(Qt::blue);
                ui->textBrowser->setCurrentCharFormat(format);
                ui->textBrowser->append(line);
            }
        }
    }
}
}
ChatPage::ChatPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatPage)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());

}

ChatPage::ChatPage( QString relevant , QString Type_Request_to_send )   : ui(new Ui::ChatPage)

{
    // Set The Relevant Username
    // Set The Type      Request
    // They Are Used In Send Request To Server
    ui->setupUi(this);
this->Type_Request_to_send = Type_Request_to_send;
    QFile file("token.txt");
       if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
           return;

     this->token= file.readAll();
       file.close();
connect(timer,SIGNAL(timeout()),this,SLOT(update()));
timer->start(0);

// Searching for messages from files created in the name of users

qDebug()<<"Want to Read File  ...";
// Show The Messages In Offline Mode
// Conditional commands that are between sendmessageuser , sendmessagegroup , sendmessagechannel .
if(Type_Request_to_send=="sendmessageuser")
{
    this->relevant_username = relevant;
Type_Request_to_recive = "getuserchats";
QFile file_for_textBrowser(relevant_username+".txt");
if (file_for_textBrowser.open(QIODevice::ReadOnly | QIODevice::Text))
{
    QTextStream in(&file_for_textBrowser);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        if(line=="src")
        {
            QTextCharFormat format;
            format.setForeground(Qt::green);
            ui->textBrowser->setCurrentCharFormat(format);
            continue;
        }
        else if(line=="dst")
        {
            QTextCharFormat format;
            format.setForeground(Qt::red);
            ui->textBrowser->setCurrentCharFormat(format);
            continue;
        }
        ui->textBrowser->append(line);
    }
    file_for_textBrowser.close();
}
 }

else if(Type_Request_to_send=="sendmessagegroup")
{
    this->GroupName = relevant;
Type_Request_to_recive = "getgroupchats";
QFile file_for_textBrowser(GroupName+".txt");
if (file_for_textBrowser.open(QIODevice::ReadOnly | QIODevice::Text))
   {
    QTextStream in(&file_for_textBrowser);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QTextCharFormat format;
        format.setForeground(Qt::blue);
        ui->textBrowser->setCurrentCharFormat(format);
        ui->textBrowser->append(line);
    }
   }
}

}

ChatPage::~ChatPage()
{
    delete ui;
}

void ChatPage::on_pushButton_clicked()
{
    disconnect(timer,SIGNAL(timeout()),this,SLOT(update()));
   // timer->stop();
    sendmessageuser * BacktoPage = new sendmessageuser();
    BacktoPage->show();
    this->close();
}


void ChatPage::on_pushButton_2_clicked()
{
    disconnect(timer,SIGNAL(timeout()),this,SLOT(update()));
    //timer->stop();
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();
}




void ChatPage::on_Send_pushButton_clicked()
{
    // Checking that the user does not send an empty message
    if(ui->lineEdit->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,"","You cannot send an empty message !");
        return ;
    }

       QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
         //Create The QNetworkRequest With setUrl For Connect To Server
         QNetworkRequest  Request;
         if(Type_Request_to_send=="sendmessageuser")
         {
         Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_send+"?token="+token+"&dst="+relevant_username+"&body="+ui->lineEdit->text());
         }
         if(Type_Request_to_send=="sendmessagegroup")
         {
         Request.setUrl("http://api.barafardayebehtar.ml:8080/"+Type_Request_to_send+"?token="+token+"&dst="+GroupName+"&body="+ui->lineEdit->text());
         }
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
             // Set The Color Text
if(Type_Request_to_send=="sendmessageuser")
{
             QTextCharFormat format;
             format.setForeground(Qt::green);
             ui->textBrowser->setCurrentCharFormat(format);
            // ui->textBrowser->append(ui->lineEdit->text());
             ui->lineEdit->setText("");
return;
}

else if(Type_Request_to_send=="sendmessagegroup")
{
             QTextCharFormat format;
             format.setForeground(Qt::blue);
             ui->textBrowser->setCurrentCharFormat(format);
             //ui->textBrowser->append(ui->lineEdit->text());
             ui->lineEdit->setText("");
return;
}

      }
         }
         else
         {
             QMessageBox::warning(this,"Network Connection","Make sure you are connected to the Internet");
             ui->lineEdit->setText("");
     return;
         }
}

