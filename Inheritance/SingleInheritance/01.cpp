#include <iostream>
using namespace std;

class A{ //Base class
    int x, y;  // Datamembers
public:
    A(int m, int n)  //constructors
    {
        x = m;
        y = n;
    }

    void print()
    {
        cout << " value of x = " << x << endl;
        cout << " value of y = " << y << endl;
    }
};

class B: public A
{
    float i, j;
    public:
    B(float a, float b,int m, int n): A(m, n)
    {
        i = a;
        j = b;
    }

    void show(void)
    {
        print(); 
        cout << " value of i = " << i << endl;
        cout << " Value of j = " << j << endl;
    }
};
main()
{
   B obj(29.4, 56.3, 5, 7);
   obj.show();
   return 0;
}