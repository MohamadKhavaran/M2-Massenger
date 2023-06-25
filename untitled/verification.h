#ifndef VERIFICATION_H
#define VERIFICATION_H

#include <QWidget>

class verification : public QWidget
{
    Q_OBJECT
public:
    explicit verification(QWidget *parent = nullptr);
verification(QString PhoneNumber,QString name,QString Message);
signals:

};

#endif // VERIFICATION_H
