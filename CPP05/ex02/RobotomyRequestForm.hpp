/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:27:13 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/20 18:28:36 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
    private:
            std::string target;
    
    public:
            RobotomyRequestForm();
            RobotomyRequestForm(std::string target);
            ~RobotomyRequestForm();
            RobotomyRequestForm(const RobotomyRequestForm &original);
            RobotomyRequestForm &operator=(const RobotomyRequestForm &original);

            void execute(Bureaucrat const & executor) const;
}

#endif