#include "pch.h"
#include <iostream>
	using namespace std;
	int main()
	{
		int gallons, liters;
		std::cout << "Enter numbers of gallons:";
		cin >> gallons;
		liters = gallons * 4;
		cout << "Liters: " << liters;
		cin.get();
		return 0;
	}
