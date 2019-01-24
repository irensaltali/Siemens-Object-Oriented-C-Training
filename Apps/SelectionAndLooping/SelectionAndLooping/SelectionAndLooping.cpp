// SelectionAndLooping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void ifFunction(int x) {
	if (x == 6) {
		std::cout << "Uyanma vakti.";
	}
	else if (x < 6) {
		std::cout << "Uyumaya devam. Kesin tuvaletim gelmistir.";
	}
	else {
		std::cout << "Kos kos kos gec kaldin";
	}
}

void switchFunction(int nott) {

	switch (nott)
	{
	case 90:
		std::cout << "AA\n";
		break;
	case 80:
		std::cout << "BA\n";
		break;
	case 70:
		std::cout << "BB\n";
		break;
	case 40:
		std::cout << "FF\n";
		break;
	default:
		std::cout << "00\n";
		break;
	}
}

void whileFunction() {
	int nott;

	do {
		std::cout << "Not giriniz: ";
		std::cin >> nott;
		switchFunction(nott);
	} while (nott != 0);
	std::cout << "SON";
}

void forFunction(int a, int b) {

	for (int i = a; i <= b; i += 3) {
		std::cout << i << "\n";
	}

	// ERROR:   std::cout << i << "\n";

	/*for (; a <= b; a += 3) {
		std::cout << a << "\n";
	}*/

}

void loopBreakFunc(int a, int b) {
	for (; a <= b; a += 5) {
		if (a > 500)
			break;
		std::cout << a << "\n";
	}
}

void loopInLoopBreak(int a, int b) {
	for (int i = 1; i < 10; i++) {
		for (int x = a; x <= b; x += i) {
			if (x > 50)
				break;
			std::cout << x << "\n";
		}
		for (int x = 1; x < 20; x++) {
			std::cout << "#";
		}
		std::cout << "\n";
	}
}

int main()
{
	int a, b;
	std::cout << "Baslangic sayisini giriniz:";
	std::cin >> a;
	std::cout << "Bitis sayisini giriniz:";
	std::cin >> b;

	//ifFunction(a);
	//switchFunction(a);
	//whileFunction();
	//forFunction(a, b);
	//loopBreakFunc(a, b);
	loopInLoopBreak(a, b);
}
