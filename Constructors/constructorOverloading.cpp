#include <iostream>
using namespace std;

class A
{
    int a, b;

public:

    A()
    {
        a=0;
        b=0;
    }
    A(int x)  //Parameterized Constructor with single argument
    {
        a = x;
        b=0;
    }
    A(int x, int y)  // Parameterized Constructor with double argument
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The value of a is:" << a << endl;
        cout << "The value of b is:" << b << endl;
    }
};

int main()
{
    A obj;
    A obj1(5);
    A obj2(5,6);

    obj.display();
    obj1.display();
    obj2.display();

    return 0;
}