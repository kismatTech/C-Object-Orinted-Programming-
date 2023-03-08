// constrructor is called in derived class but it cant be inherited?

#include <iostream>
using namespace std;
class A{ //Base class
    int x;
    public:
    A(int a){
        x=a;
    }
    void display(){
        cout<<"The vlaue of x is"<<x<<endl;
    }
};
class B: public A{  // Derived Class
   
    int y;
    public:
    void getdata(){
       cout<<"Enter vali"<<endl;
       cin>>y;
    }
    // B(int a, int b):A(b){
    //     y=a;
    // }

};
int main(){
A obj(5);
B objb;
objb.getdata();
obj.display();
return 0;
}
