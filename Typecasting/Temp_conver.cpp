// Convert Centigrade into Degree Fahrenheit
// B2C
#include <iostream>
using namespace std;
class A{
    float f;

    public:
    A(){}
    A(float c){
        float f = (c*1.8)+32;
    }
    void display(){
        cout<<"The degree in Fahrenheit is"<<f<<endl;
    }
};
int main(){
    A obj;
    float Celsius;
    cout<<"Enter the degree in Celsius"<<endl;
    cin>>Celsius;
    obj = Celsius;
    obj.display();

return 0;
}