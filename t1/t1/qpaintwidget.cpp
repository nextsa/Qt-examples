#include "qpaintwidget.h"
#include <QPainter>

qpaintwidget::qpaintwidget(QWidget* parent) : QWidget(parent)
{

}

void qpaintwidget :: paintEvent(QPaintEvent *)
{

    QPainter p(this);
    p.setPen(QPen(Qt::black, 1, Qt::SolidLine));
    p.drawRect(0, 0, 3,5);
}
