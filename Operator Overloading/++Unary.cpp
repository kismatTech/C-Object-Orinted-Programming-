#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(){}
    A(int a){
        x=a;
    }

    void display(){
        cout<<"The value of x is:"<<x<<endl;
    }

    A operator ++(){
        ++x;
        // return ++x;
        // A temp;
        // temp.x = ++x;
        // return temp;
    }
    A operator--(){
        --x;
    }
};

int main(){
    A obj(5);
    ++obj;
    obj.display();
    --obj;
    obj.display();

return 0;
}