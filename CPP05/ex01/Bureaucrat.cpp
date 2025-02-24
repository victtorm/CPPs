/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:46:35 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/19 19:26:16 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor was called" << std::endl;
    this->name = "Default";
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
{
    this->name = name;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat " << this->name << " constructor was called" << std::endl;
    this->grade = grade;
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
        this->name = original.name;
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

void Bureaucrat::signForm(std::string form, bool check) const
{
    if (check)
        std::cout << this->name << " signed " << form << std::endl;
    else
        std::cout << this->name << " couldn't sign " << form << " because don't have grade to that!" << std::endl;
}

std::ostream& operator<<(std::ostream & o, const Bureaucrat &original)
{
    o << original.getName() << ", bureaucrat grade " << original.getGrade() << ".";
    return (o);
}