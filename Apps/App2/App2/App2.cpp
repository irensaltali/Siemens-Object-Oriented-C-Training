// App2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//Function Declarations and Definitions
int square(int); // declare square

int square(int x) { // declare and define square
	return x * x;
}


//Trailing Return-Type Syntax
auto min(int, int);

auto min(int x, int y)
{
	return x < y ? x : y;
}

//Parameter Passing
void increment(int& x) // x is passed by refernce
{
	++x;
}

void decrease(int x) {
	--x;
}


//Inlining of a Function
inline bool isEven(int x) {
	return x % 2 == 0;
}
void myFunction() {
	int i = 3;
	bool result = isEven(i);
}

void myFunctionInline() {
	int i = 3;
	bool result = (i % 2 == 0);
}

int main()
{
	std::cout << "Hello World!\n";
	std::cout << min(3, 4) << "\n";
	int i = 10;
	increment(i);
	std::cout << i << "\n";
	decrease(i);
	std::cout << i << "\n";
}



