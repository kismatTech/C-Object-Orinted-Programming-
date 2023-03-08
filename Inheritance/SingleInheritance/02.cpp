#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int a)
    {
        x = a;
    }

    void display()
    {
        cout << "The value of x is" << x << endl;
    }
};

class B : public A
{
    int b;

public:
    B(int x, int y) : A(y)
    {
        b = x;
    }
    void display()
    {
        A::display();
        cout << "The value of y is" << b;
    }
};

int main()
{
    B obj(2,3);
    obj.display();
    return 0;
}