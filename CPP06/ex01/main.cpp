#include "Serializer.hpp"

int main()
{
    Data *		data = new Data;
	uintptr_t	ptr;


	ptr = Serializer::serialize(data);

    std::cout << " *** SERIALIZE *** "<< std::endl;
    std::cout << "ptr:  " << ptr << std::endl;

	data = Serializer::deserialize(ptr);

    std::cout << " *** DESERIALIZE *** "<< std::endl;
	std::cout << "data: " << data << ", number: " << data->number << std::endl;

	delete data;
	return (0);
}