#include "pch.h"
#include <iostream>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
#pragma warning(disable : 4996)
using namespace std;
class Employee {
private:
	char firstname[255];
	char lastname[255];
	char type[20];
	bool is_hourlyorannual;
	char compensation[255];

public:
	void set_firstname(const char* in_fname) { strcpy(firstname, in_fname); }
	void set_lastname(const char* in_lname) { strcpy(lastname, in_lname); }
	void set_type(const char* in_type) { strcpy(type, in_type); }
	void set_compensation(const char* in_comp) { strcpy(compensation, in_comp); }
	void set_is_hourlyorannual(bool in_hoa) { is_hourlyorannual = in_hoa; }
	void printEntry() {
		if (!is_hourlyorannual) {
			cout << lastname << "," << firstname << " " << " $ Annual Compensation :" << "" << compensation << "\n" << endl;
			cout << firstname << ":" << endl;
			cout << compensation << endl;
		}
		else {
			cout << lastname << "," << firstname << " " << "$ Annual Compensation :" << compensation << "\n" << endl;
		}
	}
};
int main()
{
	const int MAX = 3;
	int i;
	Employee entries[MAX];
	for (int x = 1; x < MAX; x++) {
		cout << "Entry: " << x << endl;
		char *value = (char *)malloc(255);
		(int *)malloc(30 * sizeof(int));
		cout << "Enter employees first name:" << endl;
		cin.getline(value, 255);
		entries[x].set_firstname(value);
		cout << "Enter employee's last name:" << endl;
		cin.getline(value, 255);
		entries[x].set_lastname(value);
		cout << "Are you an hourly employee? (Please Press Yes for hourly and No to enter your yearly salary.)" << endl;
		cin.getline(value, 20);
		if (strcmp(value, "Yes") == 0) {
			cout << "Since you are a hourly employee please enter your hourly rate ( Example: if $30/hrs just enter 30): " << endl;
			cin.getline(value, 255);
			i = atoi(value);  
			int annual = i * 2000; 
			value = _itoa(annual, value, 10); 
			entries[x].set_compensation(value);
		}
		else if (strcmp(value, "No") == 0) {
			cout << "Since you are Annual employee, please enter your yearly salary ( Example: if $60,000 just enter 60000):" << endl;
			cin.getline(value, 255);
			entries[x].set_compensation(value);
		}
		else {
			cout << "There was an error, please try again. " << endl;
		}

	}
	for (int x = 0; x < MAX; x++) {
	entries[x].printEntry();
	}
}