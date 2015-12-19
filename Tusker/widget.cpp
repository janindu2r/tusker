#include "widget.h"
#include "ui_widget.h"
#include "newtask.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_addNewBtn_clicked()
{
    NewTask *newtask = new NewTask;
    newtask->show();
    hide();
}
