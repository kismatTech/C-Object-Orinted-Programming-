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

class B : public A     //Derived Class of parent class A
{
    public:
    void displayB()
    {
        cout << "Output from class B"<<endl;
    }
};

class C : public A  //Derived Class of parent class A
{
    public:
    void displayC()
    {
        cout << "Output from class C"<<endl;
    }
};

int main()
{
    B obj;
    C objC;
    obj.displayA();   // Class B ko Object bata class A ko member function run vaxa
    objC.displayA(); // Class B ko Object bata class A ko member function run vaxa

    return 0;
}