#include "mainwindow.h"
#include"afterlogin.h"
#include"ui_afterlogin.h"
#include "register.h"
#include<QFile>
#include <QApplication>
#include<QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile file("token.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        if (file.size() == 0)
        {
            w.show();
        }
        else
        {
        afterLogin * fullToken = new    afterLogin();
        fullToken->show();

        }
    }
    return a.exec();
}
