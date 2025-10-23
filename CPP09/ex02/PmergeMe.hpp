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
        PmergeMe(std::vector<int> vector_berfore, std::deque<int> deque_before);
        PmergeMe(const PmergeMe &original);
        PmergeMe& operator=(const PmergeMe& original);
        ~PmergeMe();

        void fordJohnsonSort();
        void initContainers(std::vector<std::string> input)

        size_t binarySearchVector(const std::vector<int> &vector_container, int value);        
        std::vector<int> sortVector(std::vector<int> numbers);
        
        size_t binarySearchDeque(const std::deque<int> &deque_container, int value);
        std::deque<int> sortDeque(std::deque<int> numbers);

    private:
        std::vector<int> _vector_before;
        std::vector<int> _vector_after;
        std::deque<int> _deque_before;
        std::deque<int> _deque_after;      
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