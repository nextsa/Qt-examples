#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class triangle:public figure
{
public:
    triangle();
    void draw(QPainter *p) override;
};

#endif // TRIANGLE_H
