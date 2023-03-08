#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    
    try{
        if (a=='A')
        {
            throw(a);
        }
        if (a==2.2)
        {
            throw float(a);
        }
        if (a==0)
        {
            throw(a);
        }
        

    }
    catch(float a){
        cout<<"Exception detected"<<a<<endl;
    }
    catch(...){
        cout<<"Exception Detected"<<endl;
    }

return 0;
}