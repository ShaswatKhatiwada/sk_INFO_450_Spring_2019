// Chapter3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Write a program that continually accepts a year value from a user and determines if it is a leap year.

The year can be evenly divided by 4
If the year can be divided by 100 it is NOT a leap year, unless
The year is also evenly divisible by 400, then it is a leap year.
2000 and 2400 are leap years
1800 and 1900 are not leap years
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int year;

	cout << "Enter the year: ";
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)// not a leep
		{
			if (year % 400 == 0)// becasue its now divisible by 400 it is 
				cout << " The year you entered is leap year: " << year;
			else
				cout << " The year you entered is NOT leap year: " << year;
		}
		else// not by 100 then yes leep
			cout << " The year you entered is leap year: " << year;
	}
	else// is not 0
		cout << " The year you entered is NOT leap year: " << year;

	return 0;
}

