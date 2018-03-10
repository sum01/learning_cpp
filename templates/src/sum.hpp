#ifndef TEMPLATES_SUM_HPP
#define TEMPLATES_SUM_HPP

#include <iostream>
#include <string>
#include <vector>

// Auto-defined by Cmake on Release builds
#ifndef NDEBUG
	// Used to print type info in debug mode
	#include <boost/type_index.hpp>
#endif

// A template to output the literal name of the type
// Only says anything in debug builds
template<typename T>
std::string debug_check_type(T tar) {
	#ifndef NDEBUG
		return boost::typeindex::type_id<T>().pretty_name();
	#else
		return "";
	#endif
}

// (Sort of) replaces the need for a template by using auto
std::string debug_str(auto *a, auto *b){
	const std::string d_a = debug_check_type(a);
	const std::string d_b = debug_check_type(b);
	if (d_a != "" && d_b != "") {
		return "[DEBUG] " + d_a + " + " + d_b + " | ";
	} else {
		return "";
	}
}

// Can't find a way to separate interface from implementation..
// the compiler complains with any other way I've tried.
template<typename T>
void sum(T a, T b) {
	// Credit: https://stackoverflow.com/a/33337885
	// Use Boost to get the literal name of the type T (int, double, etc.)
	// Then print the results
	std::cout << debug_str(&a, &b) << a << " + " << b << " = " << (a + b) << std::endl;
}

template<typename I, typename F>
void mixed_sum(I x, F y) {
	std::cout << debug_str(&x,&y) << (x + y) << std::endl;
}

#endif
