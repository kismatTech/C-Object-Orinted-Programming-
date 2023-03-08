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

class B : virtual public A    //Derived Class of parent class A
{
    public:
    void display()
    {
        cout << "Output from class B";
    }
};

class C : virtual public A  //Derived Class of parent class A
{
    public:
    void display()
    {
        cout << "Output from class C";
    }
};
class D : public B , public C  //Derived Class of two parent class B & C
{
    public:
    void displayD()
    {
        cout << "Output from class D";
    }
};



int main()
{
    D obj;
    // obj.display(); // This will through ambiguity error
    obj.A::display(); 
    // Ambiguity Hatauna lai Virtual function and Scoperesolution Operator"::" use hunxa

    return 0;
}