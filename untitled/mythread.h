#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class Mythread : public QThread
{
    Q_OBJECT
public:
    explicit Mythread(QString Type_Request , QString dst);

    // overriding the QTread's run() method
    void run();
signals :
    void message_recived(QString);
private :
    QString Type_Request;
    QString dst;
};

#endif // MYTHREAD_H
