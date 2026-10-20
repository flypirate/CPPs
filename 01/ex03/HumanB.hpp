#pragma once
#include "Weapon.hpp"

class HumanB{
	private:
		Weapon b;
		std::string name;
	public:
		HumanB();
		void attach(std::string name, Weapon b);
		~HumanB();
};