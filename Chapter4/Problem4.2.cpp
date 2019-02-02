
/*
Complete the following program to display the contents of the 2-d array
*/

#include "pch.h"
#include <iostream>

#include <iostream>
using namespace std;
int main() {
	char t_d_array[5][7] = {
	 {' ','/','\\','_','/','\\',' '},
	 {'/',' ','D',' ','D',' ','\\'},
	 {'(','=','=','O','=','=',')'},
	 {'\\',' ',' ','~',' ',' ','/'},
	 {' ','-','-','-','-','-',' '},
	};
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << t_d_array[i][j] << " ";
		}
		cout << endl;
	}
}