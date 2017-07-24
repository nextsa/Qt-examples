#include "circle.h"

circle::circle()
{

}

void circle::draw(QPainter *p)
{
    p->drawEllipse(QPoint(x, y), w, h);
    qDebug() << x << " " << y << " " << w << " " << h;
}
