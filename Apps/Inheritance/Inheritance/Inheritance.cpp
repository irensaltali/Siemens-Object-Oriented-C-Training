// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Person {
public:
	Person() {

		std::cout << "Person()" << std::endl;
	}
	Person(int x) {
		std::cout << "Person():" << x << std::endl;
		age_ = x;
	}
	~Person() {

		std::cout << "~Person()" << std::endl;
	}
	Person(int x, int y) {
		std::cout << "Person(): x:" << x << " y:" << y << std::endl;
		age_ = x;
		kg_ = y;
	}
	void func1() {
		std::cout << "func1" << std::endl;
	}
	virtual void speak() {

	}
protected:
	void func2() {
		std::cout << "func2" << std::endl;
	}
private:
	int age_;
	int kg_;
	void func3() {
		std::cout << "func3" << std::endl;
	}
};

class Student : public Person {
public:
	using Person::Person;
	Student(int x, int y) : Person(x) {
		std::cout << "Student(): x:" << x << " y:" << y << std::endl;
	}
	~Student() {

		std::cout << "~Student()" << std::endl;
	}
	void speak() final {
		std::cout << "Konus" << std::endl;
	}
	void s_func1() {
		std::cout << "s_func1()" << std::endl;
		func1();
	}
protected:
	void s_func2() {
		std::cout << "s_func2()" << std::endl;
		func2();
	}
private:
	void s_func3() {
		std::cout << "s_func3()" << std::endl;
		//func3(); //Inaccessible
	}
};

class GradStudent : public Student {
public:
	using Student::Student;
};

int main()
{
	Person person(3);
	person.speak();
	Student student(5);
	student.speak();
	GradStudent gradst(8);
	gradst.speak();

	//person.func1();
	//person.func2();
	//person.func3();

	//student.func1();
	//student.func2();
	//student.func3();

	//student.s_func1();
	//student.s_func2();
	//student.s_func3();


}
