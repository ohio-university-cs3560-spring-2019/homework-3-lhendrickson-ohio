#include <iostream>
#include <array>
#include <cmath>



int deviation( int a[])
{
	int sum;

	for(size_t i = 0; i <= (a.size()-1); i++) //gets the sum of the data so that the mean can be calculated
	{
		sum += a[i];
	} 
	double mean = sum /= a.size(); //calculates the mean
	double stddev = 0;
	for(size_t i = 0; i <= a.size() -1; i++) // calculates the square of differences between each value and the mean and sums them
	{
		double stddev = (stddev + ((a[i] - mean) * (a[i] - mean))); 
	}
	stddev /= a.size();
	if( stddev = 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
