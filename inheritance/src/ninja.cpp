#include "ninja.hpp"
#include <iostream>

void ninja::attack() {
	std::cout << "Ninja attacks for " << this->attack_power << std::endl;
}
