//Ambiguity Error

#include <iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"Output from class A"<<endl;
    }
};
class B{
public:
    void display(){
        cout<<"Output from class B"<<endl;
    }
};
class C:public A, public B{
public:
    void displayC(){
        cout<<"Output from class C"<<endl;
    }
};
int main(){
    
    C obj;
    // obj.display(); // Here the function is ambigious
    // it can be resolved by
    obj.A::display(); 
    // Ambigious is resolved in multiple inheritance is solved by scope resolutiion operator
return 0;
}