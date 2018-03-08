#include "monster.hpp"
#include <iostream>

void monster::attack() {
	std::cout << "Monster attacks for " << this->attack_power << std::endl;
}
