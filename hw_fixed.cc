#include <iostream>
#include <array>
#include <cmath>

/******************************************
Functionality: takes an array of integers and calculates the standard deviation of the data set

Parameters: the value for n  cannot be less than 0, and  n must corrospond with how many elements are in the array

Return Value: the function will return a double wich equals the standard deviation of the array passed into it


*********************************************/

double deviation( int a[], int n)
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
	for(size_t i = 0; i <= (n-1); i++) // calculates the square of differences between each value and the mean and sums them
	{
		stddev += ((a[i] - mean) * (a[i] - mean)); 
	}
	stddev /= count;
	if( stddev = 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
