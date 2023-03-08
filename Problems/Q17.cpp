#include <iostream>
using namespace std;

class person{
    string name;
    int age;
    string address;
    public:
    person(int x, string y, string z){
        age =x;
        name =y;
        address=z;
    }
    void showdata(){
        cout<<"The name is "<<name<<endl;
        cout<<"The age is "<<age<<endl;
        cout<<"The address is "<<address<<endl;

    }
};
class teacher:public person{
    string qualification;
    string department;
    public:
    teacher(string a, string b, int c, string d, string e):person(c,d,e){
        qualification=a;
        department=b;
    }
    void showdata(){
        person::showdata();
        cout<<"The Department is "<<department<<endl;
        cout<<"The Qualification is "<<qualification<<endl;
    }
};
class student: public person{
    string program;
    int semister;
    public:
    student(string a, int b, int c, string d, string e):person(c,d,e){
        program=a;
        semister=b;
    }
    void showdata(){
        person::showdata();
        cout<<"The Semister is "<<semister<<"nd"<<endl;
        cout<<"The Program is "<<program<<endl;
    }
};

int main(){

teacher obj("Bachelor","Engineering",22,"Kismat","Rajahar");
student obj1("Computer",2,26,"Puja","Chitwan");
obj.showdata();
cout<<endl;
obj1.showdata();
return 0;
}