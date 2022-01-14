#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){

	std::cout<<" default constructor called !"<<std::endl;
	this->Name = "";
	this->Hitpoints = 10;
	this->Energypoints = 10;
	this->Attackdamage = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout<<"constructor called !"<<std::endl;
	this->Name = name;
	this->Hitpoints = 10;
	this->Energypoints = 10;
	this->Attackdamage = 0;
}
ClapTrap::~ClapTrap(){
	std::cout<<"destructor called !"<<std::endl;
}

std::string ClapTrap::getName(void){
	return (this->Name);
}

unsigned int ClapTrap::getHitpoints(void){
	return (this->Hitpoints);
}

unsigned int ClapTrap::getEnergypoints(void){
	return (this->Energypoints);
}

unsigned int ClapTrap::getAttackdamage(void){
	return (this->Attackdamage);
}
void ClapTrap::attack(std::string const & target){
	std::cout<<"ClapTrap "<<getName()<<" attack " <<target<<", causing "<< getAttackdamage()<< " of damage!"<<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount){
	std::cout<<"ClapTrap "<<getName()<<" has been attacked and lost " <<amount<< " of energy!"<<std::endl;
	if (this->getEnergypoints() < amount) {
		std::cout << "ClapTrap " << getName() << " cannot take this amount of damage he has not enough energy!" << std::endl;
		return;
	}
	this->Energypoints = getEnergypoints() - amount;
}
void ClapTrap::beRepaired(unsigned int amount){
	std::cout<<"ClapTrap "<<getName()<<" is repaired and gained " <<amount<<" points of energy!"<<std::endl;
	this->Energypoints = getEnergypoints() + amount;
}