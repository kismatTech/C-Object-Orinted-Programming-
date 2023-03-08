// celsius to fahrenheit
// C2B
#include <iostream>
using namespace std;
class A{
    float celsius;
    public:
    void getdata(){
        cout<<"ENter celsius"<<endl;
        cin>>celsius;
    }   
    operator float(){
        float f = (celsius*1.8) + 32;
    return f;
    }

};
int main(){
    A obj;
    obj.getdata();
    float faherenheit = obj;
    cout<<"The degree in fahrenheit is"<<faherenheit<<endl;
return 0;
}