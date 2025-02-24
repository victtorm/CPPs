/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:29:24 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/19 19:28:15 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Form.hpp"

Form:: Form()
{
    std::cout << "Form default constructor was called" << std::endl;
    this->name = "default";
    this->signedForm = false;
    this->grade_sign = 150;
    this->grade_execute = 150;
}

Form::~Form()
{
    std::cout << "Form destructor was called" << std::endl;
}

Form::Form(const std::string name, unsigned int grade_sign, unsigned int grade_execute)
{
    this->name = name;
    this->signedForm = false;
    if (grade_sign < 1 || grade_execute < 1)
        throw Form::GradeTooHighException();
    if (grade_sign > 150 || grade_execute > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form " << this->name << " constructor was called" << std::endl;
    this->grade_sign = grade_sign;
    this->grade_execute = grade_execute;
}

Form::Form(const Form &original)
{
    std::cout << "Form copy constructor was called" << std::endl;
    *this = original;
}

Form& Form::operator=(const Form &original)
{
    if (this != &original)
    {
        this->name = original.name;
        this->signedForm = original.signedForm;
        this->grade_sign = original.grade_sign;
        this->grade_execute = original.grade_execute;
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
    if (this->signedForm)
    {
        std::cout << "Form is alredy signed." << std::endl;
        return ;
    }
    else if (b.getGrade() < this->grade_sign)
    {
        b.signForm(this->name, false);
        throw Form::GradeTooLowException();
    }
    else    
    {
        this->signedForm = true;
        b.signForm(this->name, true);
    }
}

std::ostream &operator<<(std::ostream &os, const Form& f)
{
    os << "Form: " << f.getName();
    if (f.getSigned() == true)
        os << " is already signed, and this form";
    else
        os << "is not signed, and this form";
    os << " have a grade " << f.getGradeSign() << "to sign";
    os << " and a grade " << f.getGradeExecute() << " to execute";
    return (os);
}

