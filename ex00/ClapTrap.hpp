#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
private:
	std::string Name;
	unsigned int Hitpoints;
	unsigned int Energypoints;
	unsigned int Attackdamage;
public:
	ClapTrap(std::string name);
	~ClapTrap();
	std::string getName(void);
	unsigned int getHitpoints(void);
	unsigned int getEnergypoints(void);
	unsigned int getAttackdamage(void);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif