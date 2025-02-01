/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:36:14 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:36:15 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <new>

class Zombie
{
    private:
            std::string name;
    public:
            Zombie();
            Zombie(std::string name);
            ~Zombie();
            void announce(void);
            void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif