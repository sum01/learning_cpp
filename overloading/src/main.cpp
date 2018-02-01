#include "myclass.hpp"
#include <iostream>

int main() {
	myclass my_obj(23);
	myclass sec_obj(3);

	std::cout << "my_obj = " << my_obj.var << std::endl;
	std::cout << "sec_obj = " << sec_obj.var << std::endl;
	std::cout << "overloaded operator to add objects | my_obj + sec_obj = " << my_obj + sec_obj << std::endl;

	return 0;
}
