#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits>

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

            void getData(std::string file);
            bool checkKey(std::string date);
            int strDigit(std::string str);
            bool checkValue(float value);
            void makeExchange(std::string input_file);
            void calculate(std::string date, float value);

};

#endif

//fazer check sem 