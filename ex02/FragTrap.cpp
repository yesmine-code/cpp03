#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->Hitpoints = 100;
	this->Energypoints = 100;
	this->Attackdamage = 30;
	std::cout<<"FragTrap constructor called"<<std::endl;
}
FragTrap::~FragTrap() {
	std::cout<<"FragTrap destructor called"<<std::endl;
}
void FragTrap::highFivesGuys(void){
	std::cout<<"hi fives guys :D" <<std::endl;
}
void FragTrap::attack(std::string const & target){  //override
	std::cout<<"Fragtrap "<<Name<<" attack " <<target<<", causing "<< getAttackdamage()<< " of damage!"<<std::endl;
}