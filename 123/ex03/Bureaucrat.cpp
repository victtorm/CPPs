/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbritto- <vbritto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:46:35 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/25 16:24:35 by vbritto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{
    std::cout << "Bureaucrat default constructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : name(name), grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat " << this->name << " constructor was called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original)
{
    std::cout << "Bureaucrat copy constructor was called" << std::endl;
    *this = original;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat " << this->name << " destructor was called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &original)
{
    std::cout << "Bureaucrat copy assignment operator was called" << std::endl;
    if (this != &original)
    {
        this->grade = original.grade;
    }
    return (*this);
}

unsigned int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::string Bureaucrat::getName() const
{
    return(this->name);
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
         throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
         throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

void Bureaucrat::signForm(AForm &form) const
{
    if (form.getSigned())
    {
        std::cout << "Form is alredy signed." << std::endl;
        return ;
    }
    if (this->grade > form.getGradeSign())
    {
        std::cout << this->name << " couldn't sign " << form.getName() << " because don't have grade to that!" << std::endl;
        throw AForm::GradeTooLowException();
    }
    else
    {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->name << " execute " << form.getName();
    }
    catch (const std::exception& e)
    {
        std::cerr << this->name  << " couldn't execute " << form.getName() << " because don't have grade to that!" << std::endl;
    }

}

std::ostream& operator<<(std::ostream & o, const Bureaucrat &original)
{
    o << original.getName() << ", bureaucrat grade " << original.getGrade() << ".";
    return (o);
}