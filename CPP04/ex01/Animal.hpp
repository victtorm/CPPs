/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:31:38 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:01:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
                std::string type;
    public:
                Animal();
                virtual ~Animal();
                Animal(const Animal &original);
                Animal &operator=(Animal const &original);

                virtual void makeSound()const;
                std::string getType()const;
};

#endif