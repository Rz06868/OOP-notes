#include <iostream>
using namespace std;

int main()
{
    int array[] = {0, 1, 4, 7, 8, 5, 2, 3, 6, 9};

    cout << "array[] = {";
    /*
    range based loops works same as we do in python. for example to itterate
    over the elements of a list number by using a dumy variable n we write

    for n in number:

    in cpp the syntax goes as,

    for (<data-type of elements> <name of dumy variable>: <object on which itterating>)

    for below example, array is an int type array, so the type of dumy
    variable is also int.
    */
    for (int arrayElement : array)
    {
        cout << arrayElement << ", ";
    }
    cout << "}" << endl;

    /*
    if you want to cahnge the values in the array inside the loop,
    then pass dumy variable by reference.
    */

    cout << "array[] = {";
    for (int &arrayElement : array)
    {
        arrayElement = 0;
        cout << arrayElement << ", ";
    }
    cout << "}" << endl;
    return 0;
}