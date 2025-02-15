/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:25:50 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 18:34:15 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{

}
Cure::~Cure()
{

}

Cure::Cure(const Cure &original)
{
    *this = original;
}

Cure& Cure::operator=(const Cure &original)
{
    return(*this);
}

Cure::AMateria* clone()
{

}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target << "'s wonds *" << std::endl;
}