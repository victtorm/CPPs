/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:55:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 15:30:09 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Rita");
    ScavTrap b("Von");

    a.attack("Von");
    b.beRepaired(5);
    a.guardGate();

    return(0);
}