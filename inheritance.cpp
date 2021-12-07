#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    string brand;

    void honk()
    {
        cout << "Tuut, tuut!\n";
    }

    Vehicle(string b) : brand(b)
    {
        cout << "I'm in Base class constructor" << endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    string model;
    /*
    A parent class constructor can be delegated
    in child class constructor only in initializer list.
    */
    Car(string b, string m) : Vehicle(b), model(m)
    {
        cout << "I'm in Child class constructor" << endl;
    }
};

int main()
{
    Car myCar = {"Ford", "Mustang"};
    myCar.honk(); // calling gunction of base class from child class
    cout << myCar.brand + " " + myCar.model;
    return 0;
}