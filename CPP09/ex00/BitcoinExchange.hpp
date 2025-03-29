#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

class Exchange
{
    private:
            std::string _file;
            std::map<std::string, float> _data;
            Exchange();

    public:
            Exchange(std::string file);
            Exchange(const Exchange &original);
            Exchange& operator=(const Exchange &original);
            ~Exchange();

            void getData();
            void checkDatabase();
            bool checkKey(std::string date);
            int strDigit(std::string str);
            void makeExchange();

};

#endif

//fazer check sem ,