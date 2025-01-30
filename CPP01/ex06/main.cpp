#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    harl;
    int     i = 0;
    
    if (argc != 2)
    {
        std::cerr << "Invalid Argument" << std::endl;
        return (1);
    }

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4)
    {
        if (levels[i] == argv[1])
            break;
        i++;
    }
    switch(i + 1)
    {
        case 1:
            harl.complain("DEBUG");
        case 2:
            harl.complain("INFO");
        case 3:
            harl.complain("WARNING");
        case 4:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Nothing relevant to say." << std::endl;
            break; 
    }
    return (0);
}