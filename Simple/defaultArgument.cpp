#include <iostream>
using namespace std;
void sum(int a, int b = 5)
{ // One Argument is defined with default argument so called Default Argument
    int add = a + b;
    cout << "The sum is" << add << endl;
}

int main()
{
    sum(1);
    sum(2, 3);
    return 0;
}