#include <iostream>
using namespace std;

void increment(int B[])
{
    for (int i = 0; i < 5; i++)
    {
        B[i]++;
    }
}

int main()
{
    int A[] = {5, 2, 3, 9, 10}; // array without size
    increment(A);
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}