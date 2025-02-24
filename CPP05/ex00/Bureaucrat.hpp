/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:33:20 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/19 15:52:47 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
            std::string     name;
            unsigned int    grade;

    public:
            Bureaucrat();
            Bureaucrat(std::string name, unsigned int grade);
            ~Bureaucrat();
            Bureaucrat(const Bureaucrat &original);
            Bureaucrat &operator=(const Bureaucrat &original);

            unsigned int getGrade() const;
            std::string getName() const;
            void incrementGrade();
            void decrementGrade();

            class lowGradeExept : public std::exception
            {
                public:
                        const char *what() const throw()
                        {
                            return("Gade is too low!!!");
                        }
            };

            class highGradeExept : public std::exception
            {
                public:
                        const char *what() const throw()
                        {
                            return("Gade is too high!!!");
                        }
            };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat &original);

#endif