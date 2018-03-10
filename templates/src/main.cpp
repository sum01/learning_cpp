#include "sum.hpp"
#include "classes.hpp"
#include <string>
#include <iostream>

int main() {
	// Using same types in a sum template
	const int x = 4, y = 13;
	sum(x, y);
	const double dx = 44.13, dy = 1.40;
	sum(dx, dy);

	// Using mixed types in a sum template
	mixed_sum(x, dx);

	// Creating a new class from the pair template
	pair<int> pair_int {x, y};
	pair<double> pair_double {dx, dy};
	pair_int.say_bigger();
	pair_double.say_bigger();

	// Specialized template classes (aka class template overloading)
	// One takes anything...
	specialized<std::string> special_str {"test string"};
	specialized<unsigned int> special_uint {2355};
	specialized<signed int> special_sint {-254};
	specialized<double> special_double {24155.5155};
	// the other is only for char types...
	specialized<char> special_char {'h'};

	// NOTE: try/catch blocks have their own scope, so the int "test" can't be used outside it
	try {
		int test = 1;
		// The test-case for throwing an error
		if (test < 2) {
			// The error string passed to catch
			throw std::string {"This error will always trigger."};
		}
		// This will never trigger since the above throw exits the try block
		if (true) {
			throw 1;
		}
	} catch (const std::string err_str) {
		// This will always trigger
		std::cerr << "[ERROR] " << err_str << std::endl;
	} catch (int err_int) {
		// This will never trigger
		std::cerr << "[ERROR] int: " << err_int << std::endl;
	}

	// Since we declare "abc" outside of the try/catch, we can use it after
	unsigned int abc;
	std::cout << "Enter a number > 0" << std::endl;
	std::cin >> abc;
	try {
		if (abc < 1) {
			throw abc;
		} else {
			std::cout << "Good number" << std::endl;
		}
	} catch (const std::string x) {
		std::cerr << "[ERROR] " << x << std::endl;
		return 1;
	}

	std::cout << (abc + 1) << std::endl;

	return 0;
}
