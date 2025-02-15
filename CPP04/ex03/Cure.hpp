/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 18:18:13 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 18:39:40 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public virtual AMateria
{
    private: 
            std::string type = "cure";
    public:
            Cure();
            ~Cure();
            Cure(const Cure &original);
            Cure &operator=(const Cure &original);

            AMateria* clone();
            void use(ICharacter& target);
};

#endif