#include <iostream>
using namespace std;

/*
No memory has been utilized, because no variable has been created.
*/

struct Distance
{
    int feet;
    int inches;
};

struct Rectangle
{
    Distance length;
    Distance width;
};

void adjust(Distance dist[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (dist[i].inches > 11)
        {
            dist[i].feet += dist[i].inches / 12;
            dist[i].inches %= 12;
        }
    }
}

int main()
{
    Distance d1;   // creating distance type variable
    d1.feet = 6;   // assigning value to feets
    d1.inches = 1; // assigning value to inches

    cout << "The distance of d1: " << d1.feet
         << "'" << d1.inches << "\"" << endl
         << endl;

    Distance d2 = {5, 7}; /* d2 is initialized in order by which
                           they are crated inside the structure */
    cout << "The distance of d2: " << d2.feet
         << "'" << d2.inches << "\"" << endl
         << endl;

    d2 = {4, 11}; // structure overwriting
    cout << "The distance of d2 after overwriting: "
         << d2.feet << "'" << d2.inches << "\"" << endl
         << endl;

    d1 = d2; // copying d2 to d1
    cout << "The distance of d1 after copying: "
         << d2.feet << "'" << d2.inches << "\"" << endl
         << endl;

    Rectangle R = {{2, 3}, {3, 5}}; // initializing rectangle type variable
    cout << "Rectangle length: " << R.length.feet
         << "'" << R.length.inches << "\"" << endl;
    cout << "Rectangle width: " << R.width.feet
         << "'" << R.width.inches << "\"" << endl
         << endl;

    Distance dist[5]; // Distance type array
    // every member of this array is a Distance type variable
    for (int i = 0; i < 5; i++)
    {
        dist[i] = {3 * i, i + 1};
    }

    for (int i = 0; i < 5; i++)
    {
        cout << dist[i].feet << "'"
             << dist[i].inches << "\"" << endl;
    }
    cout << endl;

    Distance dist1[5];
    for (int i = 0; i < 5; i++)
    {
        // another valid assignment
        dist1[i].feet = 3 * i;
        dist1[i].inches = i + 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << dist1[i].feet << "'"
             << dist1[i].inches << "\"" << endl;
    }
    cout << endl;

    // another valid initialization
    Distance dist2[5] = {
        {1, 2},
        {8, 15},
        {4, 1},
        {6, 12},
        {5, 13},
    };

    adjust(dist2, 5); // caliing a function with Ditance type array as an input

    for (int i = 0; i < 5; i++)
    {
        cout << dist2[i].feet << "'" << dist2[i].inches << "\"" << endl;
    }
    return 0;
}