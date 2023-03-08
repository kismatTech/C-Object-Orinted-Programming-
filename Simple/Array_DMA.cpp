#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the total number to store in array" << endl;
    cin >> n;

    int *ptr = new int (n);
    cout<<"Enter numbers";
    for (int i = 0; i < n; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Displaying numbers";
    for (int i = 0; i < n; i++)
    {
        cout<<ptr[i];
    }

    

    return 0;
}