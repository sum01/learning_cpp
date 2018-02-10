#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <string>

class myclass {
public:
	int var;
	std::string name;
	myclass();
	explicit myclass(int);
	void print_var();
	// when class1 + class2 is called, it returns the result of adding their "var"
	myclass operator+(myclass &);
};

#endif
