#pragma once
#include <string>
#include <iomanip>
#include <iostream>
#include "Contact.hpp"

//add, search, exit

class PhoneBook{
	private:
		Contact _contacts[8];
		int _count;
		int _index;
		std::string truncate(std::string string)const;
	public:
		PhoneBook();
		void addContact();
		void displayContacts()const;
		void displayDetails(std::string input)const;
		~PhoneBook();
};

