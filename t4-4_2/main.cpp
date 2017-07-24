#include <QCoreApplication>
#include <iostream>

using namespace std;

int findx(const char *s, const char* x) {
    for (int i = 0; *s != '\0'; ++i, ++s) {
        if (*s == *x)
        {
            return i + 1;
        }
    }
    return -1;
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const char* s = {"zzxcvbnm"};
    const char* x = {"vbnm"};
    int result = findx(s, x);
    cout << result << endl;

    return a.exec();
}

