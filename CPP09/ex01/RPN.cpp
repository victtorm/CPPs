#include "RPN.hpp"

std::stack<double> RPN::_polish_stack;

RPN::RPN() {}

RPN::RPN(const RPN &original)
{
    (void)original;
}

RPN& RPN::operator=(const RPN &original)
{
    (void)original;
    return *this;
}

RPN::~RPN() {};

static bool polishOperator(char polish_operator)
{
    if (polish_operator == '+' || polish_operator == '-'
            || polish_operator == '*' || polish_operator == '/')
    {
        return true;
    }
    return false;
}

static void checkNotation(std::string polish_notation)
{
    for (unsigned int i = 0; i < polish_notation.length(); i++)
    {
        if(std::isdigit(polish_notation[i]) == 0)
        {
            if (!polishOperator(polish_notation[i]))
            {
                if (!std::isspace(polish_notation[i]))
                {
                    throw (std::invalid_argument("Error"));
                }
            }
        }
        if((std::isdigit(polish_notation[i]) || polishOperator(polish_notation[i]))
            && polish_notation[i + 1] && std::isspace(polish_notation[i + 1]) == 0)
        {
           throw (std::invalid_argument("Error"));
        }
    }
}

void RPN::calculate(char polish_operator)
{
    double first_number;
    double second_number;
    double result;

    first_number = _polish_stack.top();
    _polish_stack.pop();
    second_number = _polish_stack.top();
    _polish_stack.pop();
    switch (polish_operator)
	{
		case '+':
			result = second_number + first_number;	
			break;
		case '-':
			result = second_number - first_number;	
			break;
		case '*':
			result = second_number * first_number;	
			break;
		case '/':
			if (first_number == 0) 
            {
                throw (std::invalid_argument("Error: Division by Zero"));				
			}
			result = second_number / first_number;	
			break;
    }
    if (result > std::numeric_limits<int>::max())
    {
        throw (std::invalid_argument("Error: Division by Zero"));
    }
    else
    {
        _polish_stack.push(result);
    }
}

void RPN::polishMath(std::string polish_notation)
{
    checkNotation(polish_notation);
    for (unsigned int i = 0; i < polish_notation.length(); i++)
    {
        if(std::isdigit(polish_notation[i]))
        {
            _polish_stack.push(polish_notation[i] - 48);
        }
        if(_polish_stack.size() >= 2 && polishOperator(polish_notation[i]))
        {
           RPN::calculate(polish_notation[i]);
        }
    }
    if (_polish_stack.size() == 1)
    {
        std::cout << _polish_stack.top() << std::endl;
    }
    else 
    {
        std::cout << "Error: This is not Polish Notation format" << std::endl;
    }
}
