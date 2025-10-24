#include "PmergeMe.hpp"
#include <cstdlib>
#include <cstring>
#include <stdexcept>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "Error: Invalid arguments" << std::endl;
        return 1;
    }
    std::vector<int> vector_before;
    std::deque<int> deque_before;
    for(int i = 1; i < argc; i++)
    {
        char *str_end;
        long number = std::strtol(argv[i] , &str_end, 10);
        if (*str_end != '\0' || number < 0 || number > INT_MAX)
        {
            std::cout << "Error: Invalid number" << std::endl;
            return 1;
        }
        vector_before.push_back(number);
        deque_before.push_back(number);
    }
    try
    {
        PmergeMe pmerge_me(vector_before, deque_before);
        pmerge_me.fordJohnsonSort();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}