// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 5 - Exercise 3
	(*2) Time a loop. Write out the time in milliseconds. Do this for the default 
	setting of your compiler and for a setting using an optimiser (e.g., -O2 or 
	"release"). Be careful not to have the optimiser eliminate your whole loop 
	as dead code because you did not use a result.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <map>
#include <thread>
#include <chrono>

#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

int timeLoop()
{
	// this was taken from 
	// https://github.com/l-paz91/principles-practice/blob/master/Chapter%2026/Exercise%2014
	auto start = chrono::high_resolution_clock::now();

	int firstSortSize = 500000;

	cout << "Creating first map...\n";
	auto timeNow = chrono::system_clock::now();

	map<string, int> firstSet;
	int sum = 0;
	for (int i = 0; i < firstSortSize; ++i)
	{
		firstSet.insert({ randString(randint(100)), i });
		sum += i;
	}

	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();

	cout << "Time taken: " << duration << " milliseconds\n";
	return sum;
}

// -----------------------------------------------------------------------------

int main()
{
	int sum = timeLoop();
	cout << "Sum: " << sum << endl;

	// 740ms for release
	// 8272ms for debug

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
