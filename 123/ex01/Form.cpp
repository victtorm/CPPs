/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:29:24 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/25 16:43:49 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Form.hpp"

Form:: Form() : name("default"), signedForm(false), grade_sign(150), grade_execute(150)
{
    std::cout << "Form default constructor was called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructor was called" << std::endl;
}

Form::Form(const std::string name, unsigned int grade_sign, unsigned int grade_execute) : name(name), signedForm(false), grade_sign(grade_sign), grade_execute(grade_execute)
{
    if (grade_sign < 1 || grade_execute < 1)
        throw Form::GradeTooHighException();
    if (grade_sign > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form " << this->name << " constructor was called" << std::endl;
}

Form::Form(const Form &original) : name(original.name), signedForm(original.signedForm), grade_sign(original.grade_sign), grade_execute(original.grade_execute)
{
    std::cout << "Form copy constructor was called" << std::endl;
}

Form& Form::operator=(const Form &original)
{
    if (this != &original)
    {
        this->signedForm = original.signedForm;
    }
    std::cout << "Form copy assignment operator called" << std::endl;
    return (*this);
}


std::string Form::getName() const
{
    return (this->name);
}

bool Form::getSigned() const
{
    return (this->signedForm);
}

unsigned int Form::getGradeSign() const
{
    return(this->grade_sign);
}

unsigned int Form::getGradeExecute() const
{
    return (this->grade_execute);
}


void    Form::beSigned(const Bureaucrat &b)
{
        (void)b;
        this->signedForm = true;
}

std::ostream &operator<<(std::ostream &os, const Form& f)
{
    os << "Form: " << f.getName();
    if (f.getSigned() == true)
        os << " is already signed, and this form";
    else
        os << " is not signed, and this form";
    os << " have a grade " << f.getGradeSign() << "to sign";
    os << " and a grade " << f.getGradeExecute() << " to execute";
    return (os);
}

