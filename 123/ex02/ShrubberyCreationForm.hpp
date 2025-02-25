/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:27:13 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/20 18:28:36 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
            std::string target;
    
    public:
            ShrubberyCreationForm();
            ShrubberyCreationForm(std::string target);
            ~ShrubberyCreationForm();
            ShrubberyCreationForm(const ShrubberyCreationForm &original);
            ShrubberyCreationForm &operator=(const ShrubberyCreationForm &original);

			std::string getTarget() const;
            void execute(Bureaucrat const & executor) const;
};

#endif