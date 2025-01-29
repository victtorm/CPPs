#include "Zombie.hpp"

Zombie*zombieHorde(int N, std::string name)
{
    int i = 0;

    if (N <= 0)
    {
        std::cerr << "[Error]: No zombies, so no horde!!!" << std::endl;
        return NULL;
    }
    Zombie *zombies = new Zombie[N];
    while (i < N)
    {
        zombies[i].setName(name);
        i++;
    }
    return (zombies);
}