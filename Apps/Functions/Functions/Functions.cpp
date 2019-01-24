// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

bool isOdd(int);
void scope();
int x = 3;
void passByValue(int);
void passByReference(int& c);

int main()
{
	//std::cout << isOdd(4); 
	//scope();
	int a = 7;
	std::cout << "Adres a:" << &a << "\n";
	passByValue(a);
	std::cout << "Deger a:" << a << "\n";

	passByReference(a);
	std::cout << a << "\n";
}

bool isOdd(int x) {
	return x % 2;
}
void scope() {
	char b = 'a';
	while (x < 5) {
		int i = 1;
		x += i;
	}
	for (int d = 3; d < 15;) {
		d *= x;
	}
}

void passByValue(int b) {
	std::cout << "Adres b:" << &b << "\n";
	b += 5;
	std::cout << "Deger b:" << b << "\n";
}

void passByReference(int& c) {
	std::cout << "Adres c:" << &c << "\n";
	c += 12;
	std::cout << "Deger c:" << c << "\n";

}

