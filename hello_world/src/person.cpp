#include "person.hpp"
#include <string>
#include <iostream>

person::person(std::string first, std::string last, birthday birth)
	: first_name(first), last_name(last), bday(birth) {
}

void person::say_bday() const {
	this->bday.print();
}

void person::say_name() const {
	std::cout << "My name is " << this->first_name << " " << this->last_name << std::endl;
}
