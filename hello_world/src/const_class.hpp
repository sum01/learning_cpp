#ifndef CONST_CLASS_HPP
#define CONST_CLASS_HPP

class const_class {
public:
	// Sets the const integer upon instantiation
	explicit const_class(int);
	void my_print() const;
private:
	const int const_num;
};

#endif
