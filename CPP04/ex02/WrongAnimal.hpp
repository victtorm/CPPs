/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:31:38 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:01:48 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
                std::string type;
    public:
                WrongAnimal();
                virtual ~WrongAnimal();
                WrongAnimal(const WrongAnimal &original);
                WrongAnimal &operator=(WrongAnimal const &original);

                virtual void makeSound()const;
                std::string getType()const;
};

#endif