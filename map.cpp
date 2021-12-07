#include <iostream>
#include <map>
using namespace std;

/*
map is a cpp structure which stores data in a key-value pair,
same as dictionary in python.

map contain a pair type elements, pair contians a key an associated
value to it.

map sorts the data on the basis of keys.
*/

int main()
{
    map<int, string> m;

    m[0] = "Zero"; // to insert value against some key
    m[1] = "One";
    m[2] = "Two";

    m.insert({3, "Three"}); // function to insert pair. The value must be in order

    /*
    find() is an itterator. we can also search any key value pair
    by [] access specifier. The problem is this when a key is not
    in the map, cpp creates the key and assign it a null value.
    find() does not do that.

    at(i) is also used to search key, it creates an error when key is
    not in the list.
    */

    if (m.find(4) != m.end())
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }

    for (auto element : m)
    {
        cout << "key: " << element.first << ", "
             << "value: " << element.second << endl;
    }
    return 0;
}