/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:32:53 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/14 17:14:28 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public virtual Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &original);
        Dog &operator=(const Dog &original);

        void makeSound()const;
        void addIdea(std::string think);
        void showInfo();
};

#endif