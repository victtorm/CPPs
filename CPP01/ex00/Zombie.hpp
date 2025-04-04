/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:35:49 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:35:51 by vbritto-         ###   ########.fr       */
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
            Zombie(std::string name);
            ~Zombie();
            void announce(void);
};

void   randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif