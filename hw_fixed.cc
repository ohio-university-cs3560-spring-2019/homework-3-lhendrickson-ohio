#include <iostream>
#include <array>
#include <cmath>
/**
\param  n must correspond with the number of elements in a
\param a must have at least 1 element
\param n cannot be negative

\brief takes an array of ints and the number of elements and calculates their standard deviation

\return  returns a double indicating the standard deviation of the data set



*/


double deviation(int* a, int n )
{
	double sum=0;
	double count=0;

	for(size_t i = 0; i <= n-1; i++) //gets the sum of the data so that the mean can be calculated
	{
		sum += a[i];
		count++;
	} 
	double mean = sum / count; //calculates the mean
	double stddev = 0;
	for(size_t i = 0; i <= n-1; i++) // calculates the square of differences between each value and the mean and sums them
	{
		stddev += ((a[i] - mean) * (a[i] - mean)); 
	}
	stddev /= count;
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
