#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout<<"scarvTrap constructor called"<<std::endl;
}
ScavTrap::~ScavTrap() {
	std::cout<<"scarvTrap destructor called"<<std::endl;
}

void ScavTrap::attack(std::string const & target){
	std::cout<<"ScarvTrap "<<Name<<" attack " <<target<<", causing "<< getAttackdamage()<< " of damage!"<<std::endl;
}
void ScavTrap::guardGate(){
	std::cout<<"ScavTrap "<<Name<< " have enterred in Gate keeper mode"<< std::endl;
}