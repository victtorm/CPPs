/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:56:23 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/14 17:56:28 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor was called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor was called" << std::endl;
}

Brain::Brain(const Brain &original)
{
    std::cout << "Copy Brain constructor was called" << std::endl;
    *this = original;
}

Brain& Brain::operator=(const Brain &original)
{
    int i = 0;

    if (this != &original)
    {
        while (i > 100)
        {
            this->ideias[i] = original.ideias[i];
            i++;
        }
    }
    std:: cout << "Copy assignment operator: Brain was called" << std::endl;
    return(*this);
}