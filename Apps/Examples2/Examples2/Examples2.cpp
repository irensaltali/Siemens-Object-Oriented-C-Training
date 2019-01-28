// Examples2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


class Person {
public:
	Person() {
		std::cout << "Person()\n";
	}
	~Person() {
		std::cout << "~Person()\n";
	}
	int x;
	double  y;
};

void FuncitonOverloading();
void Recursive();


int main()
{
	//FuncitonOverloading();
	//Recursive();

	/*std::cout << "Before new \n";
	Person* person = new Person();


	std::cout << "Before delete \n";
	delete person;*/

	Person a[7];
	std::cout << " size of array: " << sizeof(a) << "\n";
	std::cout << " size of element: " << sizeof(*a) << "\n";
	std::cout << "Length of array = " << (sizeof(a) / sizeof(*a)) << std::endl;
}




#pragma region  FuncitonOverloading

void FuncOver(int x) {
	std::cout << "FuncOver with 1 int parameter\n";
}

void FuncOver(int x, int y) {
	std::cout << "FuncOver with 2 int parameter\n";
}

void FuncOver(int x, char y) {
	std::cout << "FuncOver with 1 int and 1 char parameter\n";
}

void FuncitonOverloading() {
	FuncOver(1);
	FuncOver(2, 3);
	FuncOver(4, 'a');
}
#pragma endregion

int FaktWithFor(int);
int FaktRecursive(int);
int PowerRecursive(int, int);

void Recursive() {
	int sayi = 6;
	std::cout << "For: " << FaktWithFor(sayi) << "\n";
	std::cout << "Recursive: " << FaktRecursive(sayi) << "\n";

	int ust = 4;
	std::cout << "pow:" << pow(sayi, ust) << " PowerRecursive:" << PowerRecursive(sayi, ust);
}



int FaktWithFor(int x) {
	//AYSEL
	int f = 1;
	for (int i = 1; i <= x; i++) {
		f *= i;
	}

	return f;
}

int FaktRecursive(int x) {
	if (x == 1)
		return 1;
	else
		return x * FaktRecursive(x - 1);
}

int PowerRecursive(int sayi, int ust) {
	if (ust == 0)
		return 1;
	else
		return sayi * PowerRecursive(sayi, ust - 1);
}


