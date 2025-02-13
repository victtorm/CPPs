/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:31:47 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:01:55 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "";
    std::cout << "Animal constructor was called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor was called" << std::endl;
}

Animal::Animal(const Animal &original)
{
    *this = original;
}

Animal& Animal::operator=(const Animal &original)
{
    this->type = original.type;
    return (*this);
}

void Animal::makeSound()const
{
    std::cout << "No animal type, no sound!!!" << std::endl;
}

std::string Animal::getType()const
{
    return(this->type);
}