#pragma once
#include <string>

class	Contact{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
	public:
		Contact();
		std::string getFirstName()const;
		void setFirstName(std::string firstName);
		std::string getLastName()const;
		void setLastName(std::string firstName);
		std::string getNickname()const;
		void setNickname(std::string firstName);
		std::string getPhoneNumber()const;
		void setPhoneNumber(std::string firstName);
		std::string getDarkestSecret()const;
		void setDarkestSecret(std::string firstName);
		~Contact();
};