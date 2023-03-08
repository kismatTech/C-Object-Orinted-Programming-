#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Output from A" << endl;
    }
};

class B : public A
{
    public:
    void display()
    {
        cout << "Output from B" << endl;
    }
};

int main()
{

    B obj;
    obj.display(); // it will run display function from class B due to function overriding
    // obj.A::display(); // access display() function of the Base class
    return 0;
}