// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 6 - Exercise 4

	(*1) Find 10 different examples of non portable C++ code

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//

#include <windows.h>
#include <iosfwd>

#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

double getpi()
{
	double pi;
	__asm
	{
		fldpi
		fstp pi
	}
	return pi;
}

// -----------------------------------------------------------------------------

int main()
{
	// 1. System commands
	system("CLS");

	// 2. System specific headers - as seen above

	// 3. File paths
	string path = "C:\\Users\\l-paz\\Desktop\\test.txt";	// Windows specific

	// 4. Windows specific functions
	Beep(523, 500);	// Beep sound

	// 5. Assuming the size of a primitive type
	int size = sizeof(int);	// Assuming int is 4 bytes

	// 6. Directly accessing memory
	//int* p = (int*)0x00000000;	// Accessing memory at address 0
	//cout << *p << endl;			// on windows this will cause an access violation

	// 7. Compiler specific pragmas
	// #pragma once - wildly supported but not standard
	// this is why I always use include guards like #ifndef _HEADER_H_ #define _HEADER_H_ #endif

	// 8. Inline assembly
	// get pi using inline assembly
	double pi = getpi();		// you will need to change the architecture to x86 to compile this
	cout << "Pi: " << pi << endl;
		
	// 9. Locale specific functions
	std::locale::global(locale("en_US.UTF-8"));	// en_US.UTF-8 may not be exist on all systems

	// 10. Endianess specific code
	int num = 0x12345678;
	char* p = (char*)&num;
	cout << std::hex << static_cast<int>(p[0]) << endl;	
	// this will print 78 on little endian systems and 12 on big endian systems

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
