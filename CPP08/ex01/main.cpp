
#include "Span.hpp"

int main()
{
    std::cout << "***    SUBJECT TEST    ***" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printArray();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    std::cout << "***    MANY NUMBERS TEST    ***" << std::endl;
    Span sp2 = Span(100000);
    sp2.addManyNumbers(1, 100000);

    sp2.printArray();
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    std::cout << "***    MORE THAN POSSIBLE TEST    ***" << std::endl;
    Span sp3 = Span(15);
    try{
        sp3.addManyNumbers(1, 15);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    sp3.printArray();
    try{
        sp3.addNumber(16);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}