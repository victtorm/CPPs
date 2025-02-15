/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:51:11 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 18:58:09 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string name)
{

}

Character::~Character()
{

}

Character::Character(const Character &original)
{
    *this = original;
}

Character& Character::operator=(const Character &original)
{
    if (this != &original)
    {

    }
    return(*this);
}

Character::~ICharacter()
{

}
