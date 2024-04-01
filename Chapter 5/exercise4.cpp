// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Chapter 5 - Exercise 4
	(*2) Repeat the histogram drawing from example from section 5.6.3 for a 
	normal_distribution and 30 rows.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include <map>

#include "std_lib_facilities.h"

// -----------------------------------------------------------------------------

template<typename T>
class RandInt
{
public:
	RandInt(T pLow, T pHigh) : mDistribution(pLow, pHigh) { }
	T operator()() { return mDistribution(mRandEngine); }

private:
	default_random_engine mRandEngine;
	normal_distribution<T> mDistribution;
};

// -----------------------------------------------------------------------------

int main()
{
	RandInt<double> randomNumber(0, 30);	// mean = 0, standard deviation = 30

	// create the 30 "buckets" for the histogram
	constexpr int numberOfRows = 30;
	constexpr int rangeStart = -90;		//3 standard deviations - capture 99.7% of the data
	constexpr int rangeEnd = 90; 
	const int range = (rangeEnd - rangeStart) / numberOfRows;

	map<int, int> histogram;
	for (int i = 0; i < 1000; ++i)	// more numbers for a smoother distribution
	{
		const int number = static_cast<int>(randomNumber());
		const int rangeIndex = (number - rangeStart) / range;

		if (rangeIndex >= 0 && rangeIndex < numberOfRows)
		{
			++histogram[rangeIndex];
		}
	}

	for(const auto& p : histogram)
	{
		cout << p.first << '\t';
		for (int i = 0; i < p.second; ++i)
		{	
			cout << '*';
		}
		cout << endl;
	}

	keep_window_open();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
