/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:31:40 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 14:57:26 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
            ScavTrap();
            ~ScavTrap();
            ScavTrap(const ScavTrap &original);
            ScavTrap &operator=(const ScavTrap &original);
            ScavTrap(std::string name);

            void guardGate();
            void attack(std::string target);
};

#endif