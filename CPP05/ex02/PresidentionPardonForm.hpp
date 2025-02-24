/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentionPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:27:13 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/20 19:02:31 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
    private:
            std::string target;
    
    public:
            PresidentialPardonForm();
            PresidentialPardonForm(std::string target);
            ~PresidentialPardonForm();
            PresidentialPardonForm(const PresidentialPardonForm &original);
            PresidentialPardonForm &operator=(const PresidentialPardonForm &original);

            void execute(Bureaucrat const & executor) const;
}

#endif