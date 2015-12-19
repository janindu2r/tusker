#ifndef NEWTASK_H
#define NEWTASK_H

#include <QWidget>
#include "xmlfunction.h"

namespace Ui {
class NewTask;
}

class NewTask : public QWidget, public XmlFunction
{
    Q_OBJECT

public:
    explicit NewTask(QWidget *parent = 0);
    ~NewTask();

private slots:
    void on_saveNewBtn_clicked();

private:
    Ui::NewTask *ui;


};

#endif // NEWTASK_H
