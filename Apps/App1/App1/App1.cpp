#include "pch.h"
#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <string>

int main()
{
	/*Animal animal("Kedi");
	std::cout << animal.getName() << "\n";

	std::cout << animal.isHunry() << "\n";
	animal.feed(3);
	std::cout << animal.isHunry() << "\n";
	animal.move(4);
	std::cout << animal.isHunry() << "\n";*/

	Dog dog("Karabas");
	std::cout << dog.getName();
	dog.move(3);

}
