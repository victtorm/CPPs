#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe(std::vector<int> vector_berfore, std::deque<int> deque_before)
{
    _vector_before = vector_before;
    _deque_before = deque_before;
}

PmergeMe::PmergeMe(const PmergeMe &original)
{
    *this = original
}

PmergeMe& PmergeMe::operator=(const PmergeMe& original)
{
    if (this != &original)
    {
        _vector_before = original._vectorBefore;
        _vector_after = original._vectorAfter;
        _deque_before = original._dequeBefore;
        _deque_after = original._dequeAfter;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::fordJohnsonSort()
{
    std::cout << "Before: ";
    printContainer(_vector_before);

    clock_t = start = clock();
    _vector_after = sortVector(_vector_before);
    clock_t finish = clock();
    double time_to_sort_vector = static_cast<double>(finish - start) / CLOCKS_PER_SEC * 1000000;

    clock_t = start = clock();
    _deque_after = sortVector(_deque_before);
    clock_t finish = clock();
    double time_to_sort_deque = static_cast<double>(finish - start) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After: ";
    printContainer(_vector_after);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Time to process a range of " << _vectorBefore.size() << " elements with std::vector : " << time_to_sort_vector << " us" << std::endl;
    std::cout << "Time to process a range of " << _dequeBefore.size() << " elements with std::deque : " << time_to_sort_deque << " us" << std::endl;
}

size_t PmergeMe::binarySearchVector(const std::vector<int> &vector_container, int value)
{
    size_t low = 0;
    size_t high = vector_container.size();

    while (low < high)
    {
        size_t middle = (low + high) / 2;
        if (vector_container[middle] < value)
        {
            low = middle + 1;
        }
        else 
        {
            high = middle;
        }
        return low;
    }
}   

std::vector<int> PmergeMe::sortVector(std::vector<int> numbers);
{

}
size_t PmergeMe::binarySearchDeque(const std::deque<int> &deque_container, int value)
{
    size_t low = 0;
    size_t high = deque_container.size();

    while (low < high)
    {
        size_t middle = (low + high) / 2;
        if (deque_container[middle] < value)
        {
            low = middle + 1;
        }
        else 
        {
            high = middle;
        }
        return low;
    }
} 
std::deque<int> PmergeMe::sortDeque(std::deque<int> numbers);
