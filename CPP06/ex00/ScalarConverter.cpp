#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &original)
{
    (void)original;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &original)
{
    (void)original;
    return (*this);
}

e_type findNumberType(std::string parameter)
{
    size_t check;

    check = parameter.find('f');
    if (check != std::string::npos)
        return FLOAT;
    check = parameter.find(".");
    if (check != std::string::npos)
        return DOUBLE;
    return INT;
}

e_type checkParameter(const std::string &parameter)
{   
   size_t check;

    if(parameter.empty())
        return CHAR;
    if (parameter.length() == 1 && isprint(parameter[0]))
       return CHAR;
    if (parameter == "nan" ||  parameter == "nanf" || parameter == "+inf"
        || parameter == "+inff" || parameter == "-inf" || parameter == "-inff")
            return SPECIAL;
    check = parameter.find(".");
    if (check != std::string::npos)
    {
        if (parameter.find_first_of(".") != parameter.find_last_of(".")
         || (parameter.length() == parameter.find_last_of(".") + 1)
         ||  parameter[0] == '.')
            return NOT;
    }
    check = parameter.find('f');
    if (check != std::string::npos)
    {
        if (parameter.find_first_of("f") != parameter.find_last_of("f")
         || parameter[parameter.length() - 1] != 'f')
            return NOT;
    }
    int i = 0;
    if (parameter[0] == '-' || parameter[0] == '+')
        i++;
    while (parameter[i])
    {
        if (parameter[i] < '0' || parameter[i] > '9')
        {
            if (parameter[i] == '.' || (parameter[i] == 'f'))
                ;
            else
                return NOT;
        }
        i++;
    }
    return (findNumberType(parameter));
}

static void convertToChar(std::string &parameter)
{
    char    c = parameter[0];
    int     i = static_cast<int>(c);
    float   f = static_cast<float>(c);
    double  d = static_cast<double>(c);

    std::cout << "char: " <<  c << std::endl;
    std::cout << "int: " <<  i << std::endl;
    std::cout << "float: " <<  f << ".0f" << std::endl;
    std::cout << "double: " <<  d << ".0" << std::endl;

}

static void convertToNum(std::string &parameter)
{
    double n = std::atof(parameter.c_str());
    if (n >= 0 && n <= 127)
    {
        if(n >= 32)
            std::cout << "char: " <<  static_cast<char>(n) << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else 
        std::cout << "char: impossible" << std::endl;
    if (n < INT_MIN || n > INT_MAX)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(n) << std::endl;
	if (n < FLOAT_MIN|| n > FLOAT_MAX)
		std::cout << "float: " << "impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
	if (n < DOUBLE_MIN || n > DOUBLE_MAX)
		std::cout << "double: " << "impossible" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;   
}

static void convertToSpecial(std::string &parameter)
{
    if (parameter == "nan" || parameter == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (parameter == "+inf" || parameter == "+inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (parameter == "-inf" || parameter == "-inff")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
}

void ScalarConverter::convert(std::string parameter)
{
    e_type type = checkParameter(parameter);
    if (type == CHAR)
        convertToChar(parameter);
    else if (type == SPECIAL)
         convertToSpecial(parameter);
    else if (type == INT || type == DOUBLE || type == FLOAT)
         convertToNum(parameter);
    else
        std::cerr << "Invalid Argumet" << std::endl;
}