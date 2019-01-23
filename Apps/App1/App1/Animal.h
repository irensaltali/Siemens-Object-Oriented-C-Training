#include <iostream>
#pragma once

class Animal
{
private:
	std::string name;
	int hunger;

public:
	Animal();
	Animal(std::string);
	 ~Animal();
	 std::string getName();

	 //Açlık Durumu
	 void feed(int);
	 bool isHunry();

	 //Hareket Durumu
	 void move(int);
};




