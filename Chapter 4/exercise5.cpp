// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 4 - Exercise 5
	(*1.5) Write a program that reads a name (a string) and an age (an int) from 
	the standard input stream cin. Then output a message including the name and 
	age to the standard output stream cout.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

int main()
{
	string name;
	int age;

	cout << "Please enter your name and age: ";
	cin >> name >> age;

	cout << "Hello, " << name << " (age " << age << ")\n";

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
