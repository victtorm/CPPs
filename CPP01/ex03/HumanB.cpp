#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	std::cout << "HumanB: " << 
	this->name << " was been created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB: " << this->name 
	<< " was been destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
    if (!this->weapon)
    {
		std::cout << "HumanB: " << 
    	this->name << " doesn't have any weapon to attack  " << std::endl;
		return ;
	}
    std::cout << "HumanB: " << 
    this->name << " attacks with  " <<
    this->weapon->getType() << std::endl;
}