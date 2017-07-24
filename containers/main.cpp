#include <QCoreApplication>
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
/*
template<typename Iter1, typename Iter2>
input_iterator_tag<Iter1>(),
output_iterator_tag<Iter2>()

Iter2 copy(Iter f1, Iter1 e1, Iter2 f2);
*/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    array <int, 10> arr_a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector <int> vec_a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list <int> lst_a = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Array:" << endl;
    array <int, 10> arr_a1 = arr_a;
    for (int i = 0; i < 10; i++)
    {
        arr_a1[i] += 2;
        cout << arr_a1[i] << " ";
    }
    cout << endl << endl;

    cout << "Vector:" << endl;
    vector <int> vec_a1 = vec_a;
    for (int i = 0; i < 10; i++)
    {
        vec_a1[i] += 3;
        cout << vec_a1[i] << " ";
    }
    cout << endl;
    vector<int>::iterator iter;

    int number = 3;
    iter = find(vec_a1.begin(), vec_a1.end(), number);

    if(iter != vec_a1.end())
    {
        cout << *iter << " is on position " << (iter - vec_a1.begin() + 1) << endl;
    }
    else
    {
        cout << number << " not found" << endl;
    }
    cout << endl;

    cout << "List:" << endl;
    list <int> lst_a1 = lst_a;

    for (auto i:lst_a1)
    {
//       i += 5;
       cout << i << " " ;
    }
    cout << endl;

    number = 7;
    list<int>::iterator findIter = find(lst_a1.begin(), lst_a1.end(), number);

    if (findIter != lst_a1.end())
    {
        int pos = distance (lst_a1.begin(), findIter) +1;
        cout << number << " is on position " << pos << endl;
    }
    else
    {
        cout << number << " not found" << endl;
    }

    return a.exec();
}

