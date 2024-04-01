// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 5 - Exercise 2
	(*1.5) Write a program with two threads: one that writes hello every second 
	and one that writes world! every second.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <thread>
#include <chrono>

#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

void hello()
{
	while (true)
	{
		cout << "Hello" << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
}

// -----------------------------------------------------------------------------

void world()
{
	while (true)
	{
		cout << "World!" << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
}

// -----------------------------------------------------------------------------

int main()
{
	thread t1(hello);
	thread t2(world);

	t1.join();
	t2.join();

	//keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
