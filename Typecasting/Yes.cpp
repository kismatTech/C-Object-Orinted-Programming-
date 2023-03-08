// Convert feet and inches to meter
// 1feet = 12inches,  1 meter = 3.3feet;
//C2B
#include <iostream>
using namespace std;

class A {
    int feet;
    float inches;
    public:
    void getdata(){
        cout<<"Enter length in feet"<<endl;
        cin>>feet;
        cout<<"Enter length in inches"<<endl;
        cin>>inches;
    }

    operator float(){
        float totalfeet = feet + (inches/12);
        float meter = totalfeet *3.3;
        return meter;        
    }
};

int main(){
    A obj;
    obj.getdata();
    float meter = obj;
    cout<<"The length in meter is"<<meter<<endl;
    return 0;
}