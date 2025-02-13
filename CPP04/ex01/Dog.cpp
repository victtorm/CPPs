/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:33:03 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:02:58 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor was called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor was called" << std::endl;
}

Dog::Dog(const Dog &original)
{
    *this = original;
}

Dog& Dog::operator=(const Dog &original)
{
    this->type = original.type;
    return(*this);
}

void Dog::makeSound()const
{
    std::cout << "Dog: woof woof" << std::endl;
}