#include "my_class.hpp"
#include <iostream>

// The actual constructor method
my_class::my_class() {
	std::cout << "my_class constructor triggered" << std::endl;
}

// The actual destructor method
my_class::~my_class() {
	std::cout << "my_class destructor triggered" << std::endl;
}
