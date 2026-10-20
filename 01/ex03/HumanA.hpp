#pragma once
#include "Weapon.hpp"

class HumanA{
	private:
		std::string name;
	public:
		HumanA(Weapon a);
		void attach(std::string name, Weapon a);
		~HumanA();
};