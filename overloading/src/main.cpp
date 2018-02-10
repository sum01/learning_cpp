#include "myclass.hpp"
#include <iostream>

int main() {
	myclass my_obj(23);
	my_obj.name = "my_obj";

	myclass sec_obj(3);
	sec_obj.name = "sec_obj";

	// Sets 'var' to 0, since we don't declare a constructor value.
	myclass third_obj;
	third_obj.name = "third_obj";

	// Make a new 'myclass' with the values added from all other objects
	// This is where the + operator overloading is triggered
	myclass result = my_obj + sec_obj + third_obj;
	std::cout << "overloaded addition result = " << result.var << std::endl;


	return 0;
}
