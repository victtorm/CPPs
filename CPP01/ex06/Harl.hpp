/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:37:50 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:37:51 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
    private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
	public:
			Harl(void);
			~Harl(void);
			void complain(std::string level);
};

#endif