#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <ctime>
#include <cstdlib>
#include <climits>

class Pmergeme
{
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &original);
        PmergeMe& operator=(const PmergeMe& original);
        ~PmergeMe();

        void fordJohnsonSorte();
        void initContainers(std::vector<std::string> input)

        size_t binarySearchVector(const std::vector<int> &vector_container, int value);        
        std::vector<int> sortVector(std::vector<int> numbers_to_sort);
        
        size_t binarySearchDeque(const std::deque<int> &deque_container, int value);
        std::deque<int> sortDeque(std::deque<int> numbers_to_sort);

    private:
        std::vector<int> _vectorBefore;
        std::vector<int> _vectorAfter;
        std::deque<int> _dequeBefore;
        std::deque<int> _dequeAfter;      
};

template <typename T>
void printContainer(const T& container_to_print)
{
    typename T::const_iterator it;
    for (it = container_to_print.begin(); it != container_to_print.end(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

#endif