#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int &b = a;
    // here b is reference variable of a. which mean that both vaiable location is same but only name is different.
    cout << "The initial value of a is: " << a << endl;

    // If we change the value of b, the value of both a&b will be changed
    b = 9;
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    // From above it is clear that b and a are the same but only name is different
    return 0;
}