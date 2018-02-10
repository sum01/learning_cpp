#ifndef PERSON_HPP
#define PERSON_HPP

#include "birthday.hpp"
#include <string>

class person {
public:
	person(const std::string &, const std::string &, const birthday);
	void say_bday() const;
	void say_name() const;
private:
	const std::string first_name;
	const std::string last_name;
	const birthday bday;
};

#endif
