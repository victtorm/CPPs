/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:36:37 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/19 15:47:14 by victtormora      ###   ########.fr       */
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
        a.decrementGrade();
    }
    catch(Bureaucrat::highGradeExept &e)
    {
        std::cout<< "Exception caught - "<< e.what() <<std::endl;
    }
    catch(Bureaucrat::lowGradeExept &e)
    {
        std::cout<< "Exception caught - "<< e.what() <<std::endl;
    }

    std::cout << " *** TEST2 - try increment ***" << std::endl;

    try 
    {
        Bureaucrat b("Von", 10);
        std::cout << b << std::endl;
        b.incrementGrade();
    }
    catch(Bureaucrat::highGradeExept &e)
    {
        std::cout<< "Exception caught - " << e.what() <<std::endl;
    }
    catch(Bureaucrat::lowGradeExept &e)
    {
        std::cout<< "Exception caught - " << e.what() <<std::endl;
    }
}