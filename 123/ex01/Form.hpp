/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:08:55 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/25 16:41:25 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
    private:
            const std::string   name;
            bool                signedForm;
            const unsigned int        grade_sign;
            const unsigned int        grade_execute;

    public:
            Form();
            ~Form();
            Form(const std::string name, const unsigned int grade_sign, const unsigned int grade_execute);
            Form(const Form &original);
            Form &operator=(const Form &original);

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

std::ostream &operator<<(std::ostream &os, const Form& f);


#endif