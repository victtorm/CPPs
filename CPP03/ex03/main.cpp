/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:55:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/12 16:52:40 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Rita");
    DiamondTrap b("Von");
    DiamondTrap c;

    a.attack("Von");
    b.guardGate();
    a.highFivesGuys();
    a.whoAmI();
    c.whoAmI();

    return(0);
}