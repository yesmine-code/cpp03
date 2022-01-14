#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap: virtual public ClapTrap{
protected:
	FragTrap();
public:
	FragTrap(std::string name);
	~FragTrap();
	void highFivesGuys(void);
	void attack(std::string const & target);
};
#endif