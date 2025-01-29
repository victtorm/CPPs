#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	std::cout << "HumanA: " << 
	this->name << " was been created, and have a " <<
	this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA: " << this->name 
	<< " was been destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << "HumanA: " << 
	this->name << " attacks with  " <<
	this->weapon.getType() << std::endl;
}