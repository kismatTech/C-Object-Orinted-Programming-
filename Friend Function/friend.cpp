#include <iostream>
using namespace std;

class A
{
    int x;
    int y;

public:
    A(int a, int b)
    {
        x = a;
        y = b;
    }

    friend int sum(A obj);
};
int sum(A obj) 
{
    int add = obj.x + obj.y;
    cout << "The sum is" << add << endl;
}
int main()
{
    A obj(5, 6);
    sum(obj);  //Friend function call garda feri argument ma object pass garauna parxa hai babe
    return 0;
}