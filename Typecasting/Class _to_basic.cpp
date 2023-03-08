// 12inches = 1meter

// 1 feet = 

#include <iostream>
using namespace std;

class A
{
    int feet;
    float inches;

public:
    void getdata()
    {
        cout << "Enter the length in feet" << endl;
        cin >> feet;
        cout << "Enter the length in inches" << endl;
        cin >> inches;
    }

    operator float()
    {
        float f = feet + (inches / 12);
        float m = f / 3.3;
        return m;
    }
};

int main()
{
    A obj;
    obj.getdata();
    float meter;
    meter = obj;
    cout << "The given feet and inches in meter is" << meter << endl;
    return 0;
}