#include "pch.h"
#include "Animal.h"
#include <iostream>

//Default constructor
Animal::Animal()
{
	this->hunger = 0;
}

//Constructor
Animal::Animal(std::string n)
{
	std::cout << "Animal\n";
	this->name = n;
	this->hunger = 0;
}

//Destructor
Animal::~Animal()
{
}

//Function
std::string Animal::getName() {
	return this->name;
}

//Function
void Animal::feed(int food) {
	if (food > 0) {
		this->hunger += food;
	}
}

//Function
bool Animal::isHunry() {
	if (this->hunger < 0) {
		return true;
	}
	else {
		return false;
	}
}

//Function
void Animal::move(int movement) {
	if (movement > 0) {
		this->hunger -= movement;
	}
}
