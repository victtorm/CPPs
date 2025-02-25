/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:36:37 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/25 16:27:01 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << " *** TEST1 - try decrement ***" << std::endl;
    try 
    {
        Bureaucrat a("Rita", 149);
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << "After decrement: " << a << std::endl;
        a.decrementGrade();
        std::cout << "After decrement: " << a << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout<< "Exception caught - "<< e.what() <<std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout<< "Exception caught - "<< e.what() <<std::endl;
    }

    std::cout << " *** TEST2 - try increment ***" << std::endl;

    try 
    {
        Bureaucrat b("Von", 10);
        std::cout << b << std::endl;
        b.incrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        b.incrementGrade();
        std::cout << "After incremente 9 times: " << b << std::endl;
        b.incrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout<< "Exception caught - " << e.what() <<std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cout<< "Exception caught - " << e.what() <<std::endl;
    }
}