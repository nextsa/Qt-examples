#include <QCoreApplication>
#include <iostream>
#include <vector>

using namespace std;

template<typename IN, typename OUT>
OUT my_copy(IN i1, IN i2, OUT o)
{
    for(IN i = i1; i < i2; i++, o++)
    {
        *o = *i;
    }
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> a1 = {0, 1, 2, 3, 4, 5};
    for(size_t i = 0; i < a1.size(); i++)
    {
        cout << a1[i] << " ";
    }

    cout << endl;
    vector<int> a2(a1.size());
    auto aa2 = my_copy(a1.begin(), a1.end(), a2.begin());
    cout << "Vec2: " << endl;
    for(size_t i = 0; i < a1.size(); i++)
    {
        cout << a2[i] << " ";
    }
    cout << endl;

    vector<int> a3 = {-1, -1, -1, -1, -1, -1};
    auto aa3 = my_copy(a1.begin()+2, a1.begin()+3, a3.begin()+1);
    cout << "Vec3: " << endl;
    for(size_t i = 0; i < a1.size(); i++)
    {
        cout << a3[i] << " ";
    }
    cout << endl;
    cout << *aa3 << endl;

    return a.exec();
}

