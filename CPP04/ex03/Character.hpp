/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:40:07 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 18:58:11 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public virtual ICharacter
{
    public:

            Character();
            Character(std::string name);
            ~Character();
            Character(const Character &original);
            Character &operator=(const Character &original);

            ~ICharacter();
            std::string const & getName();
            void equip(AMateria* m);
            void unequip(int idx);
            void use(int idx, ICharacter& target);

};

#endif