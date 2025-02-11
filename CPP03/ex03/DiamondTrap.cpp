/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:04:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 18:25:37 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "Defaut constroctor DiamondTrap was called" << std::endl;
    this->name = "";
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) :
{
    std::cout << this->name << " constroctor DiamondTrap was called" << std::endl;
    this->name = ClapTrap::name + "_clap_name";
    this->hit = FragTrap::hit;
    this->energy = ScavTrap::energy;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Defaut destructor DiamondTrap was called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original)
{
    std::cout << "Copy constroctor DiamondTrap called" << std::endl;
    *this = original;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &original)
{
    std::cout << "Copy assimgnment operator DiamondTrap called" << std::endl;
    this->name = original.name;
    this->hit = original.hit;
    this->energy = original.energy;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout<<"DiamondTrap: "<< this->name <<" and I come from ClapTrap named - " << ClapTrap::name << std::endl;
}
