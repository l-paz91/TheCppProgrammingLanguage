// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 6 - Exercise 2

	(*1) Write a program that prints signed if plain chars are signed on your 
	implementation and unsigned otherwise.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//

#include "std_lib_facilities.h"

#include <limits>

// -----------------------------------------------------------------------------

int main()
{
	char c = 0;
	bool isSigned = std::numeric_limits<char>::is_signed;

	cout << "char is " << (isSigned ? "signed" : "unsigned") << endl;

	char c2 = 255;
	int i = c2;
	cout << "c2: " << c2 << " i: " << i << endl;

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
