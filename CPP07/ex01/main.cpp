#include "iter.hpp"

template <typename T>

void printElement(T &element)
{
    std::cout<<element << " ";
}

template <typename T>

void increment(T &nbr)
{
    nbr+=5;
}

template <typename T>

void toUpper(T &str)
{
    for(unsigned int i = 0;i < str.length();i++)
        str[i] = std::toupper(str[i]);
}


int main()
{
	int arrayInt[] = {1,2,3,4,5,6};
	size_t len = sizeof(arrayInt) / sizeof(arrayInt[0]);

	
	std::cout<<"*****  ARRAY OF INT TEST - Increment   *****"<<std::endl;	
	std::cout<<"*****        Before Iter function      *****"<<std::endl;

	for (size_t i = 0; i < len; i++)
	{
	     printElement(arrayInt[i]);
	}
    std::cout<<std::endl;
	iter(arrayInt, len, increment);
	std::cout<<"*****        After Iter function      *****"<<std::endl;
    for (size_t i = 0; i < len; i++)
    {
        printElement(arrayInt[i]);
    }
    std::cout<<std::endl;

	std::cout<<"*****  ARRAY OF STING TEST - ToUpper   *****"<<std::endl;	
	std::cout<<"*****        Before Iter function      *****"<<std::endl;


    std::string arrayStr[]= {"Hello","World","Hey"};
    size_t slen = sizeof(arrayStr) / sizeof(arrayStr[0]);
	


	for (size_t i = 0; i < slen; i++)
    {
        printElement(arrayStr[i]);
    }
    std::cout<<std::endl;
    iter(arrayStr,3,toUpper);
    std::cout<<"*****        After Iter function      *****"<<std::endl;
    for (size_t i = 0; i < slen; i++)
    {
        printElement(arrayStr[i]);
    }
    std::cout<<std::endl;
}