#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;
    /*
    static attributes are created once for every object.
    they are same for all objects.
    */
    static int count;

public:
    Distance(int f, int i) : feet(f), inches(i)
    {
        count++;
    }

    void show()
    {
        cout << "The distance is: " << feet << "'" << inches << "\"" << endl;
        cout << "Total distance objects are: " << count << endl
             << endl;
    }

    static void showTotal()
    /*
    static function are shared by all ibjects of the class.
    They are often called class functions. we can call them by
    any object or by class also.
    */
    {
        cout << "Total distance objects are: " << count << endl;
    }
};

int Distance::count = 0;

int main()
{
    Distance d1 = {2, 3};
    Distance d2 = {3, 9};
    Distance d3 = {6, 2};
    Distance d4 = {1, 7};

    d1.show();
    d2.show();
    d3.show();
    d4.show();

    d1.showTotal();        // calling by object
    Distance::showTotal(); // calling by class

    return 0;
}