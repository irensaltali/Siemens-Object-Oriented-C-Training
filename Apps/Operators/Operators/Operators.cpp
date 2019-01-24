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

void ternaryConditional() {
	int a;
	std::cout << "Bir sayi giriniz:";
	std::cin >> a;
	std::cout << (a % 2 == 0 ? "ciftir" : "tektir");
}

void sizeOfFunction() {
	int a;
	std::cout << "Bir sayi giriniz:";
	std::cin >> a;
	std::cout << "int boyutu: " << sizeof(a) << "\n";


	char b;
	std::cout << "Bir harf giriniz:";
	std::cin >> b;
	std::cout << "char boyutu:" << sizeof(b) << "\n";
	std::cout << "b: " << b << "\n";


	char c[100];
	std::cout << "Bir metin giriniz:";
	std::cin >> c;
	std::cout << "char array boyutu:" << sizeof(c) << "\n";
	std::cout << "c: " << c << "\n";

}

void orderOfOperations() {
	int a = 4;
	int b = 32;
	int c = 3232;
	int d = 11;
	int g = 1;
	std::cout << (a + b * c / d % -g);
}

int main()
{
	arithmeticLeftShift();
	bitwiseANDAssignment();
	logicalAND();
	logicalANDwithIf();
	ternaryConditional();
	sizeOfFunction();
	orderOfOperations();
}
