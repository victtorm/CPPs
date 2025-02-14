/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 15:23:55 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/14 18:43:13 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{/*
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    


    int n = 0;

    Animal *pets[10];

    while (n < 10)
    {
        if (n % 2 == 0)
            pets[n] = new Dog();
        else
            pets[n] = new Cat;
        n++;
    }*/

    Cat thundercat;
    Cat garfield = thundercat;

    thundercat.addIdea("Thunder Thunder ThunderCATS HOOOOOOOOOOOO!!!");
    std::cout << "Thundercat ideia: " << std::endl;
    thundercat.showInfo();
    std::cout << std::endl;
    garfield.addIdea("I want lasanha!!!!");
    std::cout << "girfield ideia: " << std::endl;
    garfield.showInfo();
    std::cout << std::endl;

    garfield = thundercat;

    std::cout << "girfield ideia: " << std::endl;
    garfield.showInfo();
    std::cout << std::endl;

   //delete (thundercat);
    //delete (garfield);
    
/*
    n = 0;
    while (n < 10)
    {
        delete (pets[n]);
        n++;
    }

    std::cout << "test" << std::endl;


    delete (meta);
    delete (i);
    delete (j);

    
*/
    return 0;
}