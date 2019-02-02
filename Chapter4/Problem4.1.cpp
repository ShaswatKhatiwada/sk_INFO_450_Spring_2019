/*Write a program that reads a set of 10 whole numbers from the user into an array.

Once read in, it calculates the mean and the standard deviation of the numbers then displays the results to the console.

1. Find the mean (the simple average of the numbers)
2. Then, for each number, subtract the mean and square the result.
3. Then, work out the mean of those squared differences.
4. Take the square root of that, and we're done!*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num[10];
	int i = 0;
	double total = 0;
	double newTotal = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "\nPlease enter an integer value: ";
		cin >> num[i];
		total = total + num[i];
		num[i] = sqrt(num[i] - (total / 10));
		newTotal = newTotal + num[i];
	}
	//find the mean
	/*double total = 0;
	for (i = 0; i < 10; i++)
	{
		total = total + num[i];
	}
	cout << "\nThe mean is: " << total / 10;
	//subtract the mean then square root
	for (i = 0; i < 10; i++)
	{
		num[i] = sqrt(num[i] - (total / 10));
	}
	//new mean
	double newTotal = 0;
	for (i = 0; i < 10; i++)
	{
		newTotal = newTotal + num[i];
	}*/
	cout << "\nThe new mean is: " << newTotal / 10;
	cout << "\nThe square root of the mean is: " << sqrt(newTotal / 10);

	return 0;
}


