// 2015 Fall
#include <iostream>
using namespace std;
class soccer{
    int jersey_no;
    int Number_goals;
    int Number_assist;
    public:
    soccer(){}
    soccer(int x, int y, int z){
        jersey_no = x;
        Number_goals =y;
        Number_assist =z;
    }
    
    void display(){
        cout<<"\nThe jersey number "<<jersey_no<<" Player Achivement is "<<endl;
        cout<<"This player goal is "<<Number_goals<<endl;
        cout<<"The assist of this player is "<<Number_assist<<endl;
    }
    soccer operator >(soccer obj){
        soccer sum;
        if ((Number_goals+Number_assist)>(obj.Number_goals+obj.Number_assist))
        {
            cout<<"Jersey Number "<<jersey_no<<"Player wins"<<endl;
            display();
        }
        else
            cout<<"Jersey Number "<<obj.jersey_no<<" Player wins!!!"<<endl;
            obj.display();

    }
};
int main(){
    soccer Kismat(12, 3, 5);
    soccer Simran(32, 6, 4);
    Kismat > Simran;
return 0;
}