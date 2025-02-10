/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:55:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/10 16:29:27 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    //ClapTrap a;
    ClapTrap b("Rita");
    ClapTrap c("Von");
    //ClapTrap d(b);
    
    //a = ClapTrap("Hunt");

    c.attack("Rita");
    b.beRepaired(5);

    return(0);
}