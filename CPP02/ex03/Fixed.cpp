/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:50:25 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 19:05:00 by vbritto-         ###   ########.fr       */
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

//comparison operators

bool Fixed::operator>(Fixed const &original)
{
    return (this->getRawBits() > original.getRawBits());
}

bool Fixed::operator>=(Fixed const &original)
{
    return (this->getRawBits() >= original.getRawBits());
}

bool Fixed::operator<(Fixed const &original)
{
    return (this->getRawBits() < original.getRawBits());
}

bool Fixed::operator<=(Fixed const &original)
{
    return (this->getRawBits() <= original.getRawBits());
}

bool Fixed::operator==(Fixed const &original)
{
    return (this->getRawBits() == original.getRawBits());
}

bool Fixed::operator!=(Fixed const &original)
{
    return (this->getRawBits() != original.getRawBits());
}


//arithmetic operators
Fixed Fixed::operator+(Fixed const &original)
{
    return (this->toFloat() + original.toFloat());
}

Fixed Fixed::operator-(Fixed const &original)
{
    return (this->toFloat() - original.toFloat());
}

Fixed Fixed::operator*(Fixed const &original)
{
    return (this->toFloat() * original.toFloat());
}

Fixed Fixed::operator/(Fixed const &original)
{
    return (this->toFloat() / original.toFloat());
}

//increment/decrement
//prev

Fixed &Fixed::operator++(void)
{
    this->N++;
    return(*this);
}

Fixed &Fixed::operator--(void)
{
    this->N--;
    return(*this);
}

//pos
Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    this->N++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    this->N--;
    return (tmp);
}

// min/max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}