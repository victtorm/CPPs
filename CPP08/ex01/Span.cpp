#include "Span.hpp"

Span::Span(unsigned int n) : _n(n) {}

Span::~Span() {}

Span::Span(const Span &original)
{
    *this = original;
}
Span& Span::operator=(const Span &original)
{
    if(this != &original)
    {
        this->_n = original._n;
        this->numbers.clear();
        this->numbers = original.numbers;
    }
    return(*this);
}


void Span::addManyNumbers(int begin, int end)
{
    while(begin <= end)
    {
        addNumber(begin);
        begin++;
    }
}


void Span::addNumber(int num)
{
    if(this->numbers.size() < this->_n)
        numbers.push_back(num);
    else    
        throw (std::out_of_range("Overflow: Conteiner is full"));
}


unsigned int Span::shortestSpan() const
{
    if (this->numbers.size() == 1)
         throw (std::out_of_range("Error: Just one number"));
    
    std::list<int> tmp = this->numbers;
    tmp.sort();
    std::list<int>::iterator it = tmp.begin();
    std::list<int>::iterator it2 = ++tmp.begin();
    int i = *it2 - *it;
    while(it2 != tmp.end())
    {
        if (i > *it2 - *it)
            i = *it2 - *it;
        it++;
        it2++;
    }
    return (i);
}

unsigned int Span::longestSpan() const
{
    if (this->numbers.size() == 1)
        throw (std::out_of_range("Erro: Just one number"));
    int minNumber = *std::min_element(numbers.begin(), numbers.end());
    int maxNumber = *std::max_element(numbers.begin(), numbers.end());
    return (abs(maxNumber - minNumber));
}

void Span::printArray()
{
    std::list<int>::iterator it = this->numbers.begin();
    if (it == this->numbers.end())
        std::cout << "Empty Array" << std::endl;
    std::cout << "Array numbers:" << std::endl;
    while(it != this->numbers.end())
    {
        std::cout << *it;
        it++;
        if (it != this->numbers.end())
            std::cout <<  " | "; 
    }
    std::cout << std::endl;
}