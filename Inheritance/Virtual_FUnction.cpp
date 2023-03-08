#include <iostream>
using namespace std;
class A{
    public:
    void virtual display(){
        cout<<"The output from class A"<<endl;
    }
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
    A obj;
    B objb;
    C objc;

    A* ptr[2];
    ptr[0] =  &objb;  // Base class pointer to derived class B obj 
    ptr[1] =  &objc;    // Base class pointer to derived class C obj
    ptr[0]->display();  // Class A ma virtual function xa so pointer jun object ma point vaxa teskai display function run garxa
    ptr[1]->display(); 

return 0;
}