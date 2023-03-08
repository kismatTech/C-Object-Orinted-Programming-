#include <iostream>
using namespace std;

class A{
    int a; int b;
    public:
    A(){}
    A(int x, int y){
        a=x;
        b=y;
    }

    void display(){
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }

    A operator +(A obj){
        A temp;
        temp.a = a+obj.a;
        temp.b = b+obj.b;
        return temp;
    }
};

int main(){
    A obj1(5,6);
    A obj2(1,2);
    A obj3(6,2);
    A obj4;

    obj4 = obj1+obj2+obj3;
    obj4.display();

return 0;
}