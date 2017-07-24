#include <QCoreApplication>

#include <iostream>
#include <cstdlib>

using namespace std;



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const char* gg;
    while (true)
        cin >> gg;
    cout << gg;


    return a.exec();
}

