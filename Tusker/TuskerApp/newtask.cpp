#include "newtask.h"
#include "ui_newtask.h"

NewTask::NewTask(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewTask)
{
    ui->setupUi(this);
}

NewTask::~NewTask()
{
    delete ui;
}

void NewTask::on_saveBtn_clicked()
{
    QString getTitle= ui->title->text();
    QString getDesc = ui->description->text();


}
