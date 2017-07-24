#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class circle:public figure
{
public:
    circle();
    void draw(QPainter *p) override;
};

#endif // CIRCLE_H
