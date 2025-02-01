/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:50:25 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 18:01:33 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout << "Default constructor called." << std::endl;
    this->N = 0;
}

Fixed::Fixed(const int intN)
{
    std::cout << "INT constructor called" << std::endl;
    N = intN * (1 << Fixed::fBits);
}

Fixed::Fixed(const float floatN)
{
    std::cout << "Float constructor called" << std::endl;
    N = roundf(floatN * (float)(1 << Fixed::fBits));
}


Fixed::Fixed(const Fixed &original)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = original;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &original)
{
    std:: cout << "Copy assignment operator called" << std::endl;
    if (this != &original)
        N = original.N;
    N = original.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called." << std::endl;
    return(this->N);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "set RawBits called." << std::endl;
    N = raw;
}

int Fixed::toInt(void)const
{
    return(N >> Fixed::fBits);
}

float Fixed::toFloat() const
{
    return ((float)this->N / (float)(1 << Fixed::fBits));

}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}