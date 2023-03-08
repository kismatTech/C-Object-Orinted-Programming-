#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count; //Static datamember chai sabai obj ko lagi common hunxa 
    public:
    void getdata(){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }

    void dispaly(){
        cout<<"The Employee id is "<<id<<" and the employee number is "<<count<<endl;
    }

    static void sdisplay(){   //Static member function which can access only static class member
        cout<<"The count is "<<count<<endl;
    }

};

    int Employee::count;  // Default value 0
    
int main(){
    Employee kismat, narmis, manish;
    kismat.getdata();
    kismat.dispaly();

    Employee::sdisplay();  //Static member function is called directly by class

    narmis.getdata();
    narmis.dispaly();

    Employee::sdisplay();

    manish.getdata();
    manish.dispaly();
    Employee::sdisplay();

return 0;
}