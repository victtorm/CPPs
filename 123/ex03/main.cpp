/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:36:37 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/25 17:01:35 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"



int	main() 
{
	Intern Rita;
	Intern Von;
	Intern Hunt;
	AForm* f1;
	AForm* f2;
	AForm* f3;
	AForm* f4;

	try
	{
		f1 = Rita.makeForm("PresidentialPardonForm", "Rita");
		f2 = Von.makeForm("RobotomyRequestForm", "Von");
		f3 = Hunt.makeForm("ShrubberyCreationForm", "Hunt");
		f4 = Rita.makeForm("afdsgaggg", "Victtor");
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	delete f1;
	delete f2;
	delete f3;
}