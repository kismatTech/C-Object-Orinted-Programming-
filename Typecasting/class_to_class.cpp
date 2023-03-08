// Convert Kg into Gram

#include <iostream>
using namespace std;

class WeightD  //Destination
{
    float gm;

public:
    void getdata(float g)
    {
        gm = g;
    }
    void display()
    {
        cout << "After conversion weight in gm: ";
        cout << gm << endl;
    }
};

class weights   //Source
{
    float kg;

public:
    void getdata()
    {
        cout << "Enter the weight in kg." << endl;
        cin >> kg;
    }
    operator WeightD() //Source ma conversion garda operator method
    {
        float g = 1000 * kg;
        WeightD temp;
        temp.getdata(g);
        return temp;
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