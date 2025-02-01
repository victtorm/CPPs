/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:50:13 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 13:57:47 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
		int					N;
		static const int	bit = 8;
	public:
		Fixed();
		Fixed(const Fixed &original);
		Fixed &operator=(Fixed const &original);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif