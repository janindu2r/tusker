#include "newtask.h"
#include "ui_newtask.h"
#include "widget.h"
#include <QtXML>
#include <QDebug>


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

void NewTask::on_saveNewBtn_clicked()
{
    createFile();

    childElement();

    writeToFile();

}


