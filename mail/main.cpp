#include <QCoreApplication>
#include <regex>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ifstream in{"mail.txt"};
    if (!in)
    {
        cerr << "No input file" << endl;
    }

    regex pat {R"(\w+\@\w+\.\w{3}$)"};
//    cout << "Шаблон: " << pat << endl;

   int lineno = 0;
    for (string line; getline(in, line); )
    {
        ++lineno;
        smatch match;
        if (regex_search(line, match, pat))
            {
                cout << "Match\n";

                //for (auto m : match)
                //  std::cout << "  submatch " << m << '\n';

                cout << "match[0] = " << match[0] << '\n';

            }

    } /*
*/



    return a.exec();
}

