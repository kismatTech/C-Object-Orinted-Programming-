#include <iostream>
using namespace std;

class A   // Base Class
{
public:
    void display()
    {
        cout << "Output from class A";
    }
};

class B     // Base Class
{
    public:
    void display()
    {
        cout << "Output from class B";
    }
};

class C : public A, public B  //Derived Class of two parent class A & B
{
    public:
    void displayC()
    {
        cout << "Output from class C";
    }
};

int main()
{
    C obj;
    // obj.display(); // This will through ambiguity error
    // Both parent class ma eeutai naam ko member function xa so Derived Class C ko object le kun run garauni confuse hunxa ani chai ambiguity error through garxa.

    obj.A::display(); 
    // Ambiguity Hatauna lai Scoperesolution Operator"::" use hunxa

    return 0;
}