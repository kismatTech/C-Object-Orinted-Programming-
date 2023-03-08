// WAP TO CONVERT METER INTO FEET AND INCHES
// BASIC TO CLASS TYPE
// 1meter = 3.3feet
// 1foot = 12 inches

#include <iostream>
using namespace std;
class A{
    int feet;
    float inch;
    public:
    A(){}
    A(float m){
        float f = m*3.3;
        feet = int(f);
        inch = (f - feet)*12;
    }
    void display(){
        cout<<"The value in Feet is "<<feet<<endl;
        cout<<"The value in Inches is "<<inch<<endl;
    }
};
int main(){
    A obj;
    float meter;
    cout<<"Enter the length in meter"<<endl;
    cin>>meter;
    obj = meter;
    obj.display();
return 0;
}