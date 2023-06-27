#ifndef CREATEGROUP_H
#define CREATEGROUP_H

#include <QWidget>

namespace Ui {
class CreateGroup;
}

class CreateGroup : public QWidget
{
    Q_OBJECT

public:
    explicit CreateGroup(QWidget *parent = nullptr);
    bool CheckingBox(QString GroupName ,QString GroupTitle);
    ~CreateGroup();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CreateGroup *ui;
};

#endif // CREATEGROUP_H
