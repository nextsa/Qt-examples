#include "dialog.h"
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTimer *t = new QTimer();
    Dialog w;
    t->connect(t,SIGNAL(timeout()), &w, SLOT(MyTimer()));
    t->start(500);

    w.show();
    return a.exec();
}
