#include "BitcoinExchange.hpp"

Exchange::Exchange(std::string file)
{
    getData("data.csv");
    makeExchange(file);
}


Exchange::Exchange(const Exchange &original)
{
    *this = original;
}

Exchange& Exchange::operator=(const Exchange &original)
{
    if (this != &original)
    {

    }
    return (*this);
}

Exchange::~Exchange() {}



void Exchange::getData(std::string file)
{
    std::fstream inFile;
    std::string line;
    std::map<std::string, float> data;

    inFile.open(file, std::ios::out);
    if (!inFile.good())
        throw std::runtime_error("Error: could not open database file.");
    std::getline(inFile, line);
    if (line.compare("data | value") != 0)
        throw std::runtime_error("Error: bad  input, data | value, not found.");
    while (std::getline(inFile, line))
    {
        for (size_t i = 0; i < line.size(); i++)
        {
            if (line[i] == ',' || (line[i] == '|' && file.compare("data.csv")))
                _data[line.substr(0,i)] = atof(line.substr(i + 1, line.size()).c_str());
        }
    }
    return;
}

int Exchange::strDigit(std::string string)
{
    for(std::string::iterator it = string.begin(); it != string.end(); it++)
    {
        if(!isdigit(*it))
            return 0;
    }
    return 1;
}

bool Exchange::checkKey(std::string date)
{
    std::string year, month, day;
    year.assign(date, 0, 4);
    month.assign(date, 5, 2);
    day.assign(date, 8, 2);

    if (!strDigit(year) || !strDigit(month) || !strDigit(day))
        return false;
    int yearInt, monthInt, dayInt;
    yearInt = atoi(year.c_str());
    monthInt = atoi(month.c_str());
    dayInt = atoi(day.c_str());
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


bool Exchange::checkValue(float value)
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

void Exchange::getInput(std::string date, float value)
{

}

void Exchange::makeExchange(std::string input_file)
{
    getInput(input_file);
    std::map<std::string, float>::iterator it = _data.begin();
    
    while (it != _data.end())
    {
        if (checkKey(it->first) &&  checkValue(it->second))
            calculate(it->first, it->second);
        it++;
    }
} 
/*
std::string Exchange::checkDate(std::string date)
{
    std::string year, month, day;
    year.assign(date, 0, 4);
    month.assign(date, 5, 2);
    int yearInt, monthInt, dayInt;
    yearInt = atoi(year.c_str());
    monthInt = atoi(month.c_str());
    dayInt = atoi(day.c_str());
    if (date.compare("2009-01-01") || yearInt <= 2008)
        return _data.begin()->first;
    if (date.compare("2022-03-30") || date.compare("2022-03-31")
            || (yearInt == 2022 && monthInt >= 4) || yearInt >= 2023)
        return _data.end()->first;
    std::map<std::string, float>::iterator it = _data.find(date);
    if (it == data.end())

    return date;

}*/


void Exchange::calculate(std::string date, float value)
{
    float result;
    std::map<std::string, float>::iterator it = _data.upper_bound(date);
    if (it != _data.begin())
        it--;
    result = it->second * value;
    std::cout << date << " => " << value << " = " << result << std::endl;
}