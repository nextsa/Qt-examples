#include "dialog.h"
#include "ui_dialog.h"
#include <QTimer>
#include <QPainter>
#include <QDebug>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    timer_id = startTimer(200);

//    qDebug() << frameSize() << " " << frameGeometry();

//    QWidget wgt;
//    qDebug() << wgt.width() << " " << wgt.height() << " " << wgt.size();

    setGeometry(0, 0, max_x, max_y);
    qDebug() << geometry().width();

    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.drawEllipse(x, y, circle_shape, circle_shape);

}

void Dialog::timerEvent(QTimerEvent *e)
{

    x += dx;
    y += dy;

    int w = x + circle_shape;
    int h = y + circle_shape;

    if (w >= max_x ||  x <= 0)
    {
        dx = -dx;
    }
    if (h >= max_y || y <= 0)
    {
        dy = - dy;
    }

    update();
}
