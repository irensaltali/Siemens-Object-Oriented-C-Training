#include "pch.h"
#include "Animal.h"
#include <iostream>


Animal::Animal()
{
	this->hunger = 0;
}

Animal::Animal(std::string n)
{
	std::cout << "Animal\n";
	this->name = n;
	this->hunger = 0;
}

Animal::~Animal()
{
}

std::string Animal::getName() {
	return this->name;
}

void Animal::feed(int food) {
	if (food > 0) {
		this->hunger += food;
	}
}

bool Animal::isHunry() {
	if (this->hunger < 0) {
		return true;
	}
	else {
		return false;
	}
}

void Animal::move(int movement) {
	if (movement > 0) {
		this->hunger -= movement;
	}
}
