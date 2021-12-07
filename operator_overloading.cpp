#include <iostream>
using namespace std;

class Counter
{
private:
    int count;

public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}

    void show()
    {
        cout << "Count = " << count << endl;
    }

    // prefix form
    void operator++()
    {
        count++;
    }

    void operator--()
    {
        if (count > 0)
        {
            count--;
        }
    }

    // postfix form
    void operator++(int)
    // int is just to make postfix
    {
        count++;
    }

    void operator--(int)
    {
        if (count > 0)
        {
            count--;
        }
    }

    // binary operators
    // An operator can be define multiple times, with varying the argument type.
    Counter operator+(Counter c)
    {
        return Counter{count + c.count};
    }

    Counter operator+(int x)
    {
        return Counter{count + x};
    }

    void operator+=(Counter c)
    {
        count += c.count;
    }

    friend void testFunction(Counter);
    friend void operator-=(Counter, int);
    friend ostream &operator<<(ostream &, Counter);
    friend istream &operator>>(istream &, Counter);
};

void testFunction(Counter C)
{
    cout << "count is " << C.count << endl;
}

void operator-=(Counter C, int x)
{
    C.count -= x;
}

ostream &operator<<(ostream &out, Counter C)
/*
show() works same as cout for Counter objects,
we can also overload the cout operator.
cout is the object of ostream class,
we have to pass it by refernce otherwise compiler won't compile
*/
{
    cout << C.count;
    return out;
}

istream &operator>>(istream &in, Counter C)
{
    int x;
    cin >> x;
    C.count = x;
    return in;
}

int main()
{
    Counter c;

    c.show();
    c++;
    c.show();
    ++c;
    c.show();
    c--;
    c.show();
    --c;
    c.show();

    c++;
    c++;

    Counter c1 = {10};

    /*
    In the case of binary operator, the call is made through object
    on left side of operator.
    */
    Counter C = c + c1;

    C.show();

    c1 += C;

    c1.show();

    cout << "c1 count from cout << operator: ";
    cout << c1;
    return 0;
}