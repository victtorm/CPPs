/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 16:29:24 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/19 19:28:15 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "AForm.hpp"


 AForm:: AForm() : name("default"), signedForm(false), grade_sign(150), grade_execute(150)
 {
     std::cout << "AForm default constructor was called" << std::endl;
 }
 
 AForm::~AForm()
 {
     std::cout << "AForm destructor was called" << std::endl;
 }
 
 AForm::AForm(const std::string name, unsigned int grade_sign, unsigned int grade_execute) : name(name), signedForm(false), grade_sign(grade_sign), grade_execute(grade_execute)
 {
     if (grade_sign < 1 || grade_execute < 1)
         throw AForm::GradeTooHighException();
     if (grade_sign > 150 || grade_execute > 150)
         throw AForm::GradeTooLowException();
     std::cout << "AForm " << this->name << " constructor was called" << std::endl;
 }
 
 AForm::AForm(const AForm &original) : name(original.name), signedForm(original.signedForm), grade_sign(original.grade_sign), grade_execute(original.grade_execute)
 {
     std::cout << "AForm copy constructor was called" << std::endl;
 }
 
 AForm& AForm::operator=(const AForm &original)
 {
     if (this != &original)
     {
         this->signedForm = original.signedForm;
     }
     std::cout << "AForm copy assignment operator called" << std::endl;
     return (*this);
 }

std::string AForm::getName() const
{
    return (this->name);
}

bool AForm::getSigned() const
{
    return (this->signedForm);
}

unsigned int AForm::getGradeSign() const
{
    return(this->grade_sign);
}

unsigned int AForm::getGradeExecute() const
{
    return (this->grade_execute);
}

void    AForm::beSigned(const Bureaucrat &b)
{
    (void)b;
    this->signedForm = true;
}

std::ostream &operator<<(std::ostream &os, const AForm& f)
{
    os << "AForm: " << f.getName();
    if (f.getSigned() == true)
        os << " is already signed, and this Aform";
    else
        os << "is not signed, and this Aform";
    os << " have a grade " << f.getGradeSign() << "to sign";
    os << " and a grade " << f.getGradeExecute() << " to execute";
    return (os);
}

