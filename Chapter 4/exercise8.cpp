// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 4 - Exercise 8
	(*1) Repeat exercise 7 with a vector<string> initialised with "Kant", "Plato", 
	"Aristotle", "Kierkegaard", and "Hume".

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

template<typename T>
void printVector(const vector<T>& pVector)
{
	for (const T& value : pVector)
	{
		cout << "Value: " << value << "\n";
	}
}

// -----------------------------------------------------------------------------

int main()
{
	vector<string> myVector = { "Kant", "Plato", "Aristotle", "Kierkegaard", "Hume" };
	printVector(myVector);

	cout << "\nSorting vector...\n";
	sort(myVector.begin(), myVector.end());
	printVector(myVector);

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
