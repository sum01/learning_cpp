#ifndef ENEMY_HPP
#define ENEMY_HPP

class enemy {
protected:
	int attack_power;
public:
	void set_ap(int);
	// Pure virtual method
	virtual void attack() = 0;
};

#endif
