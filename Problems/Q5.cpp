#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A() {}
    A(int a)
    {
        x = a;
    }
    void display()
    {
        cout << "The greatest digit is" << x;
    }

    A operator>(A obj)
    {
        A temp;
        if (x > obj.x)
        {
            return x;
        }
        else
            return obj.x;
    }
};

int main()
{
    A obj1(1);
    A obj2(6);
    A obj = obj1 > obj2;
    obj.display();

    return 0;
}