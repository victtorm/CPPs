/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:32:34 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:02:23 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor was called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor was called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original)
{
    *this = original;
}

WrongCat& WrongCat::operator=(const WrongCat &original)
{
    this->type = original.type;
    return(*this);
}

void WrongCat::makeSound()const
{
    std::cout << "WrongCat: meow meow" << std::endl;
}