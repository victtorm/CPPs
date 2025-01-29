#include "PhoneBook.hpp"

void    print_menu()
{
    std::cout << "      PHONEBOOK      " << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << " ADD | SEARCH | EXIT " << std::endl;
    std::cout << "Select one option" << std::endl;
}

PhoneBook::PhoneBook(void)
{
    this->contact_index = 0;
    this->total_contacts = 0;
    print_menu();
}

PhoneBook::~PhoneBook(void){}

void PhoneBook::add_contact()
{
	if (total_contacts == 8)
    {
        std::cout << "The oldest contact " << contacts[contact_index].get_first_name() 
	        << " has been deleted!" << std::endl << std::endl;
    }
	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "            ADD A NEW CONTACT           " << std::endl;
    contacts[contact_index].set_contact(&contacts[contact_index]);
	std::cout << "New contact " << contacts[contact_index].get_first_name() 
		<< " has been added if sucess!" << std::endl;
    print_menu();
    if (total_contacts < MAX_CONTACT)
        total_contacts += 1;
    if (contact_index < MAX_CONTACT - 1)
	    contact_index += 1;
    else
        contact_index = 0;
}

void PhoneBook::search_index()
{
	int			index;
	std::string	str;
	

    std::getline(std::cin, str);
	index = std::atoi(str.c_str());
	while (index <= 0 || index > total_contacts)
	{
		std::cout << "Please enter a valid Contact index!"<< std::endl << std::endl;
		std::cout << "Select the index of the contact: ";
		std::getline(std::cin, str);
		if (std::cin.eof())
		{
			std::cout << std::endl << "Exit Phonebook!" << std::endl;
			std::exit(0);
		}
		index = std::atoi(str.c_str());
	}
    std::cout << "\n" << std::setw(20) << std::left << "First Name:" 
              << contacts[index - 1].get_first_name() << std::endl;
    std::cout << std::setw(20) << std::left << "Last Name:"
              << contacts[index - 1].get_last_name() << std::endl;
    std::cout << std::setw(20) << std::left << "Nickname:" 
              << contacts[index - 1].get_nickname() << std::endl;
    std::cout << std::setw(20) << std::left << "Phone Number:" 
              << contacts[index - 1].get_number() << std::endl;
    std::cout << std::setw(20) << std::left << "Darkest Secret:" 
              << contacts[index - 1].get_darkest_secret() << std::endl << std::endl;
    print_menu();
}

std::string truncate(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}

void PhoneBook::print_contacts()
{
    int i;
    
    i = 0;
	std::cout << "---------------- CONTACTS -----------------\n" << std::endl;
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	while (i < total_contacts)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncate(contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << truncate(contacts[i].get_nickname()) << std::endl;
        i++;
	}
    std::cout << std::endl << "Select contact: " << std::endl;
    search_index();
}

void PhoneBook::search_contact()
{
	if (total_contacts == 0)
	{
		std::cout << "No contacts" << std::endl << std::endl;
        print_menu();
		return;
	}
	print_contacts();
}