/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:03:44 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:03:44 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:31:47 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:01:55 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "";
    std::cout << "WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
    *this = original;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &original)
{
    this->type = original.type;
    return (*this);
}

void WrongAnimal::makeSound()const
{
    std::cout << "No WrongAnimal type, no sound!!!" << std::endl;
}

std::string WrongAnimal::getType()const
{
    return(this->type);
}