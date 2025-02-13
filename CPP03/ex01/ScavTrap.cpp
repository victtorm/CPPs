/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:50:04 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/12 14:02:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Defaut constructor ScavTrap was called" << std::endl;
    this->name = "";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << this->name << " constructor ScavTrap was called" << std::endl;
    this->name = name;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Defaut destructor ScavTrap was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = original;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &original)
{
    std::cout << "Copy assimgnment operator ScavTrap called" << std::endl;
    this->name = original.name;
    this->hit_points = original.hit_points;
    this->energy_points = original.energy_points;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string target)
{
    if (this->energy_points == 0)
        std::cout << "ScavTrap " << this->name << " dont have energy_points to attacks!!!" << std::endl;
    if (this->hit_points == 0)
        std::cout << "ScavTrap " << this->name << " dont have hit_points to attcks!!!" << std::endl;
    if (this->energy_points > 0 && this->hit_points > 0) 
    {
        std::cout << "ScavTrap " << this->name << " attacks " <<
        target << ", causing " << attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}
