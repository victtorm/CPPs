/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:36:55 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:36:56 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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