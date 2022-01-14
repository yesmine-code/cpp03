#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	return;
}
DiamondTrap::DiamondTrap(std::string name){

	ClapTrap::Name = this->Name + "_clap_name";
	this->Name = name;
	this->Hitpoints = FragTrap::Hitpoints;
	this->Energypoints = ScavTrap::Energypoints;
	this->Attackdamage= FragTrap::Attackdamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
	return;
}
DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
}
void DiamondTrap::attack(std::string const & target){
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(){
	std::cout << "my name is : "<< Name<<" and my claptrap name is : "<<Name + "_clap_name"<< std::endl;
}

