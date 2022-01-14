#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap: public ClapTrap{
private:

public:
	FragTrap(std::string name);
	~FragTrap();
	void highFivesGuys(void);
	void attack(std::string const & target);
};
#endif