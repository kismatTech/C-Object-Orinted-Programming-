#include <iostream>
using namespace std;

class A
{
    int age;
    string name;
    public:
    A(string y, int x);

    void dispaly()
    {
        cout << "The name is: " << name << endl;
        cout << "The age is :" << age << endl;
    }
};
    A:: A(string y, int x) //Constructor Outside the class
    {
        age = x;
        name = y;
    }

int main()
{
    A obj("kismat",20);
    obj.dispaly();
    return 0;
}