/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:27:13 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/20 18:28:33 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"



RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = "default";
    std::cout << "RobotomyRequestForm default constructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
    std::cout << "RobotomyRequestForm constructor was called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor was called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &original) : AForm("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm copy constructor was called" << std::endl;
    *this = original;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &original)
{
    std::cout << "RobotomyRequestForm copy assignment operotor was called" << std::endl;
    if (this != &original)
        this->target = original.target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    int static n = 0;

    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    std::cout << " *** Drilling noises ***" << std::endl;
    if (n % 2 == 0)
        std::cout << this->getTarget() << " has been robotomized" << std::endl;
    else
        std::cout << this->getTarget() << " was not robotomized" << std::endl;
}
