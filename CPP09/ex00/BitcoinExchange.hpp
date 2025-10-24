#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <climits>


class BitcoinExchange
{
    private:
            std::map<std::string, float> _file;
            std::map<std::string, float> _data;
    public:
            BitcoinExchange();
            BitcoinExchange(const BitcoinExchange &original);
            BitcoinExchange& operator=(const BitcoinExchange &original);
            ~BitcoinExchange();
            int	BitcoinExchange::getData();
            bool checkKey(std::string date);
            int strDigit(std::string str);
            bool checkValue(float value);
            void makeExchange(std::string file);
            void calculate(std::string date, float value);

};

#endif
