/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:36:37 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/25 16:59:19 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



int	main() 
{
	Bureaucrat *	b1 = NULL;
	Bureaucrat *	b2 = NULL;
	Bureaucrat *	b3 = NULL;
	PresidentialPardonForm * f1 = NULL;
	RobotomyRequestForm * f2 = NULL;
	ShrubberyCreationForm * f3 = NULL;


	b1 = new Bureaucrat("Rita", 1);
	b2 = new Bureaucrat("Von", 2);
	b3 = new Bureaucrat("Hunt", 3);
	std::cout << std::endl << "*** Presidential Form TEST ***" << std::endl;
	try
	{
		f1 = new PresidentialPardonForm("Victtor");
		b1->signForm(*f1);
        b1->executeForm(*f1);
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "*** Robotomy Form TEST ***" << std::endl;
	try
	{
		f2 = new RobotomyRequestForm("Victtor");
		b2->signForm(*f2);
		b2->executeForm(*f2);
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << "*** Shrubbery Form TEST ***" << std::endl;
	try
	{
		f3 = new ShrubberyCreationForm("Planet");
		b3->signForm(*f3);
		b3->executeForm(*f3);
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	
	delete b1;
	delete b2;
	delete b3;
	delete f1;
	delete f2;
	delete f3;
}