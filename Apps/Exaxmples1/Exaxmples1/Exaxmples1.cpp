// Exaxmples1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

char func1() {
	std::cout << "func1\n";
	return 'a';
}

char func2() {
	std::cout << "func2\n";
	return 'b';
}

int func3() {
	std::cout << "func3\n";
	return 3;
}

int func4() {
	std::cout << "func4\n";
	return 4;
}

int main()
{
	true ? func1() : func2();
	int a = func3() + func4();
	std::cout << a;


}


