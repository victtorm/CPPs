#ifndef CONTACT_HPP

#define CONTACT_HPP

#include "PhoneBook.hpp"
#include <iostream>
#include <string.h>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <unistd.h>

class Contact {
    private:
            std::string first_name;
            std::string last_name;
            std::string nickname;
            std::string number;
            std::string darkest_secret;
    public:
            Contact();
            ~Contact();
            void set_contact(Contact *contact);
            std::string set_input();
            std::string set_input_number();
            std::string get_first_name();
            std::string get_last_name();
            std::string get_nickname();
            std::string get_number();
            std::string get_darkest_secret();
};

#endif