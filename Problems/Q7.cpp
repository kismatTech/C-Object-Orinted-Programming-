#include <iostream>
using namespace std;
template<class T>

T mul(T x, T y){
    T result = x*y;
    return result;
}

int main(){
    cout<<"The multiple of integer"<<mul(2,3)<<endl;
    cout<<"The multiple of Float"<<mul(2.2,3.3)<<endl;
return 0;
}