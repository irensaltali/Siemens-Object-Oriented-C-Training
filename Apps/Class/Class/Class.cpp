#include "pch.h"
#include <iostream>

class Person {
public:
	Person() {
		std::cout << "Person()\n";
		sallary = 2020;
	}
	Person(int sallary) {
		std::cout << "Person(int sallary)\n";
		sallary = sallary;
	}
	~Person() {
		std::cout << "~Person()\n";
		std::cout << Age << "\n";
	}
	std::string LastName;
	int Age;
	void initialize(std::string, int);
private:
	int sallary;
};

void Person::initialize(std::string LastName, int Age) {
	this->LastName = LastName;
	this->Age = Age;
}


int main()
{
	Person muslum;
	muslum.initialize("Alsac", 29);

	Person Demet;
	Person Huseyin(100000);

}
