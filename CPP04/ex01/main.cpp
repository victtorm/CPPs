/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:55 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/15 15:12:27 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "SUBJECT TEST" << std::endl;

    int n = 0;

    Animal *pets[10];

    while (n < 10)
    {
        if (n % 2 == 0)
            pets[n] = new Dog();
        else
            pets[n] = new Cat;
        n++;
    }
    n = 0;
    while (n < 10)
    {
        delete (pets[n]);
        n++;
    }

    std::cout << "\n" << std::endl;

    delete (meta);
    delete (i);
    delete (j);

    std::cout << "DOG copy test" << std::endl;

    Dog K9;
    Dog Scooby;

    K9.addIdea("I am a good Cop!!!");
    std::cout << "K9 ideia: " << std::endl;
    K9.showInfo();

    Scooby.addIdea("Scooby Doobie Doooo!!!");
    std::cout << "Scooby ideia: " << std::endl;
    Scooby.showInfo();

    Scooby = K9;
    
    std::cout << "Scooby ideia: " << std::endl;
    Scooby.showInfo();

    std::cout << "\n" << std::endl;

    std::cout << "CAT copy test" << std::endl;

    Cat thundercat;
    Cat garfield;

    thundercat.addIdea("Thunder Thunder ThunderCATS HOOOOOOOOOOOO!!!");
    std::cout << "Thundercat ideia: " << std::endl;
    thundercat.showInfo();

    garfield.addIdea("I want lasagna!!!");
    std::cout << "Garfield ideia: " << std::endl;
    garfield.showInfo();

    garfield = thundercat;
    
    std::cout << "garfield ideia: " << std::endl;
    garfield.showInfo();

    std::cout << "\n" << std::endl;

    return 0;
}