#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}

    void show()
    {
        cout << "The distance is: " << feet << "'" << inches << "\"" << endl;
    }
};

int main()
{
    /*
    pointers stores memory addresses. They need to know the type
    they are pointing, because of they want to know the type of
    object they are derefrencing.
    */
    Distance *distancePtr; //making pointer of Distance type

    distancePtr = new Distance(5, 10); // dynamically making Distance type object and stroing it in the pointer

    distancePtr->show(); // to manipulate an object by its pointer we use -> symbole instead of .

    delete distancePtr; // deleting the pointer

    /*
    compiler will not notify when the pointer is not deleted,
    but for performance and memory optimization of the program,
    we need to delete it.
    */

    Distance *distanceArrayPtr;

    distanceArrayPtr = new Distance[10];

    return 0;
}