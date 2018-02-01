#ifndef MYCLASS_HPP
#define MYCLASS_HPP

class myclass {
public:
int var;
myclass();
myclass(int);
// when class1 + class2 is called, it returns the result of adding their "var"
int operator+(myclass &obj);
};

#endif
