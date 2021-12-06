#include <iostream>
using namespace std;

/*
ennum is a user defined type for limited range of values,
where values can be called from their names.
*/

enum
{
    MONDAY,    // value of MONDAY is 0
    TUESDAY,   // value of TUESDAY is 1
    WEDNESDAY, // value of WEDNESDAY is 2
    THURSDAY,  // value of THURSDAY is 3
    FRIDAY,    // value of FRIDAY is 4
    SATURDAY,  // value of SATURDAY is 5
    SUNDAY,    // value of SUNDAY is 6
};

int main()
{
    // giving each day of the week a number
    cout << 0 << " : Monday" << endl;
    cout << 1 << " : Tuesday" << endl;
    cout << 2 << " : Wednesday" << endl;
    cout << 3 << " : Thursday" << endl;
    cout << 4 << " : Friday" << endl;
    cout << 5 << " : Saturday" << endl;
    cout << 6 << " : Sunday" << endl;

    int choice;
    // asking user for the their choice and printing it
    cin >> choice;
    if (choice == 0)
    {
        cout << "Monday" << endl;
    }
    else if (choice == 1)
    {
        cout << "Tuesday" << endl;
    }
    else if (choice == 2)
    {
        cout << "Wednesday" << endl;
    }
    else if (choice == 3)
    {
        cout << "Thursday" << endl;
    }
    else if (choice == 4)
    {
        cout << "Friday" << endl;
    }
    else if (choice == 5)
    {
        cout << "Saturday" << endl;
    }
    else if (choice == 6)
    {
        cout << "Sunday" << endl;
    }

    // very same situation can be delat with enum data type

    cout << endl
         << "enum situation" << endl
         << endl;

    cout << MONDAY << " : Monday" << endl;
    cout << TUESDAY << " : Tuesday" << endl;
    cout << WEDNESDAY << " : Wednesday" << endl;
    cout << THURSDAY << " : Thursday" << endl;
    cout << FRIDAY << " : Friday" << endl;
    cout << SATURDAY << " : Saturday" << endl;
    cout << SUNDAY << " : Sunday" << endl;

    // asking user for the their choice and printing it
    cin >> choice;
    if (choice == MONDAY)
    {
        cout << "Monday" << endl;
    }
    else if (choice == TUESDAY)
    {
        cout << "Tuesday" << endl;
    }
    else if (choice == WEDNESDAY)
    {
        cout << "Wednesday" << endl;
    }
    else if (choice == THURSDAY)
    {
        cout << "Thursday" << endl;
    }
    else if (choice == FRIDAY)
    {
        cout << "Friday" << endl;
    }
    else if (choice == SATURDAY)
    {
        cout << "Saturday" << endl;
    }
    else if (choice == SUNDAY)
    {
        cout << "Sunday" << endl;
    }

    return 0;
}