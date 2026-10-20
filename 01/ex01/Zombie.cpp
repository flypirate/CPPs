#include "Zombie.hpp"

Zombie::Zombie() {}

void Zombie::setName(std::string name) {
	this->name = name;
}

void    Zombie::announce(void){
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " was destroyed." << std::endl;
}
