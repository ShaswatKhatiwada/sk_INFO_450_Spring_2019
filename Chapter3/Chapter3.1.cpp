// Chapter3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Write a program that continually accepts positive values from the user, calculates the square of 
that value and outputs the results to the console. When the user enters '0', execution should stop.*/

#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	double n;
	double j;
	char again = 'Y';
	while (again == 'y' || again == 'Y')  {
		cout << "Please enter a value: " << endl;
		cin >> n;

		if (!cin || (n >= 1)) //the number is negative
		{
			double j;
			j = n * n;
			cout << "The value  you entered is " << n << " the squared is " << j << endl;
		}
		
		//else if (!cin || (n<0)){
		//	cout << "You entered negative number!\n";
		//	}
		else {  //the number is 0
			cout << " Well you entered 0 to end the program" << endl;
			return 0;
		}
		cout << "Would you like to enter other numbers? Y/N" << endl; 
		cin >> again;
	}
	return 0;
}
	

