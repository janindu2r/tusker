#include "newtask.h"
#include "ui_newtask.h"
#include "QLineEdit"
#include "QTextEdit"
#include <iostream>
#include <QDebug>
#include <QFile>


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

void NewTask::on_pushButton_clicked()
{
    QString textArea = ui->textEdit->toPlainText();
    QString text = ui->lineEdit->text();

    QFile file ("dilum.txt");
    if (file.open(QIODevice::ReadWrite)){
        QTextStream stream (&file);
        stream << ui->lineEdit->text();
        stream << ui->lineEdit->text();
        file.close();
    }

}
