#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        Exchange a(argv[1]);
        
    }
    else 
        std::cout << "Error: Invalid argument" << std::endl;
    return (0);
}


char *changeCase(char *str)
{
    char *newStr;
    int i;

    newStr = NULL;
    i = 0;
    if (str == NULL)
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] >=)
    }
    
}