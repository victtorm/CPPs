/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:31:14 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/10 17:18:35 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Defaut constroctor ScavTrap was called" << std::endl;
    this->name = "";
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
    std::cout << "Copy constroctor ClapTrap called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ClapTrap &original)
{
    std::cout << "Copy assimgnment operator ClapTrap called" << std::endl;
    this->name = original.name;
    this->hit = original.hit;
    this->energy = original.energy;
    this->attack_damage = original.attck_damage;
}