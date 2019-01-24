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
		std::cout << "AA";
		break;
	case 80:
		std::cout << "BA";
		break;
	case 70:
		std::cout << "BB";
		break;
	case 40:
		std::cout << "FF";
		break;
	default:
		std::cout << "00";
		break;
	}
}

int main()
{
	int a;
	std::cin >> a;
	//ifFunction(a);
	switchFunction(a);
}
