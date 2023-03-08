#include <iostream>
using namespace std;
int main(){
int a, b, c;
cout<<"Enter two numbers for a & b"<<endl;
cin>>a >>b;
try{
    if (b!=0){
        c = a/b;
        cout<<"The answer is"<<c<<endl;
    }
    else throw(b);
}
catch (int x){
cout<<"Exception Caught: DIVIDE BY ZERO"<<endl;
}
return 0;
}