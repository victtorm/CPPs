#include "PmergeMe.hpp"

int maind(int argc, char **argv)
{
    if (argc < 2)
    {
        return std::cout << "Error: Invalid arguments" << std::endl;
    }
    std::vector<int> vector_before;
    std::deque<int> deque_before;
    for(int i = 1; i < argc; i++;)
    {
        char *std_end{};
        long number = std::strtol(argv[i] , &std_end, 10);
        if (*str_end != '\0' || num < 0 || num > INT_MAX)
        {
            std::cout << "Error: Invalid number" << std::endl;
            return 1;
        }
        vector_before.push_back(number);
        deque_before.push_back(number);
    }
    try
    {
        Pmergeme pmerge_me(vector_before, deque_before);
        pmerge_me.FordJohnsonSort();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}