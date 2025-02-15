/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:31:38 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:01:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
                std::string type;
    public:
                AAnimal();
                virtual ~AAnimal();
                AAnimal(const AAnimal &original);
                AAnimal &operator=(AAnimal const &original);

                virtual void makeSound()const = 0;
                std::string getType()const;
};

#endif