#include "RPN.hpp"

int main(int argc, char** argv)
{
    RPN rpn;

    if (argc == 2)
    {
        try
        {    
            std::string polish_notation = argv[1];
            rpn.polishMath(polish_notation);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return 1;
        }
    }
    else
    {

        std::cout << "Error: Invalid argument" << std::endl;
    }
    return (0);
}