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
ui->CodeSent_lineEdit->setText(number_sent);
   return true;
}

void verification::on_pushButton_clicked()
{
 Register * ChangeNumber = new Register();
ChangeNumber->Change_Number(this->FirstName,this->LastName,this->Username,this->Password);
ChangeNumber->show();
this->close();
}


void verification::on_pushButton_2_clicked()
{
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

