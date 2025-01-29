#include "PhoneBook.hpp"

Contact::Contact()
{
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->darkest_secret = "";
	this->number = "";
}

Contact::~Contact(){}


std::string Contact::set_input()
{
	std::string input = "";

	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl << "Exit Phonebook!" << std::endl;
			std::exit(0);
		}
		if (!input.empty())
			return (input);
		std::cout << "Please enter a valid word." << std::endl;
	}
}

int check_number(std::string str)
{
    unsigned int i = 0;
    
    while (i < str.length())
    {
        if (str[i] < '0' || str[i] > '9')
            return (false);
        i++;
    }
    return (true);
}

std::string Contact::set_input_number()
{
	std::string input = "";

	while (true)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl << "Exit Phonebook!" << std::endl;
			std::exit(0);
		}
		if (!input.empty() && check_number(input))
			return (input);
		std::cout << "Please enter a valid number." << std::endl;
        std::cout << "Number: ";
	}
}

void Contact::set_contact(Contact *contact)
{
    std::cout << "First name: ";
    this->first_name = contact->set_input();
    std::cout << "Last name: ";
	this->last_name = contact->set_input();
    std::cout << "Nickname: ";
	this->nickname = contact->set_input();
    std::cout << "Number: ";
	this->number = contact->set_input_number();
    std::cout << "Darkest secret: ";
    this->darkest_secret = contact->set_input();
}


std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

std::string Contact::get_number()
{
	return (this->number);
}