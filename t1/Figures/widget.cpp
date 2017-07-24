#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->resize(600, 600);
    this->setFixedSize(600, 600);

    scene = new QGraphicsScene();
    rectangle = new Rectangle();

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRecoderHint(QPainter::Antialising);
    ui->graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    scene->setSceneRect(-250, -250, 500, 500);

    scene->addRect(0, 0, 30, 50, QPen(Qt::black));
    scene->addItem(rectangle);

}

Widget::~Widget()
{
    delete ui;
}
