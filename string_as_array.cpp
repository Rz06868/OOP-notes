#include <iostream>
#include <string.h> // header for strings
#include <string>   //cpp file
using namespace std;

int main()
{
    /*
    in earlier version of c char array aws string.
    */

    char str[10] = "Hello";

    /*
    in the last of every char array, there is a null char.
    the ascii value of null char is 0
    */

    cout << str[5] << endl; // it will print as a blank

    for (int i = 0; str[i] != 0; i++)
    {
        cout << str[i] << " ";
    }
    cout << endl;

    /*
    we can also make string by assiging values to char array.
    when the string ends assign 0 to next element.
    */

    char str1[10];

    str1[0] = 'A';
    str1[1] = 'B';
    str1[2] = 'C';
    str1[3] = 0;

    cout << str1 << endl;

    /*
    this simple task can also be acheived by string.h file.
    it contains a function strcpy(str1, str2).
    it copies values of str2 to str1.
    */

    char str2[10] = "abc";
    cout << "str2: " << str2 << endl;

    cout << "str1 before being copied: " << str1 << endl;

    strcpy(str1, str2); // from string.h header file

    cout << "str1 after being copied: " << str1 << endl
         << endl;

    /*
    the problem with cahr array is its limited flexibility.
    arrays can not be added nor they can be manipulated easily.
    Also they can not be equated to another array.

    std::string class
    There is no need to put size in it.
    string manages it by its own.
    */

    string s1 = "Today";    // initialization
    string s2("Wednesday"); // initialization
    string s3;
    s3 = "Sunnday"; // assignment

    if (s3 == "Sunday")
    {
        cout << "Its a fun day" << endl;
    }

    s3 = s1 + " is " + s3;

    cout << s3 << endl;

    cout << "length of the string is " << s3.length() << endl; //'length() returns the length of the string

    return 0;
}