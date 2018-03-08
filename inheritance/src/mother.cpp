#include "mother.hpp"
#include <iostream>

mother::mother()
	: mom_var(422)
{
	std::cout << "Mother constructed." << std::endl;
}

void mother::say_hi() {
	std::cout << "Mother says hi." << std::endl;
}
