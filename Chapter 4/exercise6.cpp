// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 4 - Exercise 6
	(*1.5) Redo exercise 5, storing several (name, age) pairs in a class. Doing 
	the reading and writing using your own >> and << operators.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

struct NameAgePairs
{
	string mName;
	int mAge;
};

// -----------------------------------------------------------------------------

ostream& operator<<(ostream& pStream, const NameAgePairs& pPair)
{
	return pStream << pPair.mName << " " << pPair.mAge;
}

// -----------------------------------------------------------------------------

istream& operator>>(istream& pStream, NameAgePairs& pPair)
{
	return pStream >> pPair.mName >> pPair.mAge;
}

// -----------------------------------------------------------------------------

int main()
{
	NameAgePairs pair1;
	cout << "Enter a name and an age: ";
	cin >> pair1;
	cout << pair1 << endl;

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
