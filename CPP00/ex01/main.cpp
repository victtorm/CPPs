#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void    exec_option(std::string input, PhoneBook *phonebook)
{
    if (!input.compare("ADD"))
        phonebook->add_contact();
    if (!input.compare("SEARCH"))
        phonebook->search_contact();
}

int main(void)
{
    
    PhoneBook   phonebook;
    std::string input;

    while (!std::cin.eof())
    {
        //start_display(MyBook);
        if(!std::getline(std::cin, input) || std::cin.eof())
            return(0);
        if(!input.compare("EXIT"))
            return(0);
        if(!input.compare("ADD") || !input.compare("SEARCH"))
            exec_option(input, &phonebook);
        else
            std::cout << "Invalid option try use ADD, SEARCH or EXIT" << std::endl;
    }
}