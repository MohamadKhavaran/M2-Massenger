#include "verification.h"
#include<register.h>
#include "ui_verification.h"
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
#include<mainwindow.h>
#include<QTimer>
int second=  60 ;
QTimer * tim = new QTimer;

void verification ::clock()
{
    if(second>=0)
    {
        ui->clock->show();
   ui->clock->setText("       00:"+QString::number(second));
   second--;
    }
    else
       {
        ui->clock->hide();
        ui->pushButton_3->show();
       }
}

verification::verification(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::verification)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    ui->CodeSent_lineEdit->setFocus();


}
//verification::verification()
//{

//}
verification::~verification()
{
    delete ui;
}
bool verification::verificate(QString FirstName ,QString LastName  ,QString Username ,QString Password ,QString PhoneNumber,QString number_sent )
{
    ui->pushButton_3->hide();
    ui->CodeSent_lineEdit->setAlignment(Qt::AlignCenter);
    connect(tim,SIGNAL(timeout()),this,SLOT(clock()));
    tim->start(1000);
    this->FirstName=FirstName;
    this->LastName =LastName;
    this->Username  =Username;
    this->Password =Password;
    this->number_sent = number_sent;
//    if(Message=="User Exist Try Another!")
//    {
//        MainWindow * ExistedUser = new MainWindow();
//        ExistedUser ->show();
//        QMessageBox :: warning(ExistedUser," ",Message);
//            return false ;
//    }
ui->PhoneNumber_label->setText("< "+PhoneNumber+" >");
//ui->CodeSent_lineEdit->setText("       "+number_sent);
   return true;
}

void verification::on_pushButton_clicked()
{
    disconnect(tim,SIGNAL(timeout()),this,SLOT(clock()));
 Register * ChangeNumber = new Register();
ChangeNumber->Change_Number(this->FirstName,this->LastName,this->Username,this->Password);
ChangeNumber->show();
this->close();
}


void verification::on_pushButton_2_clicked()
{
    disconnect(tim,SIGNAL(timeout()),this,SLOT(clock()));
//After confirming the authentication, the user is registered in the server.
    if(ui->CodeSent_lineEdit->text()==number_sent)
    {
        QMessageBox::information(this,"Message verification"," is correct !");
        QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
        //Create The QNetworkRequest With setUrl For Connect To Server
        QNetworkRequest  Request;
        Request.setUrl("http://api.barafardayebehtar.ml:8080/signup?username="+Username+"&password="+Password+"&firstname="+FirstName+"&lastname="+LastName);
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
        QMessageBox::information(this," ",Message);
       // Refer from the verification page to the login page
        MainWindow * AfterSignUp = new MainWindow();
        AfterSignUp->show();
        this->close();
        return ;
        }
        else
        {
            QMessageBox::warning(this,"Network Connection","Make sure you are connected to the Internet");
            MainWindow  * newMainWindowPage = new MainWindow();
            newMainWindowPage->show();
            this->close();
        }
    }
else
    {
        QMessageBox::warning(this,"Message verification"," is incorrect !");
        Register * ChangeNumber = new Register();
       ChangeNumber->Change_Number(this->FirstName,this->LastName,this->Username,this->Password);
       ChangeNumber->show();
       this->close();
    }
}




void verification::on_pushButton_3_clicked()
{
    ui->pushButton_3->hide();
    second= 60;
    int number_sent = 10000 + rand()%100000;
     QUrl url = "http://ippanel.com:8080/?apikey=7o8vFuWx4R2TH1tExjIu4RTWrGz8PClVsoPfevUc_GQ=&pid=a782whh9p3pzg6w&fnum=3000505&tnum="+PhoneNumber+"&p1=name&p2=ramz&v1="+FirstName+"&v2="+QString::number(number_sent);
     QNetworkAccessManager* manager = new QNetworkAccessManager(this);
     //QNetworkReply* reply = manager->get(QNetworkRequest(url));
     //verification * newverification  = new verification();

}

