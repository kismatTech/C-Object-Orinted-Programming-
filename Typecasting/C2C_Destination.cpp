// Convert Feet and Inch into Meter and CM
// Destination conversion method

#include <iostream>
using namespace std;

class source{
    int feet;
    float inch;
    public:
    void getdata(){
        cout<<"Enter the length in Feet"<<endl;
        cin>>feet;
        cout<<"Enter the inches"<<endl;
        cin>>inch;
    }

    int fdata(){
        return feet;
    }
    float idata(){
        // cout<<inch<<endl;
        return inch;
    }
};
class destination{
    float meter;
    float cm;
    public:
    destination(){}
    destination( source obj){
        int f = obj.fdata();
        float in= obj.idata();
        int tfeet = f+ (in/12);
        meter = tfeet / 3.3;
        int m = int(meter);
        cm = (meter - m)*100;
    }
    void display(){
        cout<<"The length in meter is"<<int(meter)<<endl;
        cout<<"The length in centimeter is"<<cm<<endl;
    }
};
int main(){
    source objs;
    objs.getdata();
    destination objd;
    objd = objs;
    objd.display();
return 0;
}