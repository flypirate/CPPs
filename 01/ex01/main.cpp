#include "Zombie.hpp"

int main(void) {
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");

    if (!horde)
        return 1;

    int i = 0;
    while (i < N) {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return 0;
}