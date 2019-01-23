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
	 void feed(int);
};




