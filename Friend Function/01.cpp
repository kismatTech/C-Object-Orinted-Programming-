#include <iostream>
using namespace std;
class A{
    public:
    friend void sum(A obj);
};
    void sum(A obj){
    
    }
int main(){
    A obja;
    sum(obja);
return 0;
}