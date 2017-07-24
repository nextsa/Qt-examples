#include <QCoreApplication>
#include <iostream>
#include <map>

using namespace std;
void cin_map(map <string, int> &msi)
{
    cout << "Input new map:" << endl;
    string s;
    int n = 0;
    for( int i = 0; i < 3; i++)
    {
        cin >> s >> n;
 //       cout << s << " " << n << " " << i << endl;

        msi.emplace(s,n);
    }

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    map <string, int> msi;
    msi.insert(pair<string, int>("a", 0) );
    msi.insert(pair<string, int>("b", 1) );
    msi.insert(pair<string, int>("c", 2) );
    msi.insert(pair<string, int>("d", 3) );
    msi.insert(pair<string, int>("e", 4) );
    msi.insert(pair<string, int>("f", 5) );
    msi.insert(pair<string, int>("g", 6) );

    for (auto it = msi.begin(); it != msi.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }
    msi.clear();



    cin_map(msi);
    for (auto it = msi.begin(); it != msi.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    int sum = 0;
    for (auto it = msi.begin(); it != msi.end(); ++it)
    {
        sum += it->second;
    }
    cout << sum << endl;

    map <int, string> mis;
    for (auto it = msi.begin(); it != msi.end(); ++it)
    {
        mis.insert(pair<int, string>(it->second, it->first));
    }

    for (auto it = mis.begin(); it != mis.end(); ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }


    return a.exec();
}

