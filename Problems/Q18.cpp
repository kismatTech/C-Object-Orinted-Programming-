#include <iostream>
using namespace std;
class Account{

    int acc_no;
    float balance;
    float min_balance;
    public:
    void getdata(){
        cout<<"Enter Your Account Number"<<endl;
        cin>>acc_no;
        cout<<"Enter your Balance"<<endl;
        cin>>balance;
        cout<<"Enter minimum balance"<<endl;
        cin>>min_balance;
    }
    static void minBalance(){
    }
    void display(){
        cout<<"Your account number is "<<acc_no<<endl;
        cout<<"Your minimum balance is "<<min_balance<<endl;      
        cout<<"Your balance is "<<balance<<endl;
    }

};
int main(){
    Account obj;
    obj.getdata();
    obj.display();
return 0;
}