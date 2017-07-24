#include <QCoreApplication>
#include<iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int aa = 0;
    ifstream in("a.txt");
    in >> aa;
    cout << aa << endl;
    return a.exec();
}

