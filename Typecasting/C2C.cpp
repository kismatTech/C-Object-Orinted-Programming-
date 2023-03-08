// Convert Feet and inch into Meter and CM

#include <iostream>
using namespace std;
class D{
    int meter;
    float cm;
    public:
    void getdata(int m, float n){
        meter = m;
        cm =n;
    }
    void display(){
        cout<<"The value in meter is"<<meter<<endl;
        cout<<"The value in cm is"<<cm<<endl;
    }

};
class S{   //source class
    int feet;
    float inch;
    public:
    void getdata(){
        cout<<"Enter the feet"<<endl;
        cin>>feet;
        cout<<"Enter the inchs"<<endl;
        cin>>inch;
    }

    operator D(){
        float f = feet + (inch /12);
        float meter = f / 3.3;
        int c = int(meter);
        float cm = (meter - c)*100;
        D temp;
        temp.getdata(meter, cm);
        return temp;
    }

};

int main(){
S obj;
obj.getdata();
D objd;
objd = obj;
objd.display();
return 0;
}