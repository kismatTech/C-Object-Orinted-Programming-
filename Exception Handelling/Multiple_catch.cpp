#include <iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the value of x"<<endl;
cin>>x;

try{
    if(x==0) throw int(x);
    if (x==1) throw float(x);
    if (x==2) throw char(x);
}

catch(int x){
cout<<"Exception Catch an integer";
}
catch(float x){
cout<<"Exception Catch an Floating";
}
catch(char x){
cout<<"Exception Catch an character";
}

return 0;
}