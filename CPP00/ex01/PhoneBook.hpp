#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP
#define MAX_CONTACT 8

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook {
    private:
            Contact contacts[MAX_CONTACT];
            int contact_index;
            int total_contacts;
    public:
            PhoneBook(void);
            ~PhoneBook(void);
            void add_contact(void);
            void search_contact(void);
            void print_contacts(void);
            void search_index(void);
};

std::string truncate(std::string str);

#endif