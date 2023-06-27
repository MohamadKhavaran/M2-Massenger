#include "mainwindow.h"
#include "register.h"
#include<QFile>
#include <QApplication>
#include<QMessageBox>
#include"afterlogin.h"
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
           afterLogin * newpage = new afterLogin();
           newpage ->show();
        }
    }

    return a.exec();
}
