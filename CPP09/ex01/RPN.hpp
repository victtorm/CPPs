#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <cstdlib>
#include <exception>
#include <limits>

class RPN 
{
        public:
        void polishMath(std::string polish_notation);
        void calculate(char polish_operator);
        RPN();
        RPN(const RPN& original);
        RPN& operator=(const RPN& original);
        ~RPN();

        private:
            static std::stack<double> _polish_stack;
};

#endif