#include "daughter.hpp"
#include "monster.hpp"
#include "ninja.hpp"
#include "enemy.hpp"

int main() {
	// Create a new daughter
	daughter d1;
	// Use the inherited "say_hi" method from the "mother" class
	d1.say_hi();

	// Creates the daughter classes that inherited "enemy"
	monster monster;
	ninja ninja;

	// Pointers to the inherited function are faster than calling from the daughter class
	enemy *e1 = &monster;
	enemy *e2 = &ninja;
	e1->set_ap(12);
	e2->set_ap(25);

	// We could to this...
	// monster.attack();
	// ninja.attack();

	// but instead we call the virutal function (polymorphism)..
	e1->attack();
	e2->attack();
	// This is useful if we have classes that inhert the class with the virtual method
	// since then it can be accessed without knowing of the derived class
	return 0;
}
