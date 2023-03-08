#include <iostream>
using namespace std;
class A{
    int x;
    public:
    A(){}
    A(int a){
        x=a;
    }

    A operator --(){
        A temp;
        temp.x = --x;
        return temp;
    }
    void display(){
        cout<<"The value of --X is"<<x<<endl;
    }
};
int main(){
    A obj(5);
    A obj1= --obj;
    obj1.display();

return 0;
}