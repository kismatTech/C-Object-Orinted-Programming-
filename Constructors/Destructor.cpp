#include <iostream>
using namespace std;

    class kis{
        int x;
        public:
        kis(){
            x=0;
            cout<<"Constructor Called"<<endl;
        }
        ~kis(){
            cout<<"Destructor Called"<<endl;
        }

    };

int main(){
    kis obj;
return 0;
}