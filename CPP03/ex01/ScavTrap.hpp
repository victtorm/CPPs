/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 16:31:40 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/10 17:08:04 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
            ScavTrap();
            ~ScavTrap();
            ScavTrap(const ScavTrap &original);
            ScavTrap &operator=(const ScavTrap &original);

            void guardGate();
            void attack(unsigned int amount);
};

#endif