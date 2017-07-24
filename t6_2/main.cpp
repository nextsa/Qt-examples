#include <QCoreApplication>
#include <iostream>

using namespace std;

template <typename T, typename U>
struct Tracer
{
public:
    Tracer(T str, U ostr) :
        m_str{str},
        o_str{ostr}
    {
        cout << m_str << endl;
    }
    ~Tracer()
    {
        cout << o_str << endl;
        string out = "echo destructor ";
        out += m_str;
        system(out.c_str());
    }


private:
    T m_str;
    U o_str;

};

class A
{
public:
    Tracer <string, int> s = Tracer <string, int> ("Trace A", 1);

};

Tracer <string, int> s("Trace 0", 1);


void f()
{
    Tracer <string, int> s("Trace 1", 1);

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    {
    A k;
    }
    f();
    {
    Tracer <string, int> s2("Trace 2", 1);
    }
    Tracer <string, int>* s2 = new Tracer<string, int> ("Trace new", 1);
    delete s2;

    return a.exec();
}

