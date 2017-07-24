#include "rectangle.h"

rectangle::rectangle()
{

}

void rectangle::draw(QPainter *p)
{
    p->drawRect(x, y, w, h);
    qDebug() << x << " " << y << " " << w << " " << h;
}
