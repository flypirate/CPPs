#include "Contact.hpp"
#include <iostream>

Contact::Contact():_firstName(),_lastName(),_nickname(),_phoneNumber(),_darkestSecret(){
}

std::string Contact::getFirstName()const{
	return (_firstName);
}

std::string Contact::getLastName()const{
	return (_lastName);
}

std::string Contact::getDarkestSecret()const{
	return (_darkestSecret);
}

std::string Contact::getNickname()const{
	return (_nickname);
}

std::string Contact::getPhoneNumber()const{
	return (_phoneNumber);
}

void Contact::setFirstName(std::string firstName){
	_firstName = firstName;
}

void Contact::setDarkestSecret(std::string darkestSecret){
	_darkestSecret = darkestSecret;
}

void Contact::setLastName(std::string lastName){
	_lastName = lastName;
}

void Contact::setPhoneNumber(std::string phoneNumber){
	_phoneNumber = phoneNumber;
}

void Contact::setNickname(std::string nickname){
	_nickname = nickname;
}

Contact::~Contact(){
}


