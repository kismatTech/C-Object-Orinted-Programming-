#include <iostream>
using namespace std;
    template<class T, class A>
    void fuck(T a, A b){
        cout<<a<<" & "<<b<<endl;
    }
int main(){
    cout<<"Passing Integer and Floating value: "<<endl;
    fuck(5,6.9);
    cout<<"Passing Floating and Character value: "<<endl;
    fuck(1.6, 'K');
return 0;
}