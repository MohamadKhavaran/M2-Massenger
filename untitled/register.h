#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
void Change_Number(QString ,QString ,QString,QString );
    bool CheckingBox(QString FirstName ,QString LastName  ,QString Username ,QString Password ,QString ConfrimPassword,QString PhoneNumber);
    ~Register();

private slots:
    void on_Back_pushButton_clicked();
    void on_Submit_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
