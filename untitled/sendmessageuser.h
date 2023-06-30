#ifndef SENDMESSAGEUSER_H
#define SENDMESSAGEUSER_H

#include <QWidget>

namespace Ui {
class sendmessageuser;
}

class sendmessageuser : public QWidget
{
    Q_OBJECT

public:
    explicit sendmessageuser(QWidget *parent = nullptr);
    ~sendmessageuser();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::sendmessageuser *ui;
};

#endif // SENDMESSAGEUSER_H
