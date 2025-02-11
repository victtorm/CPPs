/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:56:10 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 16:34:23 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Defaut constroctor ClapTrap was called" << std::endl;
    this->name = "";
    this->hit = 10;
    this->energy = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hit = 10;
    this->energy = 10;
    this->attack_damage = 0;
    std::cout << this->name << ": constroctor ClapTrap was called" << std::endl;
}
ClapTrap:: ~ClapTrap()
{
    std::cout << this->name << ": Destroctor ClapTrap was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout << "Copy constroctor ClapTrap called." << std::endl;
    *this = original;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &original)
{
    std::cout << "Copy assignment operator ClapTrap called" << std::endl;
    this->name = original.name;
    this->hit = original.hit;
    this->energy = original.energy;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy == 0)
        std::cout << this->name << " dont have energy to attacks!!!" << std::endl;
    if (this->hit == 0)
        std::cout << this->name << " dont have hit to attcks!!!" << std::endl;
    if (this->energy > 0 || this->hit > 0) 
    {
        std::cout << this->name << " attacks " <<
        target << " , causing " << attack_damage << " points of damage!" << std::endl;
        this->energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Take " << amount << " damage!!!" << std::endl;
    this->hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy == 0)
        std::cout << this->name << " dont have energy to repairs!!!" << std::endl;
    if (this->hit == 0)
        std::cout << this->name << " dont have hit to repairs!!!" << std::endl;
    if (this->energy > 0 || this->hit > 0) 
    {
        std::cout << this->name << " repairs itself with " <<
        amount << " hit points!!!" << std::endl;
        this->hit += amount;
        this->energy--;
    }
  
}

std::string ClapTrap::GetName()
{
    return(this->name);
}

unsigned int ClapTrap::GetHit()
{
    return(this->hit);
}


unsigned int ClapTrap::GetEnergy()
{
    return(this->energy);
}

unsigned int ClapTrap::GetAttackDamage()
{
    return(this->attack_damage);
}