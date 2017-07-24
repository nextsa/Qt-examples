#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

void Dialog::MyTimer()
{
//    QLabel* l = findChild<QLabel*>("label");
//    l->setText(QString("mkl"));
//    ui->label->setText("kjnnkj");
    static int number = 10;

    if(number >= 0)
    {
        ui->label->setText(QString::number(number));
    }
    else if(number == -1)
    {
        close();
    }

    number--;
}



Dialog::~Dialog()
{
    delete ui;
}
