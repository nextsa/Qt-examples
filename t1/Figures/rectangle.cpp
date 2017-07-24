#include "rectangle.h"

rectangle::rectangle() : QGraphicsItem()
{

}

rectangle::~rectangle()
{

}

QRectF rectangle::boundingRect() const
{
    return QRectF(-25, -40, 50, 80);
}

void Rectangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QPolygon polygon;

    polygon << QRect(0, 0, 30, 50, QPen(Qt::black));

}
