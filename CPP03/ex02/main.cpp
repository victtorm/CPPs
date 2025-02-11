/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:55:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/11 15:31:12 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("Rita");
    FragTrap b("Von");

    a.attack("Rita");
    b.beRepaired(5);
    a.highFivesGuys();

    return(0);
}