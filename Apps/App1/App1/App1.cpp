#include "pch.h"
#include "Animal.h"
#include <iostream>
#include <string>

int main()
{
	Animal animal("Kedi");
	std::cout << animal.getName();

	animal.feed(3);
}
