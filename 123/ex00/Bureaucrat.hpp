/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:33:20 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/25 16:23:08 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
            const std::string     name;
            unsigned int    grade;

    public:
            Bureaucrat();
            Bureaucrat(std::string const name, unsigned int grade);
            ~Bureaucrat();
            Bureaucrat(const Bureaucrat &original);
            Bureaucrat &operator=(const Bureaucrat &original);

            unsigned int getGrade() const;
            std::string getName() const;
            void incrementGrade();
            void decrementGrade();

            class GradeTooLowException : public std::exception
            {
                public:
                        const char *what() const throw()
                        {
                            return("Grade is too low!!!");
                        }
            };

            class GradeTooHighException : public std::exception
            {
                public:
                        const char *what() const throw()
                        {
                            return("Grade is too high!!!");
                        }
            };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat &original);

#endif