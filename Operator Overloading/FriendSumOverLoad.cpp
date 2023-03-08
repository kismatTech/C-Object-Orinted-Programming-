#include <iostream>
using namespace std;
class sumT{
    int x, y;
    public:
    sumT(){}
    sumT(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"Value of a is "<<x<<endl;
        cout<<"Value of b is "<<y<<endl;
    }
        friend sumT operator +(sumT obj1, sumT obj2);
};
    sumT operator +(sumT objA, sumT objB){
        sumT temp;
    

        temp.x = objA.x + objB.x;
        temp.y = objA.y + objB.y;
        return temp;
    }
    
int main(){
    sumT obj1(2,3);
    sumT obj2(3,6);

    sumT obj3 = obj1 + obj2;
    // obj1= a,b;
    // obj2= a,b;
    cout<<"After sum of obj1 and obj2 is: "<<endl;
    obj3.display();
return 0;
}