#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook pb;
	std::cout << "Welcome to PhoneBook. Select 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
	std::string input;
	while (getline(std::cin, input))
	{
		if (input != "EXIT" && input != "ADD" && input != "SEARCH")
			std::cout << "Incorrect input. Try again." << std::endl;
		else if (input == "EXIT")
			return (0);
		else if (input == "ADD")
		{
			pb.addContact();
			std::cout << "Back to menu. Select 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
		}
		else if (input == "SEARCH")
		{		
			pb.displayContacts();
			std::cout << "Back to menu. Select 'ADD', 'SEARCH' or 'EXIT'" << std::endl;
		}
	}
	return (0);
}