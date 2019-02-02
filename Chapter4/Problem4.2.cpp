
/*
Complete the following program to display the contents of the 2-d array
*/
#include <pch.h>
#include <iostream>
using namespace std;

int main()
{
	char temp[5][7] = {
		{' ', '/','\\','_','/','\\',' '},
		{'/', ' ','D',' ','D',' ','\\'},
		{'(', '=','=','O','=','=',')'},
		{'\\', ' ',' ','~',' ',' ','/'},
		{' ', '-','-','-','-','-',' '},
	};
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 7; j++)
		{
			cout << temp[i][j];
		}
	}

	return 0;
}