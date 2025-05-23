/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:32:07 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 15:33:00 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public virtual AAnimal
{
    private:
        Brain* brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &original);
        Cat &operator=(const Cat &original);

        void makeSound()const;
        void addIdea(std::string think);
        void showInfo();
};

#endif