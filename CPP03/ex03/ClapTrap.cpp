/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:56:10 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/12 14:56:03 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Defaut constructor was called" << std::endl;
    this->name = "";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << this->name << ": constructor was called" << std::endl;
}

ClapTrap:: ~ClapTrap()
{
    std::cout << this->name << ": Destructor was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = original;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &original)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = original.name;
    this->hit_points = original.hit_points;
    this->energy_points = original.energy_points;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
        std::cout << this->name << " dont have energy_points to attacks!!!" << std::endl;
    if (this->hit_points == 0)
        std::cout << this->name << " dont have hit_points to attcks!!!" << std::endl;
    if (this->energy_points > 0 && this->hit_points > 0) 
    {
        std::cout << this->name << " attacks " <<
        target << ", causing " << attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Take " << amount << " damage!!!" << std::endl;
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0)
        std::cout << this->name << " dont have energy_points to repairs!!!" << std::endl;
    if (this->hit_points == 0)
        std::cout << this->name << " dont have hit_points to repairs!!!" << std::endl;
    if (this->energy_points > 0 && this->hit_points > 0) 
    {
        std::cout << this->name << " repairs itself with " <<
        amount << " hit_points points!!!" << std::endl;
        this->hit_points += amount;
        this->energy_points--;
    }
  
}
