/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:23:28 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 15:26:10 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
            FragTrap();
            ~FragTrap();
            FragTrap(const FragTrap &original);
            FragTrap &operator=(const FragTrap &original);
            FragTrap(std::string name);

            void guardGate();
            void highFivesGuys();
};

#endif