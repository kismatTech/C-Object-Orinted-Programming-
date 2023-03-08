// Fibbonacci Series using ++ operator

#include <iostream>
using namespace std;
class Fib{
    int a,b,c;
    public:
    Fib(){
        a=-1;
        b=1;
        c=a+b;
    }
    void display(){
        cout<<c<<endl;
    }

    Fib operator++ (){
        a=b;
        b=c;
        c=a+b;
    }

};
int main(){
    Fib obj;
    int n;
    cout<<"Enter the number you enter"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        obj.display();
        ++obj;
    }
    

return 0;
}