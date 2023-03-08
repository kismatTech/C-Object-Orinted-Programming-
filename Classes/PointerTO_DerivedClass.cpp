#include <iostream>
using namespace std;
class A{
    public:
    int x;
    void display(){
        cout<<"Displaying Base classs:The value of X is"<<x<<endl;
    }
};

class B: public A{
    public:
    int y;
    void display(){
        cout<<"Displaying Base classs:The value of X is"<<x<<endl;
        cout<<"Displaying Derived classs: The value of y is"<<y<<endl;
    }
};
int main(){
    A *ptr;  // Base Class Pointer
    A obj;  // Base class object
    B objb; // Derived class object
    ptr = &objb;    //Pointing base class pointer to derived class
    ptr->x=6;           
    //Base class ko pointer derived class ko obj sita point vayani derived class ko members access garna sakdena
    ptr->display();

    //But Derived class ko pointer derived class ko obj sita point garda Base ka members access garna sakinxa hai...
    cout<<"\n";
    B *ptrB; //Base class Pointer 
    ptrB= &objb;    //Pointing Base class pointer to base class obj
    ptrB->y =80;
    ptrB->x =2;
    ptrB->display();
return 0;
}