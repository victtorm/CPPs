/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:56:23 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 18:05:01 by vbritto-         ###   ########.fr       */
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
    *this = original;
}

Brain& Brain::operator=(const Brain &original)
{
    
    return(*this);

}