// WAP TO CONVERT METER INTO FEET AND INCHES
// CLASS TYPE TO BASE TYPE

#include <iostream>
using namespace std;
class A{
    int feet;
    float inch;
    public:
    A(int f, float i){
        feet = f;
        inch = i;
    }

    operator float(){
        float f = feet + (inch/12);
        float m= f/3.3;
        return m;
    }

};
int main(){
    A obj(5,2);
    float meter;
    meter = obj;
    cout<<"The length in meter is"<<meter<<endl;
    
return 0;
}