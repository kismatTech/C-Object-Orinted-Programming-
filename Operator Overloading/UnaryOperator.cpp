#include <iostream>
using namespace std;
class A{
        int x;
        int y;
        public:

        A(int a, int b){
            x=a;
            y=b;
        }

        A operator -(){
            x=-x;
            y=-y;
        }
        void display(){
            cout<<"The value of a is: "<<x<<endl;
            cout<<"The value of b is: "<<y<<endl;
        }

};

int main(){

    A obj(5,6);
    cout<<"Before operator"<<endl;
    obj.display(); 
    -obj;
    cout<<"After operator called"<<endl;
    obj.display();

return 0;
}