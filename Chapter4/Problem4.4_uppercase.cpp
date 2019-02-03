#include "pch.h"
#include <iostream>
#include <string.h>
#include <cctype> 


using namespace std;
using std::toupper;


char  get_user_input();
void to_upper_case(char &letter);
int main() {
	char user_input_letter;
	cout << "Type in a letter grade, lowercase or uppercase." << endl;
	if ('0' != (user_input_letter = get_user_input())) {
		to_upper_case(user_input_letter);
		switch (user_input_letter) {
		case 'A': cout << "Super Great job on an A!" << endl; break;
		case 'B': cout << "Great job on a B!" << endl; break;
		case 'C': cout << "Good job on a C!" << endl; break;
		case 'D': cout << "Keep at it, you can get there." << endl; break;
		case 'F': cout << "F is for #fail" << endl; break;
		default: cout << "This is not a valid grade: " << user_input_letter << endl;
		}
	}
	cout << "You have entered 0.  Exiting." << endl;
}
char  get_user_input() {
	char user_input_letter;
	cin >> user_input_letter;
	return user_input_letter;
}
void to_upper_case(char & user_input_letter) {
	user_input_letter = toupper(user_input_letter);
	cout << user_input_letter << endl;
}



