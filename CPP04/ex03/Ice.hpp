/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:37:35 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 18:37:56 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public virtual AMateria
{
    private: 
            std::string type = "ice";
    public:
            Ice();
            ~Ice();
            Ice(const Ice &original);
            Ice &operator=(const Ice &original);

            AMateria* clone();
            void use(ICharacter& target);
};

#endif