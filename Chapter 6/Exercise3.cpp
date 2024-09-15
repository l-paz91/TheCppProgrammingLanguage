// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 6 - Exercise 3

	(*1.5) Find 5 different C++ constructs for which the meaning is undefined (6.1).
	(*1.5) Find 5 different C++ constructs for which the meaning is implementation-defined (6.1)

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//

#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

int tempFunc(int pX, int pY) { return pX + pY; }

// -----------------------------------------------------------------------------

int main()
{
	// ---- 5 Examples of undefined behavior
	// 1. Dereferencing a null pointer
	int* p = nullptr;
	int x = *p;

	// 2. Out of bounds array access
	int arr[5] = { 1, 2, 3, 4, 5 };
	int y = arr[10];

	// 3. Modifying the same variable multiple time in one statement
	int i = 0;
	i = i++;	// the order of evaluation of subexpressions is undefined

	// 4. Using an uninitialized variable - a good compiler should warn against this
	// int z;
	// cout << z << endl;

	// 5. Deleting the same pointer twice
	int* p1 = new int(5);
	delete p1;
	delete p1;

	// ---- 5 Examples of implementation-defined behavior
	// 1. The size of the fundamental types (int, char, etc.)
	cout << "Size of int: " << sizeof(int) << endl;	// the size is specific to the compiler

	// 2. Order of evaluation of function arguments
	int num1 = 5;
	int num2 = 10;
	cout << tempFunc(++num1, ++num2) << endl;	// it's up to the compiler to decide if ++num1 or ++num2 is evaluated first

	// 3. The alignment of data types
	struct S
	{
		char c;
		int i;
	};	// it's up to the compiler to decide how to align the members of the struct

	// 4. Signed integer overflow
	int maxNum = INT_MAX;
	cout << ++maxNum << endl;	// compilers vary in how they handle signed integer overflow

	// 5. Endianness
	int num3 = 0x12345678;
	// representation of num3 in memory is dependent on the endianness of the machine, for example:
	// Big-endian: 0x12 0x34 0x56 0x78
	// Little-endian: 0x78 0x56 0x34 0x12
	// fun fact: the Super Nintendo is little-endian, while the Nintendo 64 is big-endian
	// it makes it fun when you're pushing bytes into registers on the snes as you have to remember to push them in reverse order

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
