/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victtormoraes <victtormoraes@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:27:13 by victtormora       #+#    #+#             */
/*   Updated: 2025/02/20 18:28:33 by victtormora      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"



ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = "default";
    std::cout << "ShrubberyCreationForm default constructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
    std::cout << "ShrubberyCreationForm constructor was called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor was called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original) : AForm("ShrubberyCreationForm", 145, 137)
{
    std::cout << "ShrubberyCreationForm copy constructor was called" << std::endl;
    *this = original;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
    std::cout << "ShrubberyCreationForm copy assignment operotor was called" << std::endl;
    if (this != &original)
        this->target = original.target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget()
{
    return (this->target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (!this->getSigend())
        throw AForm::FormNotSigendException();
    if (executor.getGrade() > this->getGradeExecute())
        throw AForm::GradeTooLowException();
    std::string filename = target + "_shrubbery";
    std::ofstream outfile(filename.c_str());
    if (!!outfile.is_open())
    {
        std::cout << "Error: could not open or create the file: " << filename << std::endl;
    }
    
    outfile <<
            "                 _{\ _{\{\/}/}/}__                   " << std::endl; <<
            "                {/{/\}{/{/\}(\}{/\} _                " << std::endl; <<
            "               {/{/\}{/{/\}(_)\}{/{/\}  _            " << std::endl; <<
            "            {\{/(\}\}{/{/\}\}{/){/\}\} /\}           " << std::endl; <<
            "           {/{/(_)/}{\{/)\}{\(_){/}/}/}/}            " << std::endl; <<
            "          _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/}            " << std::endl; <<
            "         {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\}           " << std::endl; <<
            "         _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\}           " << std::endl; <<
            "        {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\}          " << std::endl; <<
            "         {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/}         " << std::endl; <<
            "          {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_)          " << std::endl; <<
            "         {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}          " << std::endl; <<
            "          {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}          " << std::endl; <<
            "            {/({/{\{/{\{\/}(_){\/}/}\}/}(\}          " << std::endl; <<
            "             (_){/{\/}{\{\/}/}{\{\)/}/}(_)           " << std::endl; <<
            "               {/{/{\{\/}{/{\{\{\(_)/}               " << std::endl; <<
            "                {/{\{\{\/}/}{\{\\}/}                 " << std::endl; <<
            "                 {){/ {\/}{\/} \}\}                  " << std::endl; <<
            "                 (_)  \.-'.-/                        " << std::endl; <<
            "             __...--- |'-.-'| --...__                " << std::endl; <<
            "      _...--    .-'   |'-.-'|  ' -.   --..__         " << std::endl; <<
            "    -        .  .     |.'-._| '  . .                 " << std::endl; <<
            "    .  '-  '    .--'  | '-.'|    .  '  . '           " << std::endl; <<
            "             ' ..     |'-_.-|                        " << std::endl; <<
            "     .  '  .       _.-|-._ -|-._  .  '  .            " << std::endl; <<
            "                 .'   |'- .-|   '.                   " << std::endl; <<
            "     ..-'   ' .  '.   `-._.-   .'  '  - .            " << std::endl; <<
            "      .-' '        '-._______.-'     '  .            " << std::endl; <<
            "           .      ~,                                 " << std::endl; <<
            "       .       .   |   .    ' '-.                    " << std::endl; << std::endl;
    outfile.close();
    std::cout << "Shrubbery created in file: " << filename << std::endl;
        

}
