/********************************************************
Written by: Liam Hendrickson
Course: CS 3560 with Chad Mourning
Assignment: Homework 7 - Variadic Functions
File: The implementation file for the stddev variadic function, calculates the standard deviation from an integer input
Ohio University
*************************************************************/

#include <iostream>
#include <cstdarg>
#include <cmath>
#include "hw7.h"


double stddev(int n, ...)
{
	double sum=0; //sum of all the ints to add
	double count=0; //count of all the arguments read in for calculating the mean
	double deviation = 0; //variable to hold the standard deviation of the data
	double mean; // will hold the value for the mean of the data to calculate individual deviance

	va_list args; //the list of arguments
	va_start(args, n); //starts access to the functions arguments
	va_list second; //second copy of the arguments given
	va_copy(second, args); // copies the values of the list args to the new list second



	for(int i=0; i<n; i++)//calculates the sum of the list of arguments
	{
		int added= va_arg(args, int); //reads in the next value of the argument list
		sum += added; //adds the argument to the sum
		count++;  //increments the count
	}

	va_end(args); //ends the list of arguments from args

	va_start(second, n); //starts the argument list for second, to be used for deviation calculation
	double var=0;

	mean = sum/count; //calculates the mean of the data

	for(int j=0; j<n; j++)
	{
		int added2= va_arg(second, int); //reads in the next value of arguments
		var = (added2-mean)*(added2-mean); //calculates deviation squared
		deviation += var; //creates a sum of the deviations

	}

	va_end(second);	//ends the second argument list

	deviation /= count; //calculates average deviation squared

	return sqrt(deviation);	//calculates standard deviation and returns it


}

