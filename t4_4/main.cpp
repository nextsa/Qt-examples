#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

char* strdup(const char *c)
{
    char *b = static_cast <char*> (malloc(strlen (c) + 1));
    if (b == nullptr)
    {
        return 0;
    }

    int i = 0;
    while (true)
    {
        b[i] = c[i];
        if (c[i] == '\0')
        {
            break;
        }
        i++;
    }

 /*   while((*c++ = *c++)!= '\0')
    {
        return b;
    }*/

/*  if (b != nullptr)
    {
        strcpy (b,a);
    }
*/
    return b;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    const char* c = {"abcde fg"};
    cout << c << endl;
    const char* ddd = strdup(c);
    cout << ddd << endl;
    free (const_cast <char*> (ddd));

    return a.exec();
}

