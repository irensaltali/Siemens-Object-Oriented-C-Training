#include "pch.h"
#include "Animal.h"
#include <iostream>


Animal::Animal()
{

}

Animal::Animal(std::string n)
{
	this->name = n;
}

Animal::~Animal()
{
}

std::string Animal::getName() {
	return this->name;
}

void Animal::feed(int food) {
	if (food > 0) {
		this->hunger = this->hunger + food;
		this->hunger += food;
	}

}
