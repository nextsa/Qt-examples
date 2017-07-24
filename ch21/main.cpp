#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <fstream>
#include <QDebug>
#include <cstdlib>
#include <map>

using namespace std;

enum class type_sort
{
    t1, t2, t3
};

struct Item
{
    string name;
    int iid;
    double value;

    bool operator<(const Item& i)
    {
        switch(Item::m_t)
        {
        case type_sort::t1:
            return name < i.name;
            break;

        case type_sort::t2:
            return iid < i.iid;
            break;

        case type_sort::t3:
            return value > i.value;
            break;
        }
    }
    static type_sort m_t;
};
type_sort Item::m_t = type_sort::t1;


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

//    system("ls");

/*    vector <Item> vi;
    ifstream in_1("in.txt");
    int q = 0;
    in_1 >> q;

    Item el;

    for (int i = 0; i < q; i++)
    {
        in_1 >> el.name >> el.iid >> el.value;
        vi.push_back(el);
     }
    in_1.close();



    sort (vi.begin(), vi.end(),
                [] (Item& a, Item& b)
        {
            return a.name < b.name;
        }
    );

    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
    cout << endl;

    sort (vi.begin(), vi.end(),
            [] (Item& a, Item& b)
    {
        return a.iid < b.iid;
    }
    );

    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
    cout << endl;

    sort (vi.begin(), vi.end(),
            [] (Item& a, Item& b)
    {
        return a.value > b.value;
    }
    );
    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
    cout << endl;


    Item i1{"horse shoe", 99, 12.34};
    Item i2{"Canon S400", 9988, 499.95};
    vi.push_back(i1);
    vi.push_back(i2);

    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;

    }
    cout << endl;

    vector<Item>::iterator del;
    vector<Item>::iterator del_2;

    for(vector<Item>::iterator i = vi.begin(); i != vi.end(); i++)
    {
        if((*i).name == "horse shoe")
        {
            del = i;
        }

        if ((*i).iid == 99)
        {
           del_2 = i;
        }
    }
    vi.erase(del);
    vi.erase(del_2);



    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;

    }
    cout << endl;
*/

/*    list <Item> vi;
    ifstream in_1("in.txt");
    int q = 0;
    in_1 >> q;

    Item el;

    for (int i = 0; i < q; i++)
    {
        in_1 >> el.name >> el.iid >> el.value;
        vi.push_back(el);
    }
    in_1.close();
    vi.sort();
    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
    cout << endl;

    Item::m_t = type_sort::t2;
    vi.sort();
    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
    cout << endl;

    Item::m_t = type_sort::t3;
    vi.sort();
    for (auto i: vi)
    {
        cout << i.name << " " << i.iid << " " << i.value << endl;
    }
*/

    map <string, int> msi;
    msi.insert(pair<string,int>("a",0) );
    msi.insert(pair<string,int>("b",1) );
    msi.insert(pair<string,int>("c",2) );
    msi.insert(pair<string,int>("d",3) );
    msi.insert(pair<string,int>("e",4) );
    msi.insert(pair<string,int>("f",5) );
    msi.insert(pair<string,int>("g",6) );

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
    msi.clear();

    return a.exec();
}

