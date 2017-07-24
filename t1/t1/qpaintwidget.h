#ifndef QPAINTWIDGET_H
#define QPAINTWIDGET_H

#include <QWidget>

class QPaintEvent;

class qpaintwidget : public QWidget
{
    Q_OBJECT
public:
    qpaintwidget(QWidget* parent = 0);
protected:
    void paintEvent(QPaintEvent*);

};

#endif // QPAINTWIDGET_H
