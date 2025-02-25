/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:23:55 by vbritto-          #+#    #+#             */
/*   Updated: 2025/02/24 19:03:59 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
            Intern();
            ~Intern();
            Intern(std::string formName, std::string target);
            Intern(const Intern &original);
            Intern& operator=(const Intern &original);

            AForm* makePresidentialPardonForm(const std::string target);
            AForm* makeRobotomyRequestForm(const std::string target);
            AForm* makeShrubberyCreationForm(const std::string target);

            AForm* makeForm(std::string formName, std::string target);

            class noForm : public std::exception
            {
                public:
                        const char *what() const throw()
                        {
                            return("No Form with this name");
                        }
            };
};

#endif