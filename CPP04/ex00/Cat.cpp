/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:32:34 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:02:23 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat constructor was called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor was called" << std::endl;
}

Cat::Cat(const Cat &original)
{
    *this = original;
}

Cat& Cat::operator=(const Cat &original)
{
    this->type = original.type;
    return(*this);
}

void Cat::makeSound()const
{
    std::cout << "Cat: meow meow" << std::endl;
}