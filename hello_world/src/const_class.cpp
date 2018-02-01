#include "const_class.hpp"
#include <iostream>

const_class::const_class(int x)
	: const_num(x) {
}

void const_class::my_print() const {
	std::cout << "const_class::my_print() called. const_num = " << const_num << std::endl;
}
