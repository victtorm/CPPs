#include "Zombie.hpp"

int main(void)
{
    int i = 0;
    int N = 4;

    Zombie *horde = zombieHorde(N, "Palmares");
    if (horde)
    {
        while (i < N)
        {
            horde[i].announce();
            i++;
        }
        delete [] horde;
    }
    std::cout << std::endl;
    std::cout << "TEST NO ZUMBI" << std::endl;
    i = 0;
    N = -11;
    Zombie *horde2 = zombieHorde(N, "Palmares");
    if (horde2 != NULL)
    {
        while (i < N)
        {
            horde2[i].announce();
            i++;
        }
        delete [] horde2;
    }

    i = 0;
    N = 50;
    Zombie *horde3 = zombieHorde(N, "Palmares");
    if (horde3 != NULL)
    {
        while (i < N)
        {
            horde3[i].announce();
            i++;
        }
        delete [] horde3;
    }
}