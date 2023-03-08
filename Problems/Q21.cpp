#include <iostream>
using namespace std;

class Mountain{
    string name;
    float height;
    string location;
    public:
    Mountain(string a, float b){}
    Mountain(string a,float b, string c){
        name =a;
        height =b;
        location =c;
    }
    void displayinf(){
        cout<<"The name of mountain is "<<name<<endl;
        cout<<"The height is "<<height<<endl;
        cout<<"The location is "<<location<<endl;
    }
    Mountain compheight(Mountain objA, Mountain objB){
        if(objA.height>objB.height){
            objA.displayinf();
            cout<<"This is the greatest mountain as compare to another"<<endl;
        }
        else
        objB.displayinf();
    }
};
int main(){
    Mountain obj("Everest",8848.86,"Nepal");
    Mountain obj1("MountKtwo",8706.6,"Pakistan");
    obj.compheight(obj,obj1);

return 0;
}