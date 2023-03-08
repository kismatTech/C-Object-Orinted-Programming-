#include <iostream>
using namespace std;

// Source class, i.e
// class that will be converted to another class
class Class_type_one {
	string a = "GeeksforGeeks";

public:
	// Member function which returns
	// string type data
	string get_string()
	{
		return (a);
	}

	// Member function to display
	void display()
	{
		cout << a << endl;
	}
};

// Destination class, i.e
// Class type to which source class will be converted
class Class_type_two {
	string b;

public:
	// Operator overloading which accepts data
	// of the Destination class and
	// assigns those data to the source class
	// Here it is for the conversion of
	// Class_type_two to Class_type_one
	void operator=(Class_type_one a)
	{
		b = a.get_string();
	}

	// Member function for displaying
	// the data assigned to b.
	void display()
	{
		cout << b << endl;
	}
};

int main()
{
	// Creating object of class Class_type_one
	Class_type_one a;

	// Creating object of class Class_type_two
	Class_type_two b;

	// CLass type conversion
	// using operator overloading
	b = a;

	// Displaying data of object
	// of class Class_type_one
	a.display();

	// Displaying data of object
	// of class Class_type_two
	b.display();

	return 0;
}
