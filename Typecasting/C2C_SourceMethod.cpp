// Convert Feet and Inch into Meter and CM
// Source conversion method

#include <iostream>
using namespace std;

class destination{
    int meter;
    float cm;
    public:
    
    void getdata(int m, int c){
        meter = m;
        cm = c;
    }
    void dispaly(){
        cout<<"The length in meter is "<<meter<<endl;
        cout<<"The length in cm is "<<cm<<endl;
    }
};
class source{
    int feet;
    float inches;
    public:
    void getdata(){
        cout<<"Enter the length in Feet"<<endl;
        cin>>feet;
        cout<<"Enter the inches"<<endl;
        cin>>inches;
    }

    operator destination(){
        float totalfeet = feet + (inches/12);
        float meter = totalfeet / 3.3;
        int m = int (meter); 
        float cm = (meter-m)*100;
        destination temp;
        temp.getdata(m,cm);
        return temp;
    }
};
int main(){
    destination objd;
    source objs;
    objs.getdata();
    objd = objs;
    objd.dispaly();
return 0;
}