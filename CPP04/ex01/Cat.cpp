/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:32:34 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 15:12:37 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat constructor was called" << std::endl;
}

Cat::~Cat()
{
    delete (this->brain);
    std::cout << "Cat destructor was called" << std::endl;
}

Cat::Cat(const Cat &original) : Animal()
{
    *this = original;
}

Cat& Cat::operator=(const Cat &original)
{
    if (this != &original)
    {
        delete (this->brain);
        this->type = original.type;
        this->brain = new Brain(*original.brain);
    }
    return(*this);
}

void Cat::makeSound()const
{
    std::cout << "Cat: meow meow" << std::endl;
}

void Cat::addIdea(std::string think)
{

    this->brain->ideias[0] = think;
}

void Cat::showInfo()
{
    std::cout << this->brain->ideias[0] << " and my brain is: " <<  this->brain << std::endl;
}