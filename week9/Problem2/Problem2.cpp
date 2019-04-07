// week9_Problem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Car {


private:
	std::string autoOrTruck;
	int wheels;
	int passengers;
	int cargo;
	string type;
	Car *next;

public:
	void insert(string autoOrTruck, int wheels, int passengers, int cargo, string type);
	Car(string autoOrTruck, int wheels, int passengers, int cargo, string type);
	void printAll();
};

Car::Car(string AutoOrTruck, int Wheels, int Passengers, int Cargo, string Type)
{
	autoOrTruck = AutoOrTruck;
	wheels = Wheels;
	passengers = Passengers;
	cargo = Cargo;
	type = Type;
	next = NULL;
}

void Car::insert(string autoOrTruck, int wheels, int passengers, int cargo, string type)
{
	if (next != NULL)
	{
		next->insert(autoOrTruck, wheels, passengers, cargo, type);
	}
	else
	{

		next = new Car(autoOrTruck, wheels, passengers, cargo, type);
	}

}

void Car::printAll()
{

	Car *temp = next;
	while (temp != NULL)
	{
		cout << "{\"road_vehicle\": \"" << temp->autoOrTruck << "\",";
		cout << "\"wheels\": " << temp->wheels << ",";
		cout << "\"passengers\": " << temp->passengers << ",";

		if (temp->autoOrTruck == "automobile")
		{
			cout << "\"type\": " << temp->type << "\"}\n";
		}
		else
		{
			cout << "\"cargo\": " << temp->cargo << "}\n";
		}

		temp = temp->next;
	}
}

int main()
{
	using namespace std;
	Car *head = new Car(" ", 0, 0, 0, " ");

	string line;

	ifstream file("output.txt");

	if (file.is_open())
	{
		while (getline(file, line))
		{

			string car = line;
			int wheels;
			getline(file, line);
			stringstream cast(line);
			cast >> wheels;
			int passengers;
			getline(file, line);
			stringstream cast2(line);
			cast2 >> passengers;
			if (car == "truck")
			{
				int cargo;
				getline(file, line);
				stringstream cast3(line);
				cast3 >> cargo;
				head->insert(car, wheels, passengers, cargo, " ");
			}
			else
			{
				string type;
				getline(file, line);
				type = line;
				head->insert(car, wheels, passengers, 0, type);
			}
		}
		file.close();
		head->printAll();
	}
	else
	{
		cout << "File failed to open";
	}
}