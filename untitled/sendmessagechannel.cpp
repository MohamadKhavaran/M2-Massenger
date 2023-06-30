#include "sendmessagechannel.h"
#include "ui_sendmessagechannel.h"
#include"chatpage.h"
#include"afterlogin.h"
#include<QMessageBox>
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
    QString channelName = ui->lineEdit->text();
    if(!(ui->lineEdit->text().trimmed().isEmpty()))
    {
    ChatPage * newChatUser =  new ChatPage(channelName,"sendmessagechannel");
    newChatUser->show();
    this->close();
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




