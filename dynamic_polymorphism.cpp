#include <iostream>
using namespace std;

class Animal
{
public:
    /*
    By making the funtion virtual, when an animal type pointer
    pointing Cat, Dog or Cow type object and makeSound function
    is called, the pointer doesn't check the parent class function,
    but checks the child class function.

    = 0 makes a virtual function pure virtual function. By making a
    one pure virtual function in a class makes it an abstract class.

    Abstract class means the class is there to define common feature.
    Object of abstract class can not be instantiated.
    */
    virtual void makeSound() = 0;
};

/*
most of the time pure virtual functions don't have body, but sometime
we want to have. the method is to override the function outside the class.
*/
void Animal::makeSound()
{
    cout << "No sound" << endl
         << endl;
}

class Cat : public Animal
{
public:
    void makeSound()
    {
        cout << "Meow Meow" << endl
             << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound()
    {
        cout << "Wuff Wuff" << endl
             << endl;
    }
};

class Cow : public Animal
{
public:
    void makeSound()
    {
        cout << "Moo Moo" << endl
             << endl;
    }
};

int main()
{
    Animal *animalPtr = new Cat();
    animalPtr->makeSound();

    delete animalPtr;

    animalPtr = new Dog();
    animalPtr->makeSound();

    delete animalPtr;

    animalPtr = new Cow();
    animalPtr->makeSound();

    delete animalPtr;

    return 0;
}