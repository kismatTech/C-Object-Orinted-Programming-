#include <iostream>
using namespace std;
class A{
    int phone;
    string name;
    public:
    A(){}
    A(int x, string y){
        phone =x;
        name=y;
    }
    void displayA(){
        cout<<"The name is "<<name<<endl;
        cout<<"The Phone number is "<<phone<<endl;
    }

};

class B: public A{
    int id;
    public:
    B(int z, int x, string y):A(x,y){
        id = z;
    }

    void display(){
        displayA();
        cout<<"The id is "<<id<<endl;
    }

};

class C: public A{
    int z;
    public:
    C(int a, int b, string c):A(b,c){
        z=a;
    }
    void display(){
        displayA();
        cout<<"The value is"<<z<<endl;
    }
};
int main(){
   
B objB(10,15,"Kismat");
C objC(100,15,"Ram");

cout<<"Display from object B"<<endl;
objB.display();

cout<<endl;
cout<<"Display from object C"<<endl;
objC.display();

return 0;
}