#include "widget.h"
#include "ui_widget.h"

#include <QPainter>
#include <QDebug>

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
void Widget::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
// painter.setPen (QPen(Qt::red,Qt::SolidLine));
// painter.drawLine(0,0,width(),height());
//    painter.setBrush(QBrush(Qt::green,Qt::SolidPattern));

/*    QPoint center(width()/2,height()/2);
    int rad = qMin(width()/4,height()/4);
    painter.drawEllipse(center,rad,rad);
    painter.drawEllipse(center,rad*2,rad/2);

    painter.drawRect(10,10,45, 100);

    QPolygon pn;

    QVector <QPoint> points;
    points.append(QPoint(25,25));
    points.append(QPoint(50, 50));
    points.append(QPoint(75,25));
    pn.append(points);

    pn.translate(QPoint(50, 50));
    painter.drawPolygon(pn);



//    painter.setFont(QFont("sans-serif",-1,10));

// QRect rect(center.x(),center.y(),10,30);
// painter.drawText(rect, Qt::AlignCenter, tr("Hello,graphical world!"));*/

    double x = 0;
    int y = 0;
    int max_x = 100*M_PI;
    int base_y = 50;

//    qDebug()<<M_PI;
    for (int i = 0; i <= max_x; i++)
    {
        x = i/50.;
        y = 50 - 50*sin(x) + base_y;
        painter.drawPoint(i, y);
//    qDebug() << x << " " << y << " " << sin(x);
    }


}
