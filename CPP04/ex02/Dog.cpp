/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:33:03 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 15:12:34 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor was called" << std::endl;
}

Dog::~Dog()
{
    delete (this->brain);
    std::cout << "Dog destructor was called" << std::endl;
}

Dog::Dog(const Dog &original)
{
    *this = original;
}

Dog& Dog::operator=(const Dog &original)
{
    if (this != &original)
    {
        delete (this->brain);
        this->type = original.type;
        this->brain = new Brain(*original.brain);
    }
    return(*this);
}

void Dog::makeSound()const
{
    std::cout << "Dog: woof woof" << std::endl;
}

void Dog::addIdea(std::string think)
{

    this->brain->ideias[0] = think;
}

void Dog::showInfo()
{
    std::cout << this->brain->ideias[0] << " and my brain is: " <<  this->brain << std::endl;
}