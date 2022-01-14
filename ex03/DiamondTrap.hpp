#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
private:
	DiamondTrap();
	std::string name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void attack(std::string const & target);
	void whoAmI();
};
#endif