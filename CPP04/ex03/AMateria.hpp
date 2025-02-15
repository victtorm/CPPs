/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:58:45 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 19:10:42 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
				std::string type;
				bool onFloor;
    public:

            AMateria(std::string const & type);
            AMateria();
            AMateria(AMateria const &original);
            AMateria &operator=(AMateria const &original);
            virtual ~AMateria();


            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);


            std::string const & getType() const;
			bool const & isOnFloor() const;
			void setFloor();
};

#endif