#include <iostream>

/*
ennum is a user defined type for limited range of values,
where values can be called from their names.
*/

enum {
        MONDAY,     // value of MONDAY is 0
        TUESDAY,    // value of TUESDAY is 1
        WEDNESDAY,  // value of WEDNESDAY is 2
        THURSDAY,   // value of THURSDAY is 3
        FRIDAY,     // value of FRIDAY is 4
        SATURDAY,   // value of SATURDAY is 5
        SUNDAY,     // value of SUNDAY is 6
};

int main() {
        // giving each day of the week a number
        std::cout << 0 << " : Monday" << std::endl;
        std::cout << 1 << " : Tuesday" << std::endl;
        std::cout << 2 << " : Wednesday" << std::endl;
        std::cout << 3 << " : Thursday" << std::endl;
        std::cout << 4 << " : Friday" << std::endl;
        std::cout << 5 << " : Saturday" << std::endl;
        std::cout << 6 << " : Sunday" << std::endl;

        int choice;
        // asking user for the their choice and printing it
        std::cin >> choice;
        if (choice == 0)
                std::cout << "Monday" << std::endl;
        else if (choice == 1)
                std::cout << "Tuesday" << std::endl;
        else if (choice == 2)
                std::cout << "Wednesday" << std::endl;
        else if (choice == 3)
                std::cout << "Thursday" << std::endl;
        else if (choice == 4)
                std::cout << "Friday" << std::endl;
        else if (choice == 5)
                std::cout << "Saturday" << std::endl;
        else if (choice == 6)
                std::cout << "Sunday" << std::endl;

        // very same situation can be delat with enum data type

        std::cout << std::endl << "enum situation" << std::endl << std::endl;

        std::cout << MONDAY << " : Monday" << std::endl
                  << TUESDAY << " : Tuesday" << std::endl
                  << WEDNESDAY << " : Wednesday" << std::endl
                  << THURSDAY << " : Thursday" << std::endl
                  << FRIDAY << " : Friday" << std::endl
                  << SATURDAY << " : Saturday" << std::endl
                  << SUNDAY << " : Sunday" << std::endl;

        // asking user for the their choice and printing it
        std::cin >> choice;
        if (choice == MONDAY)
                std::cout << "Monday" << std::endl;
        else if (choice == TUESDAY)
                std::cout << "Tuesday" << std::endl;
        else if (choice == WEDNESDAY)
                std::cout << "Wednesday" << std::endl;
        else if (choice == THURSDAY)
                std::cout << "Thursday" << std::endl;
        else if (choice == FRIDAY)
                std::cout << "Friday" << std::endl;
        else if (choice == SATURDAY)
                std::cout << "Saturday" << std::endl;
        else if (choice == SUNDAY)
                std::cout << "Sunday" << std::endl;

        return 0;
}