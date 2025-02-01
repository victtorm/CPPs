/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:50:13 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 18:38:15 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
		int					N;
		static const int	fBits = 8;
	public:
		Fixed();
		Fixed(const int intN);
		Fixed(const float flotN);
		Fixed(const Fixed &original);
		Fixed &operator=(Fixed const &original);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;


		//comparison operators
		bool operator>(Fixed const &original);
		bool operator>=(Fixed const &original);
		bool operator<(Fixed const &original);
		bool operator<=(Fixed const &original);
		bool operator==(Fixed const &original);
		bool operator!=(Fixed const &original);

		//arithmetic operators
		Fixed operator+(Fixed const &original);
		Fixed operator-(Fixed const &original);
		Fixed operator*(Fixed const &original);
		Fixed operator/(Fixed const &original);


		//increment/decrement
		//prev
		Fixed &operator++(void);
		Fixed &operator--(void);
		//pos
		Fixed operator++(int);
		Fixed operator--(int);


		// min/max
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif