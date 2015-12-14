#include "widget.h"
#include "ui_widget.h"
#include "newtask.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//  connect(pushButton,SIGNAL(click()),this,SLOT(on_pushButton_clicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    NewTask *wdg = new NewTask;
    wdg->show();
    hide();
}
