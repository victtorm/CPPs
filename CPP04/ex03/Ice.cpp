/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:36:57 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 18:39:00 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{

}
Ice::~Ice()
{

}

Ice::Ice(const Ice &original)
{
    *this = original;
}

Ice& Ice::operator=(const Ice &original)
{
    return(*this);
}

Ice::AMateria* clone()
{

}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}