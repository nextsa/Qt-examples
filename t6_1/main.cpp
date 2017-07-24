#include <QCoreApplication>
#include <vector>
#include <iostream>

using namespace std;

template <typename T, typename U>
void f(vector<T>  v1, vector<U>  v2)
{
    for(int i = 0; i < v1.size(); i++)
    {
        v1[i] += v2[i];
        cout << v1[i] << " ";
    }
    cout << endl;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> v1 = {1, 2, 3};
    vector<int> v3 = {2, 1, 0};
    vector<double> v2 = {0.1, 0.2, 0.3};
    f(v3, v1); //int
    f(v2, v1); //double

    return a.exec();
}

