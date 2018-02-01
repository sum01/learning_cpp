#ifndef BIRTHDAY_HPP
#define BIRTHDAY_HPP

#include <string>

class birthday {
public:
	// Initialize the (permanent) birthday values
	birthday(int, int, int);
	// Print the birthday in ISO format
	void print() const;
	std::string get_day_iso() const;
	std::string get_month_iso() const;
	std::string get_year_iso() const;
	int get_day() const;
	int get_month() const;
	int get_year() const;
private:
	const int day;
	const int month;
	const int year;
};

#endif
