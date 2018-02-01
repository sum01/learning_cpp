#include "myclass.hpp"

myclass::myclass(int x)
	: var(x)
{
}

int myclass::operator+(myclass &obj) {
	return obj.var + this->var;
}
