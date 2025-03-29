#include "BitcoinExchange.hpp"

Exchange::Exchange(std::string file)
{
    getData();
    checkDatabase();
    makeExchange();
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

void Exchange::getData()
{
    std::fstream inFile;
    std::string line;

    inFile.open("dataa.csv", std::ios::out);
    if (!inFile.good())
        throw std::runtime_error("Error: could not open database file.");
    std::getline(inFile, line);
    if (line.compare("data | value") != 0)
        throw std::runtime_error("Error: bad  input, data | value, not found.");
    while (std::getline(inFile, line))
    {
        for (size_t i = 0; i < line.size(); i++)
        {
            if (line[i] == ',')
                _data[line.substr(0,i)] = atof(line.substr(i + 1, line.size()).c_str());
        }
    }
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

}

void Exchange::checkDatabase()
{
    std::map<std::string, float>::iterator it = _data.begin();
    

    while (it != _data.end())
    {
        checkKey(it->first);
        checkValue(it->second);


    }
} 


void Exchange::makeExchange()
{

}