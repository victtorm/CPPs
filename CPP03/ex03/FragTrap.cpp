/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:24:41 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/12 16:48:55 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Defaut " << this->name << "constructor FragTrap was called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    std::cout << this->name << " constructor FragTrap was called" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Defaut destructor FragTrap was called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original)
{
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = original;
}

FragTrap& FragTrap::operator=(const FragTrap &original)
{
    std::cout << "Copy assimgnment operator FragTrap called" << std::endl;
    this->name = original.name;
    this->hit_points = original.hit_points;
    this->energy_points = original.energy_points;
    this->attack_damage = original.attack_damage;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name <<  " High Fives!!!" << std::endl;
}
