#include <QCoreApplication>
#include <iostream>

using namespace std;

class A
{
public:
    A()
    {
        cout << "A" << endl;
    }
};

class B1
{
public:
    virtual void vf()
    {
        cout << "B1::vf(_)" << endl;
    }
    void f()
    {
        cout << "B1::f()" << endl;
    }
    virtual void pvf() =0;
};
class B2
{
public:
    virtual void pvf() = 0;
};

class D1: public B1
{
public:
    void vf() override
    {
        cout << "D1::vf()" << endl;
    }
    void f()
    {
        cout << "D1::f()" << endl;
    }
    void pvf() override
    {
        cout << "D1::pvf()" << endl;
    }

};
class D2:public D1
{
public:
    void pvf() override
    {
        cout << "D2::pvf()" << endl;
    }
};
class D21:public B2
{
public:
    string d21 = {"d21"};
    void pvf() override
    {
        cout << d21 << endl;
    }
};
class D22:public B2
{
public:
    int d22 = 22;
    void pvf() override
    {
        cout << d22 << endl;
    }
    void f(B2& b2)
    {
        b2.pvf();
    }
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    A aa;
/*    B1 b;
    b.vf();
    b.f();
*/

 /*     D1 d;
    d.vf();
    d.f();
    d.pvf();

    D1 dd;
    B1& ddd = dd;
    ddd.vf();
    ddd.f();
    ddd.pvf();

    D2 d2;
    d2.f();
    d2.vf();
    d2.pvf();
*/
    D21 d21;
    d21.pvf();

    D22 d22;
    d22.f(d22);
    d22.f(d21);

    return a.exec();
}

