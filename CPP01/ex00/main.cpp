#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie1 = newZombie("dos Palmares");
    zombie1->announce();
    randomChump("Zamba");
    delete zombie1;
}