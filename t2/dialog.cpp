#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *)
{
    QPainter p(this);
//    p.setPen(Qt::black, 1, Qt::SolidLine);
/*    for (int x = 0; x <= 600; x+=100)
    {
        p.drawLine(QPoint(x, 0), QPoint(x, 600));
    }
    for (int y = 0; y <= 600; y+=100)
    {
        p.drawLine(QPoint(0, y), QPoint(600, y));
    }
*/
    int x_beg = 0;
    int y_beg = 0;
    int x_max = 600;
    int y_max = 600;
    int h = 100;
    int w = 100;
    for (int x = 0; x <= x_max; x+=100)
    {
        p.drawLine(QPoint(x, y_beg), QPoint(x, y_max));
        for (int y = 0; y <= y_max; y+=100)
        {
            p.drawLine(QPoint(x_beg, y), QPoint(x_max, y));
            if (x == y)
            {
                p.fillRect(QRect(x, y, h, w), Qt::red);
            }
        }
    }

}
