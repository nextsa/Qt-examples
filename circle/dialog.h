#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTime>
#include <QTimer>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    int timer_id;
    int x = 0;
    int y = 0;
    int dx = 7;
    int dy = 7;
    int max_x = 470;
    int max_y = 300;
    int circle_shape = 100;

protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *e);
};

#endif // DIALOG_H
