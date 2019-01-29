// Exception3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using std::cout;
using std::endl;

void func1() {
	throw std::runtime_error("Ahmet");
	cout << "func1()" << endl;
}

void func2() {
	try {
		func1();
		cout << "func2()" << endl;
	}
	catch (std::exception e) {
		cout << "Yakaladim" << endl;
		throw e;
	}
}

int main()
{
	try
	{
		func2();
		cout << "main" << endl;
	}
	catch (std::exception e)
	{
		cout << "main catch" << endl;
	}
}
