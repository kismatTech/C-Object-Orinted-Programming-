#include <iostream>
using namespace std;
class A{
        int x;
        int y;
        public:
        A(){
        }
        A(int a, int b){
            x=a;
            y=b;
        }

        void display(){
            cout<<"The value of a is: "<<x<<endl;
            cout<<"The value of b is: "<<y<<endl;
        }

        friend A operator -(A obj1);
};
        A operator -(A obj1){
            A temp;
            temp.x=-obj1.x;
            temp.y=-obj1.y;
            return temp;
        }

int main(){

    A obj(5,6);
    cout<<"Before operator"<<endl;
    obj.display(); 
    A obj2=-obj;
    cout<<"After operator called"<<endl;
    obj2.display();

return 0;
}