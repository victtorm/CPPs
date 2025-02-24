/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:31:39 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/24 18:17:59 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern(const Intern &original)
{
    *this = original;
}

Intern& Intern::operator=(const Intern &original)
{
    (void) original;
    return(*this);
}

AForm* Intern::makePresidentialPardonForm(const std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomyRequestForm(const std::string target)
{
    return (new RobotomyRequestForm(target));
}

AForm* Intern::makeShrubberyCreationForm(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* makeForm(std::string formName, std::string target)
{
    std::string form[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm* (Intern::*creatorForm[3])(const std::string target) = {&Intern::makePresidentialPardonForm, &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm,};

    for (int i = 0; i < 3; i++)
    {
        if (formName == form[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return ((this->*creatorForm[i])(target));
        }
    }
    throw Intern::noForm();
}
