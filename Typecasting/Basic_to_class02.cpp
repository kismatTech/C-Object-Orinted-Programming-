#include <iostream>
using namespace std;

class A
{
    float cm;

public:
    A() {}
    A(float x)
    {
        float cm = x * 2.54;
    }
    void display()
    {
        cout << "The inches in centimeter is" << cm << endl;
    }
};

int main()
{
    A obj;
    float inches;
    cout << "Enter the inches" << endl;
    cin >> inches;
    obj = inches;
    obj.display();
    return 0;
}