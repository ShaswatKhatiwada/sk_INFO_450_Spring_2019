// Chapter3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Write a program that continually accepts values from the user, determines
if the value is a prime number and prints the result to the console. When the 
user enters a 0, then execution stops.*/

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
char again = 'Y';
int i, n;
cout << "Welcome, please enter 0 or a char to end the program\n";
cout << "Please enter positive number ";
while (1) {
	cin >> n;
	if (n == 1)
	{
		cout << "Smallest prime num is 2, Try again but since the next number is 2\n" ;
		 

	}
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			cout << "Survey says....You did NOT entered prime number, try again\n";
			break;
		}
	}
		if (n == 0)
		{
			cout << "You Entered 0 or a char to end the program\n";
			exit(0);
		}
		else
			cout << "Survey says.... IT IS THE PRIME NUMBER\n";
	
	}
return 0;
}

