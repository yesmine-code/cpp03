#include "ClapTrap.hpp"

int main(){
	ClapTrap cc("yesmine");
	cc.attack("cpp03 module");
	cc.takeDamage(3);
	std::cout<<cc.getEnergypoints()<<std::endl;
	cc.beRepaired(5);
	std::cout<<cc.getEnergypoints()<<std::endl;
	cc.takeDamage(12);
	std::cout<<cc.getEnergypoints()<<std::endl;
	cc.takeDamage(1);
	std::cout<<cc.getEnergypoints()<<std::endl;
	return 0;
}