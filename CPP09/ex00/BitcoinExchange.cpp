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
/*
std::map<std::string, float> BitcoinExchange::getData(std::string file)
{
    std::fstream inFile(file.c_str());
    std::string line;
    std::map<std::string, float> result;

    if (!inFile.good())
    {
        std::cerr << "Error: could not open database file." << std::endl;
        return result;
    }
    std::getline(inFile, line);
    if (file.compare("data.csv") != 0 && line.compare("date | value") != 0)
    {
        std::cerr << "Error: bad  input, date | value, not found." << std::endl;
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
}*/

int	BitcoinExchange::getData() 
{

	std::ifstream file("data.csv");
	if (!file) 
    {
        std::cerr << "Error: bad  input, date | value, not found." << std::endl;
        return 0;
	}
	std::string line, key, value;
	while(std::getline(file, line)) {
		if (line.find_first_of("0123456789") == line.npos)
			continue ;
		key.assign(line, 0, 10);
		value.assign(line, 11, line.length());
		std::pair<std::string, float> newPair(key, atof(value.c_str()));
		BitcoinExchange::_data.insert(newPair);
	}
	file.close();
	return 1;
}

std::pair<std::string, std::string> extractDateValue(std::string &line) {
	
	if (line.find("|") == line.npos) // if did not encounter pipe
		return (std::pair<std::string, std::string>("", ""));
	std::string date, value;
	std::string::iterator it;
	int pipePos = 0;
	for(it = line.begin(); *it != '|'; it++)
		pipePos++;
	date.assign(line, 0, pipePos);
	value.assign(line, pipePos + 1, line.length());
	
	return (std::pair<std::string, std::string> (date, value));
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
    {
        return false;
    }
    int yearInt, monthInt, dayInt;
    yearInt = atoi(year.c_str());
    monthInt = atoi(month.c_str());
    dayInt = atoi(day.c_str());
    if (monthInt < 0  || monthInt > 12 || dayInt < 0 || dayInt > 31)
        return false;
    if ((monthInt == 2 || monthInt == 4 || monthInt == 4
        || monthInt == 6 || monthInt == 9 || monthInt == 11) && dayInt == 31)
    {
        return false;
    }
        bool leapYear = (yearInt % 4 == 0 && (yearInt % 100 != 0 || yearInt % 400 == 0));
        if (monthInt == 2 && (dayInt > 29 || (dayInt == 29 && !leapYear)))
        {
            return false;
        }
        return true;
    }
    
    
    bool BitcoinExchange::checkValue(float value)
    {
        if (value < 0)
        {
            std::cout << "Error: invalid with negative numbers." << std::endl;
            return false;
        }
        if (value > 1000)
        {
            std::cout << "Error: number bigger than 1000." << std::endl;
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