#include "RPN.hpp"

int main(int argc, char** argv)
{
    RPN poli;

    if (argc == 2)
    {
        std::string file = argv[1];
        poli.polishMath(file);
    }
    else 
        std::cout << "Error: Invalid argument" << std::endl;
    return (0);
}