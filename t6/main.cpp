#include <QCoreApplication>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
using VI = vector<int>;

template <typename T>
struct S
{
public:
    S() : val{} {}
    T* get();
    T* get() const;
    T set();
    T operator=(const T&);
    T read_val(T& v);
    void print_val() const;

private:
    T val;
};


template<typename T>
T* S<T>::get()
{
    T* p = &val;
    return p;
}

template<typename T>
void S<T>::print_val() const
{
    cout << "Value is: " << val << endl;
}

template<>
void S<VI>::print_val() const
{
    cout << "Vector: " << endl;
    for (auto v: val)
    {
        cout << v << " ";
    }
    cout << endl;
}


template<typename T>
T S<T>::set()
{
    T newvalue;
    cout << "Type new value: ";
    cin >> newvalue;
    S<T>::val = newvalue;
    return S<T>::val;
}

template<>
VI S<VI>::set()
{
    VI newvalue = {1, 2, 3, 4, 5, 6, 7};
    cout << "Type new vector: " << endl;
//    cin >> newvalue;
    S<VI>::val = newvalue;
    return S<VI>::val;
}


template<typename T>
T S<T>::operator=(const T&)
{
    T val1;
    val1 = val;
    return *this;
}

template<typename T>
T* S<T>::get() const
{
    T* p = &val;
    return p;
}

template<typename T>
T S<T>::read_val(T &v)
{
    cout << "Type Value: ";
    cin >> v;
    return S<T>::val = v;
}
/*
template <class T> ostream & operator << (ostream & str, vector<T> & v)
{
    return v.print(str);
}

template <class T> ostream & operator >> (ostream & str, vector<T> & v)
{
    T* x;
    while(x != "-"){
        cin >> x;
        v.push_back(x);
        return v;

    }
}
*/


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    S<int> b;
    b.set();
    cout << b.get() << endl;
    b.print_val();

    S<char> c;
    c.set();
    cout << (void*)c.get() << endl;
    c.print_val();

    S<double> d;
    d.set();
    cout << d.get() << endl;
    d.print_val();

    S<string> e;
    e.set();
    cout << e.get() << endl;
    e.print_val();


    S<vector<int>> f;
    f.set();
    cout << f.get() << endl;
    f.print_val();


    return a.exec();
}

