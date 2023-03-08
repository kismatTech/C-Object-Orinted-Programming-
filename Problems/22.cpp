#include <iostream>
using namespace std;

class person{
    string name;
    public:
    person(string x){
        name=x;
    }
    void displayA(){
        cout<<"The name is "<<name<<endl;
    }
};

class account: virtual public person{
    float salary;
    int accountNo;
    public:
    account(float x, float y,string z):person(z){
        salary = x;
        accountNo = y;
    }
    void displayB(){
        cout<<"The salary is "<<salary<<endl;
        cout<<"The account number is"<<accountNo<<endl;
    }
};

class admin: virtual public person{
    int adminID;
    int experience_year;
    public:
    admin(int x, int y, string z): person(z){
        adminID= x;
        experience_year= y;

    }
    void displayC(){
        cout<<"The admin ID is "<<adminID<<endl;
        cout<<"The Experienced Year is "<<experience_year<<endl;

    }
};

class records: public account, public admin{
    int record_Nos;
    public:
    records(string y, int x, float a, int b,string c, int d, int e, string f):person(y), account(a,b,c), admin(d,e,f) {
        record_Nos=x;
    }
    void display(){
        displayA();
        displayB();
        displayC();
        cout<<"The record number is"<<record_Nos<<endl;
    }

};

int main(){
    records obj("Kismat",1,200000,12,"Kismat",8,9,"Nep");
    obj.display();

return 0;
}