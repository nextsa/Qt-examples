#include <QCoreApplication>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
       cout << "arr[" << i << "]" << a[i] << endl;
    }
}

void print_vector(ostream& os, vector <int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
       cout << "arr[" << i << "]" << arr[i] << endl;
    }
}

ostream& operator<<(ostream& os, const vector <int> &arr)
{
    for (auto a: arr)
    {
        os << a << endl;
    }
    return os;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

/*    int num = rand()%10 +5;
    int *arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand()%1000 + 1;
 //       cout<<"a["<<i<<"]"<<arr[i]<<endl;
    }

    print_array(cout, arr, num);

    delete[] arr;
*/
    int num = rand()%10 +5;
    vector <int> arr;
    for (int i = 0; i < num; i++)
    {
        int a = rand()%1000 + 1;
        arr.push_back(a);
//        cout << "arr[" << i << "]" << arr[i] << endl;
    }
    cout << arr;

    return a.exec();
}

