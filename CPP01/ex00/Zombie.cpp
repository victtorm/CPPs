#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "Zombie: " << this->name << " has been created!!!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie: " << this->name << " has been destroyed!!!" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}