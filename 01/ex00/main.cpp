#include "Zombie.hpp"
#include <stdlib.h>
#include <string>

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	std::string name = argv[1];
	randomChump(name);
	Zombie *z = newZombie(name);
	z->announce();
	delete z;
	return (0);
}