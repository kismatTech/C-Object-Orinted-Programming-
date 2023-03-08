// SUM of Two Different Class using friend function

#include <iostream>
using namespace std;

class B; // forward declaration 

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    friend void sum(A objA, B objB);
};
class B
{
    int b;

public:
    B(int y)
    {
        b = y;
    }
    friend void sum(A objA, B objB);
};

void sum(A objA, B objB)
{
    int add = objA.a + objB.b;
    cout<<"The sum is"<<add<<endl;
}

int main()
{
    A objA(5);
    B objB(6);
    sum(objA, objB);

    return 0;
}