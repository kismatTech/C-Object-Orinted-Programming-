// Destructor is used to release dynamically allocated memory and avoid memory leakage ?
#include <iostream>
using namespace std;
class A
{
    int *ptr;
public:
    A()
    {
        ptr = new int;
        cout << "Memory Allocated Dynamically" << endl;
    }
    ~A()
    {
        delete ptr;
        cout << "Memory is released" << endl;
    }
};
int main()
{
    A obj;
    return 0;
}