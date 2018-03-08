#ifndef MOTHER_HPP
#define MOTHER_HPP

class mother {
public:
	explicit mother();
	void say_hi();
// protected is similar to private, but can be used when inherited
protected:
	int mom_var;
};

#endif
