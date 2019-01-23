#include "pch.h"
#include "Dog.h"


//Default constructor
Dog::Dog()
{
	
}

//Constructor
Dog::Dog(std::string x):Animal(x)
{
	std::cout << "Dog\n";
}

//Function
void Dog::move(int movement)
{
	if (movement > 0) {
		Animal::move(movement);
		Animal::move(movement);
	}
}


//Destructor
Dog::~Dog()
{
}
