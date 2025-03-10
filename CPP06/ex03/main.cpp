#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate()
{
	std::srand(std::time(NULL));
	int randomType = std::rand() % 3;
	switch (randomType)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return NULL;
	}
}

void idendify(Base *type)
{
	if (dynamic_cast<A*>(type))
		std::cout << "Pointer type: A" << std::endl;
	else if (dynamic_cast<B*>(type))
		std::cout << "Pointer type: B" << std::endl;
	else if (dynamic_cast<C*>(type))
		std::cout << "Pointer type: C" << std::endl;
}

void idendify(Base& type)
{
	try
	{
		A &a = dynamic_cast<A&>(type);
		(void)a;
		std::cout << "Reference type: A" << std::endl;
	}
	catch(const std::exception& e){
		try
		{
			B &b = dynamic_cast<B&>(type);
			(void)b;
			std::cout << "Reference type: B" << std::endl;
		}
		catch(const std::exception& e){
			try
			{
				C &c = dynamic_cast<C&>(type);
				(void)c;
				std::cout << "Reference type: C" << std::endl;
			}
			catch(const std::exception& e){
				std::cout << "Reference type: Unknow" << std::endl;
			}
		}
	}
}

int main()
{
	Base *type = generate();

	std::cout << " *** POINTER TEST *** " << std::endl;
	idendify(type);
	std::cout << " *** REFERENCE TEST *** " << std::endl;
	idendify(*type);

	delete type;
}