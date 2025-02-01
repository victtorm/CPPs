/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:36:46 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:36:47 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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