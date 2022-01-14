#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
	std::cout<<"**********building objects*********"<<std::endl;

	ScavTrap clap("superhero");
	ScavTrap scarv("yesmine");
	FragTrap frag("fragoo");

	std::cout<<"**********methods*********"<<std::endl;

	scarv.attack("cpp03 module");
	clap.ClapTrap::attack("badones");
	frag.attack("others");
	frag.ClapTrap::attack("nonfragoo");
	frag.highFivesGuys();
	scarv.takeDamage(3);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.beRepaired(5);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.takeDamage(12);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.takeDamage(1);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.guardGate();

	std::cout<<"**********destructions*********"<<std::endl;
	return 0;
}