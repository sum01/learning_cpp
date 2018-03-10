#ifndef TEMPLATES_CLASSES_HPP
#define TEMPLATES_CLASSES_HPP

#include <iostream>

template<typename T>
class pair {
private:
	T first, second;
public:
	explicit pair(T a, T b) :
		first(a), second(b) {
	};
	void say_bigger() {
		std::cout << "The bigger one is " << (this->first > this->second ? this->first : this->second) << std::endl;
	};
};

// This class will be used for all but "char" types
template<typename T>
class specialized {
public:
	explicit specialized(T x) {
		std::cout << "Not a char: " << x << std::endl;
	};
};

// This is a specialized template only for "char" types
// Basically template overloading
template<>
class specialized<char> {
public:
	explicit specialized(char x) {
		std::cout << "Is a char: " << x << std::endl;
	};
};

#endif
