#ifndef AFTERLOGIN_H
#define AFTERLOGIN_H
#include <QWidget>

namespace Ui {
class afterLogin;
}

class afterLogin : public QWidget
{
    Q_OBJECT

public:
    explicit afterLogin(QWidget *parent = nullptr);
    ~afterLogin();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::afterLogin *ui;
    //Use in Logout
    QString Username;
    QString Password;
};

#endif // AFTERLOGIN_H
