#include "triangle.h"

triangle::triangle()
{

}

void triangle::draw(QPainter *p)
{
    QPolygon polygon;
    polygon.append(QPoint(x, y));
    polygon.append(QPoint(x, y + h));
    polygon.append(QPoint(x + w, y + h));
    p->drawPolygon(polygon);
    qDebug() << x << " " << y << " " << w << " " << h;
}
