/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:08:55 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/19 19:26:22 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
    private:
            std::string   name;
            bool                signedForm;
            unsigned int        grade_sign;
            unsigned int        grade_execute;

    public:
            AForm();
            ~AForm();
            AForm(const std::string name, unsigned int grade_sign, unsigned int grade_execute);
            AForm(const AForm &original);
            AForm &operator=(const AForm &original);

            std::string     getName() const;
            bool            getSigned() const;
            unsigned int    getGradeSign() const;
            unsigned int    getGradeExecute() const;
            
            
            void    beSigned(const Bureaucrat &b);

            class GradeTooHighException : public std::exception
            {
                public:
                        const char *what() const throw()
                        {
                            return("Grade is too high!!!");
                        }
            };

            class GradeTooLowException : public std::exception
            {
                public:
                        const char *what() const throw()
                        {
                            return("Grade is too low!!!");
                        }
            };
};

std::ostream &operator<<(std::ostream &os, const AForm& f);


#endif