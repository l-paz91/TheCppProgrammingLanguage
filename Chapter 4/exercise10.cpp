// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 4 - Exercise 10
	(*1) Open the file of integers from exercise 9 for reading (as an ifstream) 
	and read it.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

int main()
{
	ifstream readFromFile("myInts.txt");

	if (!readFromFile)
	{
		error("Error opening file for reading");
	}

	cout << "Reading from file...\n";
	cout << readFromFile.rdbuf() << endl;

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
