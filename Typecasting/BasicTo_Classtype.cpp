#include <iostream>
using namespace std;

class A{
    // int feet;
    float f;
    public:
    A(){}
    A(float c){
        float f = (c*1.8)+32;
    }
    void display(){
        cout<<"The converted temperature is"<< f<<endl;
        }
};

int main(){
    A obj;
    float celsius;
    cout<<"Enter the temp"<<endl;
    cin>>celsius;
    obj=celsius;
    obj.display();


return 0;
}