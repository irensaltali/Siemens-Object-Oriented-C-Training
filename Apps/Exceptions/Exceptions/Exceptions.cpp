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
		cout << "try" << std::endl;
	}
	catch (...) {
		cout << "HATA";
	}
	cout << "main" << std::endl;
}

//ÇÖZÜM
//24
//25
//26
//27
//19
//20
//14
//15
//9
//10
//15
//20
//27
//30
//31 HATA
//32
//34 main