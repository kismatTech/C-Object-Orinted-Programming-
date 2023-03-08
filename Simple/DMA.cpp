// Dynamic Memory Allocation
// Reserving or providing space to a variable or an array

#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int(5);
    // New opertor is used to allocate the memory dynamically.
    cout << *ptr;
    delete ptr;
    // Delete operater is used to dellocate the memory space
    return 0;
}