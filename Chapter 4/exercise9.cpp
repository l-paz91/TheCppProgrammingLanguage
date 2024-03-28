// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 4 - Exercise 9
	(*1) Open a file for writing (as an ofstream) and write a few hundred 
	integers to it.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

int main()
{
	ofstream openTextFile("myInts.txt");

	if (!openTextFile)
	{		
		error("Error opening file for writing");
	}

	for (int i = 0; i < 300; ++i)
	{
		openTextFile << i << '\n';
	}

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
