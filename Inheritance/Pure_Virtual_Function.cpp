#include <iostream>
using namespace std;
class A{  // Abstract Class
    public:
    void virtual display()=0;  // Do- Nothing Function -- Pure Virtual Function
    // aaba yo pure function vayasi derived class ma display nam ko function redefine compulsory hunxa
};

class B: public A{
    public:
    void display(){
        cout<<"The output from class B"<<endl;
    }

};

class C: public A{
    public:
    void display(){
        cout<<"The output from class C"<<endl;
    }

};
int main(){
    // A obj;  // Object of abstract class cannot be created
    B objb;
    C objc;

    A* ptr[2];
    ptr[0] =  &objb;  // Base class pointer to derived class B obj 
    ptr[1] =  &objc;    // Base class pointer to derived class C obj
    ptr[0]->display();  
    ptr[1]->display(); 

return 0;
}