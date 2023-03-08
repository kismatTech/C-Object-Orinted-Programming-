#include <iostream>
using namespace std;
class Employee
{
    string name;
    int id;

public:
    void getdata()
    {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your Id" << endl;
        cin >> id;
    }

    void display()
    {
        cout << "Your name is " << name << endl;
        cout << "Your id is " << id << endl;
    }
};

class Designer : public Employee
{
    int salary;

public:
    void gets()
    {
        getdata();
        cout << "Enter your salary" << endl;
        cin >> salary;
    }
    void displays()
    {
        display();
        cout << "Your salary is" << salary << endl;
    }
};

class Developer : public Employee{
    string location;
    public:
    void getdat(){
        getdata();
        cout<<"Enter your location"<<endl;
        cin>>location;
    }

    void displayd(){
        display();
        cout<<"Your location is "<<location<<endl;
    }

};

int main()
{
    Employee A;
    Designer B;
    Developer C;
    B.gets();
    B.displays();
    C.getdat();
    C.displayd();

    return 0;
}