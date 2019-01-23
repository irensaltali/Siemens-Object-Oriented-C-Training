#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog();
	Dog(std::string);
	~Dog();

	//Hareket Durumu
	void move(int);
};

