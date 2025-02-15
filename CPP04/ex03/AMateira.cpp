/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateira.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:22:57 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 17:55:22 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    
}
AMateria::AMateria()
{
    std::cout << "AMateria constructor was called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor was called" << std::endl;
}
AMateria::AMateria(AMateria const &original)
{

}
AMateria& AMateria::operator=(AMateria const &original)
{

}

std::string const & getType() const; //Returns the materia type
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);