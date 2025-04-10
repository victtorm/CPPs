/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:36:09 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:36:10 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie: " << this->name << " has been created!!!" << std::endl;
}
Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie: " << this->name << " has been created!!!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie: " << this->name << " has been destroyed!!!" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std:: string name)
{
    this->name = name;
}