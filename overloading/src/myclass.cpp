#include "myclass.hpp"
#include <iostream>

// A constructor that takes no input
// Used for if you don't want to define an intial value
myclass::myclass()
	: var(0)
{
}

// The overloaded constructor that takes an int
// Used for defining an intial value
myclass::myclass(int n)
	: var(n)
{
}

void myclass::print_var() {
	// When adding more than 2 classes, a "floating" class will exist to temporarily hold results. This names it.
	if (this->name == "") {
		this->name = "floating-name-placeholder";
	}
	std::cout << this->name << " = " << this->var << std::endl;
}

myclass myclass::operator+(myclass &obj) {
	this->print_var();
	obj.print_var();
	myclass res;
	res.var = this->var + obj.var;
	return res;
	// return obj.var + this->var;
}
