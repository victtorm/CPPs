/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:50:03 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 19:06:49 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
/*
int main()
{	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}*/
int main(void)
{
    Fixed   a;
    std::cout << "a: " << a << std::endl;
    Fixed   b(2);
    std::cout << "b: " << b << std::endl;
    Fixed   c(3.5f);
    std::cout << "c: " << c << std::endl;
    Fixed   d(b);
    std::cout << "d: " << d << std::endl;
    a = c;
    std::cout << "a: " << a << std::endl;
    std::cout << "b>c: " << (b>c) << std::endl;
    std::cout << "b<c: " << (b<c) << std::endl;
    std::cout << "b>=c: " << (b>=c) << std::endl;
    std::cout << "b<=c: " << (b<=c) << std::endl;
    std::cout << "b==c: " << (b==c) << std::endl;
    std::cout << "b!=c: " << (b!=c) << std::endl;
    std::cout << "b+c: " << (b+c) << std::endl;
    std::cout << "b-c: " << (b-c) << std::endl;
    std::cout << "b*c: " << (b*c) << std::endl;
    std::cout << "b/c: " << (b/c) << std::endl;
    std::cout << "++c: " << (++c) << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "c++: " << c++ << std::endl;
    std::cout << "c: " << (c) << std::endl;
    std::cout << "--c: " << (--c) << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "c--: " << c-- << std::endl;
    std::cout << "c: " << (c) << std::endl;
    std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
    std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;
    std::cout << "c as float: " << c.toFloat() << std::endl;
    std::cout << "c as int: " << c.toInt() << std::endl;

    return (0);
}
