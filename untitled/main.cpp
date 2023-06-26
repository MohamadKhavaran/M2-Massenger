#include "mainwindow.h"
#include "register.h"
#include<QFile>
#include <QApplication>
#include<QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile file("token.txt");
    /*if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        if (file.size() == 0)
        {
            w.show();
        }
        else
        {
            //Open Class After Login ...
            return a.exec();
        }
    }*/
    w.show();

    return a.exec();
}
