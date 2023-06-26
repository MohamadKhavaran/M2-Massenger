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

private:
    Ui::afterLogin *ui;
};

#endif // AFTERLOGIN_H
