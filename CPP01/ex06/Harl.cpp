/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 10:37:45 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/01 10:37:46 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl:: debug()
{
    std::cout <<  "I love having extra broccoli for my XL-double-cheese-triple-pickle-special-ketchup vegan burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra broccoli costs more money. You didn’t put enough broccoli in my vegan burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout <<  "I think I deserve to have some extra broccoli for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Harl::*methodos[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*methodos[i])();
            return;
        }
        i++;
    }
    std::cout << "Command not found" << std::endl;
}