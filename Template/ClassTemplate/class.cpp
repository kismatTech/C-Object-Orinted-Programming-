#include <iostream>
using namespace std;
template<class T>
class A{
    T a;
    T b;
    public:
    void setdata(T x, T y){
        a=x;
        b=y;     
    }
    void display(){
        cout<<a<<" & "<<b<<endl;
    }
};
int main(){
    A <int> obj;
    obj.setdata(5, 9);
    obj.display();

    A<char> objb;
    objb.setdata('X','X');
    objb.display();
return 0;

}