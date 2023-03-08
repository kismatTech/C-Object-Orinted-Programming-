#include <iostream>
using namespace std;

class A
{
    // class is a userdefine datatype that holds variables and functions

    int Age; // They are data members
    string name;

public:
    void getdata()
    {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your Age" << endl;
        cin >> Age;
    }

    void display()
    {
        cout << "The name is: " << name << endl;
        cout << "The Age is: " << Age << endl;
    }
};
int main()
{
    A obj;
    obj.getdata();
    obj.display();
    return 0;
}