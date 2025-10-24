#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(std::vector<int> vector_before, std::deque<int> deque_before)
{
    _vector_before = vector_before;
    _deque_before = deque_before;
}

PmergeMe::PmergeMe(const PmergeMe &original)
{
    *this = original;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& original)
{
    if (this != &original)
    {
        _vector_before = original._vector_before;
        _vector_after = original._vector_after;
        _deque_before = original._deque_before;
        _deque_after = original._deque_after;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::fordJohnsonSort()
{
    std::cout << "Before: ";
    printContainer(_vector_before);

    clock_t start_sort_vector = clock();
    _vector_after = sortVector(_vector_before);
    clock_t finish_sort_vector = clock();
    double time_to_sort_vector = static_cast<double>(finish_sort_vector - start_sort_vector) / CLOCKS_PER_SEC * 1000000;

    clock_t start_sort_deque = clock();
    _deque_after = sortDeque(_deque_before);
    clock_t finish_sort_deque = clock();
    double time_to_sort_deque = static_cast<double>(finish_sort_deque - start_sort_deque) / CLOCKS_PER_SEC * 1000000;

    std::cout << "After: ";
    printContainer(_vector_after);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Time to process a range of " << _vector_after.size() << " elements with std::vector : " << time_to_sort_vector << " us" << std::endl;
    std::cout << "Time to process a range of " << _deque_after.size() << " elements with std::deque : " << time_to_sort_deque << " us" << std::endl;
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
    }
    return low;
}

std::vector<size_t> PmergeMe::createjacob_sthal_sequenceSequence(size_t limit) 
{
    std::vector<size_t> jacob_sthal_sequence;
    if (limit == 0)
    {
        return jacob_sthal_sequence;
    }
    if (limit >= 1)
    {
        jacob_sthal_sequence.push_back(1);
    }
    if (limit >= 2)
    {
        jacob_sthal_sequence.push_back(3);
    }
    for (size_t i = 2; ; i++)
    {
        if (jacob_sthal_sequence.size() < 2) break;
        
        size_t next = jacob_sthal_sequence[i-1] + 2 * jacob_sthal_sequence[i-2];
        if (next > limit) break;
        jacob_sthal_sequence.push_back(next);
    }
    return jacob_sthal_sequence;
}

std::vector<int> PmergeMe::sortVector(std::vector<int> numbers)
{
    bool has_rest_number = false;
    int rest_number = 0;

    if(numbers.size() <= 1)
    {
        return numbers;
    }

    if (numbers.size() % 2 != 0)
    {
        rest_number = numbers.back();
        numbers.pop_back();
        has_rest_number = true;
    }

    std::vector<std::pair<int, int> > current_pairs;
    for (size_t i = 0; i < numbers.size(); i += 2)
    {
        if (numbers[i] < numbers[i + 1])
        {
            current_pairs.push_back(std::make_pair(numbers[i], numbers[i + 1]));
        }
        else
        {
            current_pairs.push_back(std::make_pair(numbers[i + 1], numbers[i]));
        }
    }

    std::vector<int> biggers;
    for (size_t i = 0; i < current_pairs.size(); i++)
    {
        biggers.push_back(current_pairs[i].second);
    }
    std::vector<int> sorted_biggers = sortVector(biggers);

    std::vector<int> main_chain = sorted_biggers;

    if (!sorted_biggers.empty())
    {
        int first_smaller = -1;
        for (size_t i = 0; i < current_pairs.size(); i++)
        {
            if(current_pairs[i].second == sorted_biggers[0])
            {
                first_smaller = current_pairs[i].first;
                break;
            }
        }
        if (first_smaller != -1)
        {
            size_t position = binarySearchVector(main_chain, first_smaller);
            main_chain.insert(main_chain.begin() + position, first_smaller);
        }
    }
    
    std::vector<int> pendent_elements;
    for (size_t i = 1; i < sorted_biggers.size(); i++)
    {
        for(size_t j = 0; j < current_pairs.size(); j++)
        {
            if (current_pairs[j].second == sorted_biggers[i])
            {
                pendent_elements.push_back(current_pairs[j].first);
                break;
            }
        }
    }

    std::vector<size_t> jacob_sthal_sequence = createjacob_sthal_sequenceSequence(pendent_elements.size());
    size_t last_inserted = 0;
    for (size_t i = 0; i < jacob_sthal_sequence.size(); i++)
    {
        size_t group_start = jacob_sthal_sequence[i];
        if (group_start > pendent_elements.size())
        {
            group_start = pendent_elements.size();
        }
        for (size_t j = group_start; j > last_inserted; j--)
        {
            size_t position = binarySearchVector(main_chain, pendent_elements[j - 1]);
            main_chain.insert(main_chain.begin() + position, pendent_elements[j - 1]);
        }
        last_inserted = group_start;
    }

    if (has_rest_number)
    {
        size_t position = binarySearchVector(main_chain, rest_number);
        main_chain.insert(main_chain.begin() + position, rest_number);
    }
    return main_chain;
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
    }
    return low;
}

std::deque<int> PmergeMe::sortDeque(std::deque<int> numbers)
{
    bool has_rest_number = false;
    int rest_number = 0;

    if(numbers.size() <= 1)
    {
        return numbers;
    }

    if (numbers.size() % 2 != 0)
    {
        rest_number = numbers.back();
        numbers.pop_back();
        has_rest_number = true;
    }

    std::vector<std::pair<int, int> > current_pairs;
    for (size_t i = 0; i < numbers.size(); i += 2)
    {
        if (numbers[i] < numbers[i + 1])
        {
            current_pairs.push_back(std::make_pair(numbers[i], numbers[i + 1]));
        }
        else
        {
            current_pairs.push_back(std::make_pair(numbers[i + 1], numbers[i]));
        }
    }

    std::deque<int> biggers;
    for (size_t i = 0; i < current_pairs.size(); i++)
    {
        biggers.push_back(current_pairs[i].second);
    }
    std::deque<int> sorted_biggers = sortDeque(biggers);

    std::deque<int> main_chain = sorted_biggers;

    if (!sorted_biggers.empty())
    {
        int first_smaller = -1;
        for (size_t i = 0; i < current_pairs.size(); i++)
        {
            if(current_pairs[i].second == sorted_biggers[0])
            {
                first_smaller = current_pairs[i].first;
                break;
            }
        }
        if (first_smaller != -1)
        {
            size_t position = binarySearchDeque(main_chain, first_smaller);
            main_chain.insert(main_chain.begin() + position, first_smaller);
        }
    }
    
    std::deque<int> pendent_elements;
    for (size_t i = 1; i < sorted_biggers.size(); i++)
    {
        for(size_t j = 0; j < current_pairs.size(); j++)
        {
            if (current_pairs[j].second == sorted_biggers[i])
            {
                pendent_elements.push_back(current_pairs[j].first);
                break;
            }
        }
    }

    std::vector<size_t> jacob_sthal_sequence = createjacob_sthal_sequenceSequence(pendent_elements.size());
    size_t last_inserted = 0;
    for (size_t i = 0; i < jacob_sthal_sequence.size(); i++)
    {
        size_t group_start = jacob_sthal_sequence[i];
        if (group_start > pendent_elements.size())
        {
            group_start = pendent_elements.size();
        }
        for (size_t j = group_start; j > last_inserted; j--)
        {
            size_t position = binarySearchDeque(main_chain, pendent_elements[j - 1]);
            main_chain.insert(main_chain.begin() + position, pendent_elements[j - 1]);
        }
        last_inserted = group_start;
    }

    if (has_rest_number)
    {
        size_t position = binarySearchDeque(main_chain, rest_number);
        main_chain.insert(main_chain.begin() + position, rest_number);
    }
    return main_chain;
}
