// Convert Kg into Gram
// source = kg
#include <iostream>
using namespace std;
//conversion ja garxam tyo class lai tala rakhni bujis

class weights   //Source
{
    float kg;

public:
    void getdata()
    {
        cout << "Enter the weight in kg." << endl;
        cin >> kg;
    }
    
};

class WeightD  //Destination
{
    float gm;

public:
    WeightD(){}
    WeightD(weights w){     //Destination ma convesion garda constructor method
    float k=w.getdata();
    gm=k*1000;
    }
    void display()
    {
        cout << "After conversion weight in gm: ";
        cout << gm << endl;
    }
};
int main()
{

    weights ws;
    ws.getdata();
    WeightD wd;
    wd = ws;
    wd.display();
    return 0;
}