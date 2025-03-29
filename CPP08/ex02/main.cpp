#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);


    std::cout<<"***** SUBJECT TEST *****"<<std::endl;
    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout<<"*****  TEST 2   *****"<<std::endl;


    MutantStack<int> stack2;

    stack2.push(10);
    stack2.push(20);
    stack2.push(30);
    stack2.push(40);
    stack2.push(50);

    for (MutantStack<int>::iterator it = stack2.begin(); it != stack2.end(); it++)
        std::cout << *it <<  " | ";
    std::cout<<std::endl;


    stack2.pop();
    for (MutantStack<int>::iterator it = stack2.begin(); it != stack2.end(); it++)
        std::cout << *it <<  " | ";
    std::cout<<std::endl;

    return 0;
}