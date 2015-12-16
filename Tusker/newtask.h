#ifndef NEWTASK_H
#define NEWTASK_H

#include <QWidget>

namespace Ui {
class NewTask;
}

class NewTask : public QWidget
{
    Q_OBJECT

public:
    explicit NewTask(QWidget *parent = 0);
    ~NewTask();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NewTask *ui;
};

#endif // NEWTASK_H
