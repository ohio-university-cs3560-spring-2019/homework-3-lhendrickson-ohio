#include <iostream>
#include <array>
#include <cmath>



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
