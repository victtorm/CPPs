/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:56:38 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/10 16:02:57 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
            std::string name;
            unsigned int hit;
            unsigned int energy;
            unsigned int attack_damage;
    public:
            ClapTrap();
            ClapTrap(std::string name);
            ~ClapTrap();
            ClapTrap(const ClapTrap &original);
            ClapTrap &operator=(ClapTrap const &original);

            void    attack(const std::string& target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int anount);
};

#endif