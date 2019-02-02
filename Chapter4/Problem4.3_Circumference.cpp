// Week4.3_pi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


using namespace std;
const pi = 3.14;// standard global

double calculateCircumference(double radius);

int main() {
	double radius;


	cout << "Enter the radius of circle here: ";
	cin >> radius;

	cout << "The cumference of circle is: " << calculateCircumference(radius) << endl;// i guessed here too looool

	return 0;
}


double calculateCircumference(double radius)// not 100% here tho, should work fine
{
	double Circumference;
	//double pi = 3.14;
	Circumference = 2 *pi * radius;

	return Circumference;
}