#include <iostream>
using namespace std;

class A{
    int a;
public:
    A(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "The value of a is" << a << endl;
    }
};

class B{
    int b;
    string d;
public:
    B(int y, string z)
    {
        b = y;
        d = z;
    }
    void display()
    {
        cout << "The value of b is" << b << endl;
        cout << "The Name is" << d << endl;
    }
};

class C : public A, public B{

    int c;
public:
    C(int k, int l, int m, string n) : A(l), B(m, n)
    {
        c = k;
    }
    void displayC()
    {
        // A::display();
        // B::display();
        cout << "The value of c is" << c << endl;
    }
    // void sum(){
    //     int sum = a+b+c+d;
    // }
};

int main()
{

    C obj(2,3,4,"Kismat");
    // obj.display(); // Ambigious
    obj.A::display();  //Ambiguity solved in multiple inheritance using scope resolution operator
    obj.B::display();

    return 0;
}