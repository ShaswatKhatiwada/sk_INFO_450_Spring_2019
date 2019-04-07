
#include "pch.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Car {


private:
	string autoOrTruck;
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
	ofstream output;
	output.open("output.txt");

	if (output.is_open()) {
		Car *temp = next;
		while (temp != NULL)
		{
			cout << "Car : " << temp->autoOrTruck << "\n";
			output << temp->autoOrTruck + "\n";
			cout << "Wheels : " << temp->wheels << "\n";
			output << temp->wheels;
			output << "\n";
			cout << "Passengers : " << temp->passengers << "\n";
			output << temp->passengers;
			output << "\n";
			if (temp->autoOrTruck == "automobile")
			{
				cout << "Type : " << temp->type << "\n";
				output << temp->type + "\n";
			}
			else
			{
				cout << "Cargo : " << temp->cargo << "\n";
				output << temp->cargo;
				output << "\n";
			}

			temp = temp->next;
		}
		output.close();
	}
	else
	{
		cout << "File failed to open " << "\n";
	}
}

int main()
{
	using namespace std;
	char add[] = "yes";
	Car *head = new Car(" ", 0, 0, 0, " ");

	while (add[0] == 'y' && add[1] == 'e' && add[2] == 's')
	{

		char car[100];
		cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck': ";
		cin >> car;
		int wheels;
		cout << "How many wheels does this vehicle have? ";
		cin >> wheels;
		int passengers;
		cout << "How many passengers can this vehicle hold? ";
		cin >> passengers;
		if (car[0] == 't' && car[1] == 'r' && car[2] == 'u' && car[3] == 'c' && car[4] == 'k')
		{
			int cargo;
			cout << "How much cargo (in pounds) can this vehicle hold? ";
			cin >> cargo;

			head->insert(car, wheels, passengers, cargo, " ");
		}
		else
		{
			char type[100];
			cout << "What type of automobile is this? Enter van, car, or wagon : ";
			cin >> type;
			head->insert(car, wheels, passengers, 0, type);
		}

		cout << "Would you like to enter another vehicle? yes or no : ";
		cin >> add;
	}

	head->printAll();
}
