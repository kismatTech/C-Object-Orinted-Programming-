#include <iostream>
using namespace std;
class A
{
    int x, y;

public:
// initialize variables with parameterized constructor
    A(int a)
    {
        x = a;
    }

 // copy constructor with a Wall object as parameter
// copies data of the obj parameter

    A(A &obj)
    {
        cout<<"Copy constructor called"<<endl;
        x = obj.x;
    }
    ~A(){
        cout<<"Destructor Called"<<endl;
    }

    void sum(){
        cout<<"The number is:"<<x<<endl;
    }
}; 

int main()
{
    A obj1(5);
    A obj2(obj1);
    obj2.sum();

    return 0;
}