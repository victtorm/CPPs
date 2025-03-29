#include <iostream>
#include "Array.hpp"


template <typename T>

void printArrayInfo(T &array)
{
    std::cout << "Size of array: " << array.size() << std::endl;
    std::cout << "Elements of this array:" << std::endl;
    for (unsigned int i = 0; i < array.size(); i++)
    {
        std::cout << array[i];
        if (i != array.size() - 1)
            std::cout << " | ";
    }
    std::cout<<std::endl;
}


int main()
{
	std::cout<<"*****  ARRAY OF INT TEST   *****"<<std::endl;

	Array<int> num(10);

    for (unsigned int i = 0; i < 10; i++)
        num[i] = i + 10;
    printArrayInfo(num);
    std::cout<<std::endl;

    std::cout<<"*****  ARRAY OF STING TEST   *****"<<std::endl;

	Array<std::string>  str(3);

	str[0] = "Hello";
	str[1] = "World";
	str[2] = "Hey";

    printArrayInfo(str);
    std::cout<<std::endl;

    std::cout<<"*****  EXCEPTION TEST   *****"<<std::endl;

	Array<int> numbers(5);

	try {
		std::cout << numbers[7] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "EXCEPTION: " << e.what() << std::endl;
	}
}