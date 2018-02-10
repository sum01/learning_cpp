// Provides cin and cout
#include <iostream>
// rand and srand
#include <cstdlib>
// Get system time
#include <ctime>
// For to_string and the string type
#include <string>
#include "my_class.hpp"
#include "const_class.hpp"
#include "birthday.hpp"
#include "person.hpp"

// Recursive function
int factorial(int x) {
	if (x == 1) {
		return 1;
	} else {
		return x * factorial(x - 1);
	}
}

// Taking a reference and changing its value
void change_by_ref(int *x) {
	*x = 242;
}

// Changing by value
int change_by_val(int x) {
	return x + 2;
}

// Declaring our class in-line (without a header file)
class test_class {
private:
	std::string priv_name;
	std::string priv_name_second;
	std::string get_priv_name() {
		return priv_name + " " + priv_name_second;
	}
// The methods/vars accessible by all that inherit this class
public:
// Method
	void say(const std::string &str) {
		std::cout << str << std::endl;
	}
	// A "constructor" method, which is called whenever an instance of the class is created
	// NOTE: it must have the name of the class
	explicit test_class(const std::string &last_name) {
		say("test_class instantiated");
		priv_name_second = last_name;
	}
	std::string name;
// Method that returns something
	int add_1(int x) {
		return x + 1;
	}
// Sets a passed name on the private "priv_name" var
	void set_priv_name(const std::string &new_name) {
		// self isn't needed
		priv_name = new_name;
	}
// prints the "priv_name"
	void say_priv_name() {
		say(get_priv_name());
	}
};

int main() {
	/*
	   Type in a code to declare two variables, a and b; and two pointers, pa and pb, pointing to a and b, respectively. The value of a is changed via pointer pa, adding to it the value of b accessed via pointer pb.
	 */
	int a = 1;
	int b = 2;
	int *pa = &a;
	*pa = 3;
	int *pb = &b;
	*pb += *pa;
	std::cout << *pa << " " << *pb << std::endl;

	// Declares an int on the heap
	int *test = new int;
	// Assign a value to that heap int
	*test = 2533;
	// Print the literal value, and mem address
	std::cout << "Value: " << *test << " at memory location: " << &test << std::endl;
	// Deallocate the memory once done with it so to avoid leaks
	delete test;

	std::cout << "\nRandom data:" << std::endl;
	std::srand(std::time(0));

	for (int z = 0; z < 10; z++) {
		std::cout << std::rand() << std::endl;
	}

	// Running a recursive function
	std::cout << "6! = " << factorial(6) << std::endl;

	// Changing a value by reference
	int xyz = 4;
	std::cout << "xyz before changing = " << xyz << std::endl;
	change_by_ref(&xyz);
	std::cout << "xyz after changing = " << xyz << std::endl;

	// Creating our object with the class "test_class" as its type
	test_class my_obj("Hilda");
	// Setting the public name variable
	my_obj.name = "my_obj";
	// Printing a public variable
	my_obj.say("Hi, my name is " + my_obj.name);
	// Print the returned value (after converting to string)
	my_obj.say(std::to_string(my_obj.add_1(2)));

	// Indirectly setting the name via a public method
	// Since it's private, we can't do my_obj.priv_name = "Whatever"
	my_obj.set_priv_name("Jeff Person");
	// Printing the private name via a public method
	my_obj.say_priv_name();

	// Example second instantiation, without doing anything else
	test_class second_obj("Jeofffffff");

	// Using our "external" class, from the my_class library
	my_class external_obj;

	// After creation, the number can never be changed (since it's const)
	const const_class my_const_obj(23);
	my_const_obj.my_print();

	// Creating a new person, named rebecca smith, with a birthday
	// Note that we don't actually need to declare a birthday var
	const person rebecca("Rebecca", "D", birthday(1990, 3, 2));
	rebecca.say_name();
	rebecca.say_bday();

	const person george("George", "Carlin", birthday(42, 1, 30));
	george.say_name();
	george.say_bday();

	// Return a 0 for "all good"
	return 0;
}
