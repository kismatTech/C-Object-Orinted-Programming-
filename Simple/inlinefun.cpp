// Inline function

#include <iostream>
using namespace std;
inline void sum(int x, int y)  // Inline function
{
    cout << "The sum is" << x + y << endl;
}
int main()
{
    sum(5, 6);
    return 0;
}