#include <iostream>
using namespace std;

template<class T1>
T1 Compare1(T1 a, T1 b){
    if (a>b){
        return a;
    }
    else return b;
}

int main(){
cout<<"The greatest digit is"<<Compare1(5,6)<<endl;
cout<<"The greatest digit is"<<Compare1(5.1,6.3);
return 0;
}