#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    _data = getData("data.csv");
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &original)
{
    *this = original;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &original)
{
    (void)original;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

std::map<std::string, float> BitcoinExchange::getData(std::string file)
{
    std::fstream inFile(file);
    std::string line;
    std::map<std::string, float> result;

    //inFile.open(file, std::ios::out);
    if (!inFile.good())
    {
        std::cerr << "Error: could not open database file." << std::endl;
        return result;
    }
    std::getline(inFile, line);
    if (file.compare("data.csv") != 0 && line.compare("date | value") != 0)
    {
        std::cerr << "Error: bad  input, data | value, not found." << std::endl;
        return result;
    }
    while (std::getline(inFile, line))
    {
        for (size_t i = 0; i < line.size(); i++)
        {
            if (line[i] == ',' || (line[i] == '|' && file.compare("data.csv") != 0))
                result[line.substr(0,i)] = atof(line.substr(i + 1, line.size()).c_str());
        }
    }
    return result;
}

int BitcoinExchange::strDigit(std::string string)
{
    for(std::string::iterator it = string.begin(); it != string.end(); it++)
    {
        if(!isdigit(*it))
        return 0;
    }
    return 1;
}

bool BitcoinExchange::checkKey(std::string date)
{
    std::string year, month, day;
    year.assign(date, 0, 4);
    month.assign(date, 5, 2);
    day.assign(date, 8, 2);

    if (!strDigit(year) || !strDigit(month) || !strDigit(day))
    return false;
    int yearInt, monthInt, dayInt;
    yearInt = stoi(year);
    monthInt = stoi(month);
    dayInt = stoi(day);
    if (monthInt < 0  || monthInt > 12 || dayInt < 0 || dayInt > 31)
    return false;
    if ((monthInt == 2 || monthInt == 4 || monthInt == 4
        || monthInt == 6 || monthInt == 9 || monthInt == 11) && dayInt == 31)
        return false;
        bool leapYear = (yearInt % 4 == 0 && (yearInt % 100 != 0 || yearInt % 400 == 0));
        if (monthInt == 2 && (dayInt > 29 || (dayInt == 29 && !leapYear)))
        return false;
        return true;
    }
    
    
    bool BitcoinExchange::checkValue(float value)
    {
        if (value < 0)
        {
            std::cout << "Error: invalid with negative numbers." << std::endl;
            return false;
        }
        if (value > INT_MAX)
        {
            std::cout << "Error: number bigger than INT_MAX ." << std::endl;
            return false;
        }
        return true;
    }
    
void BitcoinExchange::makeExchange(std::string file)
{
    _file = getData(file);
    std::map<std::string, float>::iterator it = _file.begin();
    while (it != _file.end())
    {
        if (checkKey(it->first) && checkValue(it->second))
            calculate(it->first, it->second);
        it++;
    }
} 


void BitcoinExchange::calculate(std::string date, float value)
{
    float result;
    std::map<std::string, float>::iterator it = _data.upper_bound(date);
    if (it != _data.begin())
        it--;
    result = it->second * value;
    std::cout << date << " => " << value << " = " << result << std::endl;
}