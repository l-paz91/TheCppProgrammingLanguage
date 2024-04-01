// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 5 - Exercise 5
	(*1.5) Use a regex to find all decimal numbers in a file.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//

#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

void createFile(const string& pFileName)
{
	ofstream ofs(pFileName);
	if (!ofs)
	{
		error("Error creating file ", pFileName);
	}

	ofs << "This is a test file with some numbers in it.\n";
	ofs << "The cat is 3.5 years old and in 2 years it will be 5.5 years old.\n";
	ofs << "The car costs 10000.99 dollars.\n";
	ofs << "The house is 250000.00 dollars.\n";
	ofs << "There are 5.5 dogs lying in the sun.\n";
	ofs << "The computer is 1500.00 dollars.\n";
	ofs << "The phone is 500.00 dollars.\n";
	ofs << "The book is 20.00 dollars.\n";
	ofs << "3.67 pineapples can be used to make a pineapple pie.\n";
}

// -----------------------------------------------------------------------------

void findNumbers(const string& pFileName)
{
	ifstream ifs(pFileName);
	if (!ifs)
	{	
		error("Error opening file ", pFileName);
	}

	regex pattern(R"(\d+\.\d+|\d+)");

	int lineNumber = 0;
	for (string line; getline(ifs, line); )
	{
		++lineNumber;
		smatch matches;
		while (regex_search(line, matches, pattern))
		{
			cout << "Line " << lineNumber << ": " << matches[0] << endl;
			line = matches.suffix().str();
		}
	}
}

// -----------------------------------------------------------------------------

int main()
{
	const string fileName = "Chapter5Exercise5.txt";

	createFile(fileName);
	findNumbers(fileName);

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
