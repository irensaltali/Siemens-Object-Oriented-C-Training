#pragma once
#include "Animal.h"

//Header File - Bu sınıf Animal sınıfından miras alıyor.
class Dog : public Animal
{
public:
	Dog();
	Dog(std::string);
	~Dog();

	//Hareket Durumu
	void move(int); // Move isimli fonksiyon
};

