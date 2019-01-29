// Exception1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using std::cout;

void func1() {
	//throw std::runtime_error("Siemens");
	//throw std::domain_error("Siemens");
	throw 0;
}

int main()
{
	try {
		func1();
		cout << "non-error" << std::endl;
	}
	catch (std::runtime_error e) {
		cout << "runtime_error" << std::endl;
	}
	catch (std::exception e) {
		cout << "exception" << std::endl;
	}
	catch (...) {
		cout << "default" << std::endl;
	}
}
