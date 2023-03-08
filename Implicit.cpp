// The type conversion that is done automatically done by the compiler is known as implicit type conversion.

#include <iostream>
using namespace std;

int main(){

int x;

float y=5.6;

    // implicit conversion
   // assigning a float value to an int variable
x=y;
cout<<"The value of x is:"<<x<<endl;
cout<<"The value of y is:"<<y<<endl;

return 0;
}