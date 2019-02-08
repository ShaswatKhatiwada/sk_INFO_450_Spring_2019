/*
Write a program that inputs the names of the students in the class (to a max of 30 names)

Store em in a 2-dimensional array

Then outputs the class list to the console when the user enters an empty string (by pressing enter)
*/
#include "pch.h"
#include <iostream>
#include <string>

int main()
{

	std::string SName[5][6];
	std::string name = " ";
	int i = 0, j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			std::cout << "What is your name? ";
			getline(std::cin, name);
			if (name.empty())
			{
				SName[i][j] = '\0';
				//print the names
				int x, y;
				for (x = 0; x < 5; x++)
				{
					for (y = 0; y < 6; y++)
					{
						if (!SName[x][y].empty())
						{
							std::cout << SName[x][y];
							std::cout << "\n";
						}
						else
						{
							exit(0);
						}
					}
				}
				exit(0);
			}
			else
			{
				SName[i][j] = name;
			}
		}
	}


	//print the names
	int x = 0, y = 0;
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 6; y++)
		{
			if (!SName[x][y].empty())
			{
				std::cout << SName[x][y];
				std::cout << "\n";
			}
			else
			{
				exit(0);
			}
		}
	}
}
