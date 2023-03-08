// C++ program to implement
// function templates
#include <iostream>
using namespace std;

// Function template to swap
// two numbers
template <class T>
int swap_numbers(T& x, T& y)
{
	T t;
	t = x;
	x = y;
	y = t;
	return 0;
}

// Driver code
int main()
{
	int a, b;
	a = 10, b = 20;

	// Invoking the swap()
    cout<<"\nSwap of Float variable"<<endl;
	swap_numbers(a, b);
	cout << a << " " << b << endl;
    float c, d;
    c=2.2, d=5.3;
	swap_numbers(c, d);
    cout<<"\nSwap of Float variable"<<endl;
	cout << c << " " << d << endl;
	return 0;
}
