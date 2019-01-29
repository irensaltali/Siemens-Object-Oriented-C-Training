// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using std::cout;

void func3() {
	throw std::runtime_error("Siemens");
	cout << "func3" << std::endl;
}

void func2() {
	func3();
	cout << "func2" << std::endl;
}

void func1() {
	func2();
	cout << "func1" << std::endl;
}

int main()
{
	try {
		func1();
	}
	catch(...){
		cout << "HATA";
	}
}
