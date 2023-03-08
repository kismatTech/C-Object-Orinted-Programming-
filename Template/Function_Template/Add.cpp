
#include <iostream>
using namespace std;
template <class T>

void add(T a, T b){
    T sum = a+b;
    cout<<"The sum is "<<sum<<endl;
}
int main(){
    cout<<"Displaying the sum of integer Values: "<<endl;
    add(2,3);
    cout<<"Displaying the sum of float Values: "<<endl;
    add(5.3,6.2);
return 0;
}