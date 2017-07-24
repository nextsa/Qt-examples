#include <QCoreApplication>

#include <QCoreApplication>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int strcmp(const char* s1[], const char* s2[])
{
    int i = 0;

/*    while (*s1 == *s2++)
    if (*s1++ == 0)
        return (0);
    return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
*/
 //   int res = 123;

    while ( s1[i] != '\0' )
    {
        if( s2[i] == '\0' )
        {
 //           res = 1;
            return 1;
        }
        else if( s1[i] == s2[i] )
        {
 //           res = 0;
            return 0;
        }
        else if( s1[i] > s2[i] )
        {
 //           res = 1;
            return 1;
        }
        else if( s1[i] < s2[i] )
        {
 //           res = -1;
            return -1;
        }

        i++;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    const char* s1 = {"abcdefg"};
    const char* s2 = {"efgh"};
    cout << s1 << endl << s2 << endl;
    int result = strcmp(s1, s2);
    cout << result <<endl;
    return a.exec();
}

