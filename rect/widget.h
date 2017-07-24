#ifndef WIDGET_H
#define WIDGET_H
#include <QPainter>
#include <QWidget>
#include <cmath>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

 //   QRect::QRect(int left, int top, int width, int height);

private:
    Ui::Widget *ui;

protected:
    void paintEvent(QPaintEvent *event);


};

#endif // WIDGET_H
