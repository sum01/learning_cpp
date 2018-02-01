#include "birthday.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

// Constructor that fills the const birthday
birthday::birthday(int y, int m, int d)
	: day(d), month(m), year(y) {
	// Hold the name of what's invalid
	std::string is_not_valid = "";
	// TODO: Check max day against correct number, based on the month
	if (d < 1 || d > 31) {
		is_not_valid = "day = " + std::to_string(d);
	} else if (m < 1 || m > 12) {
		is_not_valid = "month = " + std::to_string(m);
	} else if (y < 1) {
		is_not_valid = "year = " + std::to_string(y);
	}
	// Throw an error if we found an invalid argument
	if (is_not_valid != "") {
		throw std::invalid_argument("Recieved a bad birthday argument: " + is_not_valid);
	}
}

int birthday::get_day() const {
	return this->day;
}
int birthday::get_month() const {
	return this->month;
}
int birthday::get_year() const {
	return this->year;
}

std::string birthday::get_day_iso() const {
	const std::string day_str = std::to_string(this->get_day());
	return (this->get_day() < 10) ? ("0" + day_str) : day_str;
}

std::string birthday::get_month_iso() const {
	const std::string month_str = std::to_string(this->get_month());
	return (this->get_month() < 10) ? ("0" + month_str) : month_str;
}

std::string birthday::get_year_iso() const {
	std::string additional_zeros = "";
	// Save so we don't keep calling
	const int current_year = this->get_year();
	if (current_year < 10) {
		additional_zeros = "000";
	} else if (current_year < 100) {
		additional_zeros = "00";
	} else if (current_year < 1000) {
		additional_zeros = "0";
	}
	const std::string year_str = std::to_string(this->get_year());
	// Add zero's to the front to conform to iso
	return additional_zeros + year_str;
}

void birthday::print() const {
	// Print as ISO format YYYY-MM-DD
	std::cout << "My birthday is " << this->get_year_iso() << "/" << this->get_month_iso() << "/" << this->get_day_iso() << std::endl;
}
