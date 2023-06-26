#ifndef VERIFICATION_H
#define VERIFICATION_H

#include <QWidget>

namespace Ui {
class verification;
}

class verification : public QWidget
{
    Q_OBJECT

public:
    explicit verification(QWidget *parent = nullptr);
bool verificate(QString FirstName ,QString LastName  ,QString Username ,QString Password ,QString PhoneNumber,QString number_sent );
// verification()
   ~verification();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::verification *ui;
    QString FirstName ;
    QString LastName ;
    QString Username ;
    QString Password ;
    QString PhoneNumber;
    QString number_sent;
};

#endif // VERIFICATION_H
