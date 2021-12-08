#include <iostream>

// Base class
class Vehicle
{
    /*
    protected attributes are accessible inside class
    as well as in child of the class too.
    */
protected:
    string brand;

public:
    void honk()
    {
        std::cout << "Tuut, tuut!" << std::endl;
    }

    void info()
    {
        std::cout << "This is a " << brand;
    }

    string getBrand()
    {
        return brand;
    }

    Vehicle(string b) : brand(b)
    {
        std::cout << "I'm in Base class constructor" << std::endl;
    }
};

/*
We choose inheritance in a situation when there
is "is-a" relationship among classes.

Car is a Vehcile.
Manager is an Employee.
Dog is an Animal.
*/

// Derived class
class Car : public Vehicle
{
    /*
    private attributes defined in parent class will not
    be accessible in child class as well.
    */
protected:
    string model;

public:
    /*
    defining function with same name in same class with
    different attributes is function overloading.

    defining function of base/parent class again in the
    derived/child class with same attributes and return
    type is called function overridding.

    info() was defined in both parent and child class.
    It is overridded in child class.

    It's always a good idea to over-ride the functions,
    so that they may be used in child classes with same
    name as of parent.
    */
    void info()
    {
        Vehicle::info();
        std::cout << " " << model << std::endl;
    }

    string getModel()
    {
        return model;
    }

    /*
    A parent class constructor can be delegated
    in child class constructor only in initializer list.
    */
    Car(string b, string m) : Vehicle(b), model(m)
    {
        std::cout << "I'm in Child class constructor" << std::endl;
    }
};

int main()
{
    Car myCar("Ford", "Mustang");
    myCar.honk(); // calling function of base class from child class
    std::cout << myCar.getBrand() + " " + myCar.getModel();
    return 0;
}