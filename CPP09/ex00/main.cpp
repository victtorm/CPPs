#include "BitcoinExchange.hpp"

int main(int argc, char** argv)
{
    BitcoinExchange btc;

    if (argc == 2)
    {
        std::string file = argv[1];
        btc.makeExchange(file);
    }
    else 
        std::cout << "Error: Invalid argument" << std::endl;
    return (0);
}
