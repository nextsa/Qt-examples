#ifndef FIGURE_H
#define FIGURE_H

#include <QPainter>
#include <cstdlib>
#include <ctime>
#include <QDebug>


class figure
{
public:

    virtual void draw(QPainter *p) = 0;
    void generate ();

protected:

    int x = 0;
    int y = 0;
    int w = 0;
    int h = 0;

};

#endif // FIGURE_H
