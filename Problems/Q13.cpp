#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the number of array you want to insert"<<endl;
cin>>n;

int *ptr = new int(n);

cout<<"Enters the number"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>ptr[i];
}
cout<<"Displaying the numbers"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<ptr[i];
}
return 0;
}