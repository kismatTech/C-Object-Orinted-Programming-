#include <iostream>
using namespace std;
class A{
    int x;
    public:
    A(int x){
        // x=x; It will throw garbage value because of name conflict that means when the name of the local variable and data members is the same, this pointer is used

        this->x = x;
    }

    void display(){
        cout<<"The value of x is "<<x<<endl;
    }
};
int main(){
    A obj(5);
    obj.display();
return 0;
}