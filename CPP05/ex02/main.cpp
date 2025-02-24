/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:36:37 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/20 12:48:26 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


int	main() 
{
	Bureaucrat *	b1 = NULL;
	Bureaucrat *	b2 = NULL;
	Form *			f1 = NULL;
	Form *			f2 = NULL;

	try
	{
		b1 = new Bureaucrat("Rita", 55);
		b2 = new Bureaucrat("Von", 45);
		f1 = new Form("First Form", 50, 50);
		f1->beSigned(*b1);
        f1->beSigned(*b1);
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	try
	{
		f2 = new Form("Second Form", 50, 50);
		f2->beSigned(*b2);
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	
	delete b1;
	delete b2;
	delete f1;
	delete f2;
}