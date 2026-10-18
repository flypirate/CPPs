#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <sstream>
#include <cctype>

PhoneBook::PhoneBook():_count(0), _index(0){
}

bool isPrint(const std::string input){
	size_t	i = 0;
	if (input[0])
	{
		while (i < input.length())
		{
			if (!std::isprint(static_cast<unsigned char>(input[i])))
			{
				std::cout << "Incorrect input. Please use ASCII characters only." << std::endl;
				return false;
			}
			i++;
		}
	}
	return true;
}

void PhoneBook::addContact(){
	std::string input;
	std::cout << "Enter First Name:" << std::endl;
	std::getline(std::cin, input);
	while (input.empty() || !isPrint(input))
	{
		std::cout << "Enter First Name:" << std::endl;
		std::getline(std::cin, input);
	}
	_contacts[_count].setFirstName(input);
	std::cout << "Enter Last Name:" << std::endl;
	std::getline(std::cin, input);
	while (input.empty() || !isPrint(input))
	{
		std::cout << "Enter Last Name:" << std::endl;
		std::getline(std::cin, input);
	}
	_contacts[_count].setLastName(input);
	std::cout << "Enter nickname:" << std::endl;
	std::getline(std::cin, input);
	while (input.empty() || !isPrint(input))
	{
		std::cout << "Enter nickname:" << std::endl;
		std::getline(std::cin, input);
	}
	_contacts[_count].setNickname(input);
	std::cout << "Enter phone number:" << std::endl;
	std::getline(std::cin, input);
	while (input.empty() || !isPrint(input))
	{
		std::cout << "Enter phone number:" << std::endl;
		std::getline(std::cin, input);
	}
	_contacts[_count].setPhoneNumber(input);
	std::cout << "Enter darkest secret:" << std::endl;
	std::getline(std::cin, input);
	while (input.empty() || !isPrint(input))
	{
		std::cout << "Enter darkest secret:" << std::endl;
		std::getline(std::cin, input);
	}
	_contacts[_count].setDarkestSecret(input);
	_count++;
	if (_count == 8)
	{
		_count = 0;
	}
	if (_index < 8)
		_index++;
}

void PhoneBook::displayContacts()const{
	int i = 0;
	std::string input;
	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "FIRST NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;
	while (i < _index)
	{
		std::string firstname = truncate(_contacts[i].getFirstName());
		std::cout << std::setw(10) << i + 1 << "|" << std::setw(10) << firstname << "|";
		std::string lastname = truncate(_contacts[i].getLastName());
		std::cout << std::setw(10) << lastname << "|";
		std::string nickname = truncate(_contacts[i].getNickname());
		std::cout << std::setw(10) << nickname << std::endl;
		i++;
	}
	std::cout << std::endl;
	std::cout << "Select index of contact to show details" << std::endl;
	getline(std::cin, input);
	displayDetails(input);
}

void PhoneBook::displayDetails(std::string input)const{
	int	n;
	if (_index == 0)
	{
		std::cout << "No contacts saved" << std::endl;
		return;
	}
	std::istringstream number(input);
	number >> n;
	while (n > _index || n < 1)
	{
		std::cout << "Invalid index. Try again" << std::endl;
		getline(std::cin, input);
		std::istringstream number(input);
		number >> n;
	}
	std::cout << "FIRST NAME = ";
	std::string firstname = truncate(_contacts[n - 1].getFirstName());
	std::cout << firstname << std::endl;
	std::cout << "LAST NAME = ";
	std::string lastname = truncate(_contacts[n - 1].getLastName());
	std::cout << lastname << std::endl;
	std::cout << "NICKNAME = ";
	std::string nickname = truncate(_contacts[n - 1].getNickname());
	std::cout << nickname << std::endl;
	std::cout << "PHONE NUMBER = ";
	std::string phone = truncate(_contacts[n - 1].getPhoneNumber());
	std::cout << phone << std::endl;
	std::cout << "DARKEST SECRET = ";
	std::string secret = truncate(_contacts[n - 1].getDarkestSecret());
	std::cout << secret << std::endl;
}

std::string PhoneBook::truncate(std::string string)const{
	int i = string.length();

	if (i > 10)
	{
		std::string cut = string.substr(0, 9);
		cut = cut + ".";
		return(cut);
	}
	else
		return(string);
}

PhoneBook::~PhoneBook(){
}