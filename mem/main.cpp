#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int b = 123;
    int bb = 23;
    static int c = 4556;
    int *d = new int(789);
    cout.setf(ios::dec);
    cout << dec << &b << endl << &bb << endl << dec << &c << endl << dec << d << endl << endl;


    cout << (char*)&bb - (char*)&b << endl;
    cout << (long)(char*)&b - (long)(char*)d << endl;

    delete d;
    return a.exec();
}

