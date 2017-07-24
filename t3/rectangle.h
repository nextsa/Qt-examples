#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class rectangle:public figure
{
public:
    rectangle();
    void draw(QPainter *p) override;
};

#endif // RECTANGLE_H
