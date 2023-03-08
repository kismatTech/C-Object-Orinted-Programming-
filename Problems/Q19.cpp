#include <iostream>
using namespace std;
class Complex{
    int i;
    int j;
    public:
    Complex(){}
    Complex(int a, int b){
        i=a;
        j=b;
    }
   friend void sum(Complex A, Complex B);
};
 void sum(Complex A, Complex B){
    Complex temp;
    temp.i = A.i+B.i;
    temp.j = A.j+B.j;
    cout<<"The sum of complex number is"<<temp.i<<"+"<<temp.j<<"i";
}
int main(){
    Complex objA(2,3);
    Complex objB(2,5);
    sum(objA, objB);
return 0;
}