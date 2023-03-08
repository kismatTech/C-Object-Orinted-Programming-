#include <iostream>
using namespace std;

class A
{
    int age;
    string name;
    public:
    A(string y, int x)
    {
        age = x;
        name = y;
    }

    void dispaly()
    {
        cout << "The name is: " << name << endl;
        cout << "The age is :" << age << endl;
    }
};

int main()
{
    A obj("kismat",20);
    obj.dispaly();
    return 0;
}