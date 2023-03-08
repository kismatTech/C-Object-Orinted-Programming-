#include <iostream>
using namespace std;

    class A{ //Base Class

    public:
    void fun(){
        cout<<"From Base Class"<<endl;
    }

    };
    class B: public A{  // Derived Class
        public:
    void funB(){
        fun();
        cout<<"From Derived Class"<<endl;
    }

    };

int main(){
    B obj;
    A objA;
    obj.funB(); //Fun is member function of class A  but it is called from object of class B
return 0;
}