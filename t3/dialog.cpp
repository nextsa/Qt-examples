#include "dialog.h"
#include "ui_dialog.h"
#include "circle.h"
#include "rectangle.h"
#include"triangle.h"

#include <QPainter>
#include <vector>
#include <memory>

using namespace std;

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
    srand (time (NULL));
  QPainter p(this);
 /*   circle cl;
    cl.generate();
    cl.draw(&p);

    rectangle rc;
    rc.generate();
    rc.draw(&p);

    triangle tr;
    tr.generate();
    tr.draw(&p);
*/

/*    int max_fig = 20;
    vector <figure *> vf;
    for (int i = 0; i < max_fig; i++)
    {
        circle *pcl = new circle();
        pcl->generate();
        vf.push_back(pcl);

        rectangle *rec= new rectangle();
        rec->generate();
        vf.push_back(rec);

        triangle *trn = new triangle();
        trn->generate();
        vf.push_back(trn);

    }

    for (auto i: vf)
    {
        i->draw(&p);

    }
*/


    int max_fig = 20;
    using Fgr = unique_ptr<figure>;
    vector <Fgr> vf;
    for (int i = 0; i < max_fig; i++)
    {
        vf.push_back(Fgr(new circle));
        vf.push_back(Fgr(new rectangle));
        vf.push_back(Fgr(new triangle));
    }

    for (auto& i: vf)
    {
        i->generate();
    }

    for (auto& i: vf)
    {
        i->draw(&p);
    }


}
