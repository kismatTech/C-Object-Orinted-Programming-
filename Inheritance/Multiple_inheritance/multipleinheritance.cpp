#include <iostream>
using namespace std;

class A   // Base Class
{
public:
    void displayA()
    {
        cout << "Output from class A"<<endl;
    }
};

class B     // Base Class
{
    public:
    void displayB()
    {
        cout << "Output from class B"<<endl;
    }
};

class C : public A, public B  //Derived Class of two parent class A & B
{
    public:
    void displayC()
    {   
        displayA();
        displayB();
        cout << "Output from class C";
    }
};

int main()
{
    C obj;
    obj.displayC();

    return 0;
}
