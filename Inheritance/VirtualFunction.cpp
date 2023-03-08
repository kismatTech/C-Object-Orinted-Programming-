#include <iostream>
using namespace std;
class A{
    public:
    void virtual display(){  //Virtual Function le garda late binding hunxa so.. derived class ko function run huni vo
    //if virtual function hunthyana vane base class ko function run huni thyeo
        cout<<"Output from base class"<<endl;
    }
};
class B: public A{

    void display(){
        cout<<"Output from derived class"<<endl;
    }
};
int main(){
    A *ptr;
    A obj;
    B objb;
    ptr = & objb;
    ptr->display();
return 0;
}