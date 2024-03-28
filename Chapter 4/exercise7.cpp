// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 4 - Exercise 7
	(*2) Initialise a vector<int> with the elements 5, 9, -1, 200 and 0. Print 
	it. Sort it, and print it again.

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
	vector<int> intVector = { 5, 9, -1, 200, 0 };
	printVector(intVector);

	cout << "\nSorting vector...\n";
	sort(intVector.begin(), intVector.end());
	printVector(intVector);

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
