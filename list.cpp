#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> L;
    L.push_back(12);
    L.push_back(10);
    L.push_back(152);
    L.push_back(212);
    L.push_back(1);

    for (auto v : L)
    {
        cout << v << " ";
    }

    cout << endl
         << endl;

    cout << "The last element of the list is " << L.back() << endl;
    L.pop_back();

    cout << endl;

    cout << "The front element of the list is " << L.front() << endl
         << endl;
    L.pop_front();

    for (auto v : L)
    {
        cout << v << " ";
    }

    cout << endl
         << endl;

    /*
    itterator is a pointer to elements in the list. to print it out
    we need to derefrence it. it can also be overloaded by ++ operator.

    same for loop can be written with auto

    for (auto it = L.begin(); it != L.end(); it++)
    */

    for (list<int>::iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }

    L.clear();

    for (auto v : L)
    // this loop prints nothing because list is cleared
    {
        cout << v << " ";
    }
    return 0;
}