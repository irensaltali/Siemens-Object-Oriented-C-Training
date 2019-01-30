// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Sudoku {

private:
	int matrix[9][9] = {
		{9,0,0,5,0,0,0,0,0},
		{6,8,7,3,4,0,0,5,0},
		{0,0,4,1,0,7,0,3,0},
			
		{0,4,0,0,2,6,0,0,8},
		{0,2,6,0,5,1,4,9,0},
		{0,9,1,4,0,3,0,6,2},

		{0,0,2,7,0,0,9,0,5},
		{0,0,0,0,0,0,3,0,1},
		{5,0,0,0,0,9,6,0,7}
	};
};

int main()
{
	std::cout << "Hello World!\n";
}
