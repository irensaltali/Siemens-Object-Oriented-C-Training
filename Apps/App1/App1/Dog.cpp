#include "pch.h"
#include "Dog.h"


Dog::Dog()
{
	
}

Dog::Dog(std::string x):Animal(x)
{
	std::cout << "Dog\n";
}

void Dog::move(int movement)
{
	if (movement > 0) {
		Animal::move(movement);
		Animal::move(movement);
	}
}



Dog::~Dog()
{
}
