#include <iostream>
using namespace std;

void divide(int x, int y){
if (y==0)
{
    throw(y);
}
else{
    int a = x/y;
    cout<<"The result is"<<a<<endl;
}

}

int main(){
    int a, b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    try
    {
        divide(a,b);
    }
    catch(int c)
    {
        cout<<"Exception Detected: DIVIDE BY ZERO"<<endl;
    }
    
return 0;
}