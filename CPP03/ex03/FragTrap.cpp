/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:24:41 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 17:32:11 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Defaut constroctor FragTrap was called" << std::endl;
    this->name = "";
    this->hit = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << this->name << " constroctor FragTrap was called" << std::endl;
    this->name = name;
    this->hit = 100;
    this->energy = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Defaut destructor FragTrap was called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original)
{
    std::cout << "Copy constroctor FragTrap called" << std::endl;
    *this = original;
}

FragTrap& FragTrap::operator=(const FragTrap &original)
{
    std::cout << "Copy assimgnment operator FragTrap called" << std::endl;
    this->name = original.name;
    this->hit = original.hit;
    this->energy = original.energy;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void FragTrap::guardGate()
{
    std::cout << "Scav Trap " << this->name << " is now in Gate keeper mode" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "High Fives!!!" << std::endl;
}
