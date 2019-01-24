// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void arithmeticLeftShift() {
	int a = 3;
	int b = 4;
	int c = a << b;

	std::cout << c;
}

void bitwiseANDAssignment() {
	int a = 10;
	int b = 6;

	a &= b;

	std::cout << "a:" << a << " b: " << b << "\n";
}

void logicalAND() {
	int a = 12;
	int b = 4;
	bool c = a && b;
	std::cout << c;
}

void logicalANDwithIf() {
	int a = 3330;

	if (a) {
		std::cout << "I'm in";
	}
}

int main()
{
	arithmeticLeftShift();
	bitwiseANDAssignment();
	logicalAND();
	logicalANDwithIf();
}
