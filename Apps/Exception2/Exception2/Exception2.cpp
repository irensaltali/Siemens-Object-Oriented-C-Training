// Exception2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using std::cout;

class Hata {

};

class SHata : public Hata {

};

class ZHata : public SHata {

};

class AHata : public Hata {

};

void func1() {
	AHata h;
	throw h;
}

int main()
{
	try {
		func1();
	}
	catch (SHata e) {
		cout << "SHata" << std::endl;
	}
	catch (Hata e) {
		cout << "Hata" << std::endl;
	}
	catch (...) {
		cout << "dafault" << std::endl;
	}
}