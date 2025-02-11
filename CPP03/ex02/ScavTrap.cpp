/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:50:04 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 15:18:45 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Defaut constroctor ScavTrap was called" << std::endl;
    this->name = "";
    this->hit = 100;
    this->energy = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << this->name << " constroctor ScavTrap was called" << std::endl;
    this->name = name;
    this->hit = 100;
    this->energy = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Defaut destructor ScavTrap was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original)
{
    std::cout << "Copy constroctor ScavTrap called" << std::endl;
    *this = original;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &original)
{
    std::cout << "Copy assimgnment operator ScavTrap called" << std::endl;
    this->name = original.name;
    this->hit = original.hit;
    this->energy = original.energy;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "Scav Trap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string target)
{
    if (this->energy == 0)
        std::cout << "ScavTrap " << this->name << " dont have energy to attacks!!!" << std::endl;
    if (this->hit == 0)
        std::cout << "ScavTrap " << this->name << " dont have hit to attcks!!!" << std::endl;
    if (this->energy > 0 || this->hit > 0) 
    {
        std::cout << "ScavTrap " << this->name << " attacks " <<
        target << " , causing " << attack_damage << " points of damage!" << std::endl;
        this->energy--;
    }
}
