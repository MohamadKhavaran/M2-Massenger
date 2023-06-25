#include "verification.h"
#include<mainwindow.h>
#include<ui_verification.h>
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
verification::verification(QWidget *parent)
    : QWidget{parent}
{

}
verification::verification(QString PhoneNumber,QString name,QString Message)
{
    int x = 10000 + rand()%100000;
    QUrl url("http://ippanel.com:8080/?apikey=z36vEB6j1JoMr1-tL7ccHj7wNCyMdt7gpGyHRwzzTrA=&pid=a782whh9p3pzg6w&fnum=3000505&tnum="+PhoneNumber+"&p1=name&p2=ramz&v1="+name+"&v2="+QString::number(x));
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    QNetworkReply* reply = manager->get(QNetworkRequest(url));    
}
