#include <iostream>
using namespace std;

class Complex{

    int i,j;

    public:
    Complex(){}
    Complex(int a, int b){
        i=a;
        j=b;
    }
    void display(){
        cout<<i<<"+"<<j<<"i"<<endl;
    }

    Complex operator+(Complex A){
        Complex temp;
        temp.i = i + A.i;
        temp.j = j + A.j;
        return temp;
    }


};

int main(){
Complex obj1(4,2);
Complex obj2(3,2);
Complex obj = obj1 + obj2;
obj.display();
return 0;
}