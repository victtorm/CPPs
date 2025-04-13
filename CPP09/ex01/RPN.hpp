#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>
#include <limits>

class RPN 
{
    private:
            static std::stack<int> _stack;

            RPN();
            RPN(const RPN& original);
            RPN& operator=(const RPN& original);
            ~RPN();
    public:
            static void polishMath(std::string numbers);
};


#endif