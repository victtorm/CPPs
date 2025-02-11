/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:55:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 18:01:33 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Rita");
    DiamondTrap b("Von");

    a.attack("Rita");
    b.beRepaired(5);
    a.highFivesGuys();
    a.whoAmi();

    return(0);
}