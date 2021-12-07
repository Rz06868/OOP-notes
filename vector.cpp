#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    vector is a dynamic object
    vector<data type> name;

    when a vectrr is created cpp alocates some memory to it. when the vecotrs
    starts populating the memory, and currently allocated memory is full,
    cpp allocates new chuck of memory to the vector.
    */
    vector<int> intVector = {0, 1, 4, 7, 8, 5, 2, 3, 6, 9};

    // to add element at the last position push_back() is used
    intVector.push_back(10);

    for (int val : intVector)
    {
        cout << val << " ";
    }

    // size() returns size of the vector
    cout << endl
         << "size of vector is " << intVector.size() << endl;

    cout << "value at front is " << intVector.front() << endl;      // front() returns value at 0 position
    cout << "value at back is " << intVector.back() << endl;        // back() returns value at last position
    cout << "value at 5th position is " << intVector.at(5) << endl; // at(i) returns value at ith position, it can also be accesed by [] acces specifier
    intVector.pop_back();                                           // pops value at the back

    return 0;
}