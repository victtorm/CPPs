/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:55 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/13 16:47:22 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete (meta);
    delete (j);
    delete (i);

    std::cout << "WRONG ANIMAL TEST" << std::endl;

    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* a = new WrongCat();
    
    std::cout << a->getType() << " " << std::endl;
    a->makeSound();
    wrong->makeSound();

    delete (a);
    delete (wrong);

    return 0;
}