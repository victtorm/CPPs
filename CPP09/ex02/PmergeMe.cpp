#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &original)
{
    *this = original
}

PmergeMe& PmergeMe::operator=(const PmergeMe& original)
{
    if (this != &original)
    {
        _vectorBefore = original._vectorBefore;
        _vectorAfter = original._vectorAfter;
        _dequeBefore = original._dequeBefore;
        _dequeAfter = original._dequeAfter;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::fordJohnsonSorte();
void PmergeMe::initContainers(std::vector<std::string> input)

size_t PmergeMe::binarySearchVector(const std::vector<int> &vector_container, int value);        
std::vector<int> PmergeMe::sortVector(std::vector<int> numbers_to_sort);

size_t PmergeMe::binarySearchDeque(const std::deque<int> &deque_container, int value);
std::deque<int> PmergeMe::sortDeque(std::deque<int> numbers_to_sort);
