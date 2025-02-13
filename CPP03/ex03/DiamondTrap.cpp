/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:04:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/12 16:53:52 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    ScavTrap a;

    std::cout << "Defaut constructor DiamondTrap was called" << std::endl;
    
    ClapTrap::name = name + "_clap_name";
    this->energy_points = a.getEP();

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    ScavTrap a;

    ClapTrap::name = name + "_clap_name";
    this->name = name;
    std::cout << this->name << " constructor DiamondTrap was called" << std::endl;
    this->energy_points = a.getEP();
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Defaut destructor DiamondTrap was called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "Copy constructor DiamondTrap called" << std::endl;
    *this = original;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &original)
{
    this->name = original.name;
    std::cout << "Copy assimgnment operator DiamondTrap called" << std::endl;
    this->hit_points = original.hit_points;
    this->energy_points = original.energy_points;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout<<"DiamondTrap: "<< this->name << " and my ClapTrap name is - " << ClapTrap::name << std::endl;
}
