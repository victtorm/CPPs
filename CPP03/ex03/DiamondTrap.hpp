/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:05:30 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/12 15:30:47 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
            std::string name;
    public:
            DiamondTrap();
            ~DiamondTrap();
            DiamondTrap(const DiamondTrap &original);
            DiamondTrap &operator=(const DiamondTrap &original);
            DiamondTrap(std::string name);

        	void whoAmI();
        	using ScavTrap::attack;
};

#endif