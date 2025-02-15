/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:31:47 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:01:55 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type = "";
    std::cout << "AAnimal constructor was called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor was called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &original)
{
    *this = original;
}

AAnimal& AAnimal::operator=(const AAnimal &original)
{
    this->type = original.type;
    return (*this);
}
/*
void AAnimal::makeSound()const
{
    std::cout << "No Aanimal type, no sound!!!" << std::endl;
}*/

std::string AAnimal::getType()const
{
    return(this->type);
}