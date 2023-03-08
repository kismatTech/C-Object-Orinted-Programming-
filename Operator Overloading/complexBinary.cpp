#include <iostream>
using namespace std;

class A
{
    int real;
    int img;

public:
    A() {}
    A(int x, int y)
    {
        real = x;
        img = y;
    }

    void display()
    {
        cout << real << "+" << img << "j" << endl;
    }

    A operator+(A obj)
    {
        A temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }
};

int main()
{
    A obj1(5, 6);
    A obj2(1, 2);
    A obj3(6, 2);
    A obj4;

    obj4 = obj1 + obj2 + obj3;
    obj4.display();

    return 0;
}