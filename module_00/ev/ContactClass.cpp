#include <iostream>
#include <iomanip>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

ContactClass::ContactClass(void){}

void	ContactClass::AddContact(void)
{
	std::cout << "\033\n\t[1mAdding new contact . . .\033[0m\n\n";
	std::cout << "\033[1mPlease fill in the following fields.\033[0m\n";
	std::cout << "\033[1mFirst name: \033[0m";
	std::cin >> this->FirstName;
	std::cout << "\033[1mLast name: \033[0m";
	std::cin >> this->LastName;
	std::cout << "\033[1mNickname: \033[0m";
	std::cin >> this->NickName;
	std::cout << "\033[1mPhone number: \033[0m";
	std::cin >> this->PhoneNbr;
	std::cout << "\033[1mDarkest secret: \033[0m";
	std::cin >> this->DarkestSecret;
}

void	ContactClass::TruncateAttributes(void)
{
	if (this->FirstName.length() > 10)
		this->FirstName = this->FirstName.substr(0, 9) + ".";
	if (this->LastName.length() > 10)
		this->LastName = this->LastName.substr(0, 9) + ".";
	if (this->NickName.length() > 10)
		this->NickName= this->NickName.substr(0, 9) + ".";
}


void	ContactClass::DisplayContacts(int index)
{
	this->TruncateAttributes();
	std::cout << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << this->FirstName << "|";
	std::cout << std::right << std::setw(10) << this->LastName << "|";
	std::cout << std::right << std::setw(10) << this->NickName << "|";
	std::cout << "\n";
}

void	ContactClass::DisplayFullInfo(int index)
{
	std::cout << std::left << std::setw(30) << "\033[1mIndex: \033[0m" << index << std::endl;
	std::cout << std::setw(30) << "\033[1mFirst Name: \033[0m" << this->FirstName << std::endl;
	std::cout << std::setw(30) << "\033[1mLast Name: \033[0m" << this->LastName << std::endl;
	std::cout << std::setw(30) << "\033[1mNickname: \033[0m" << this->NickName << std::endl;
	std::cout << std::setw(30) << "\033[1Phone number: \033[0m" << this->PhoneNbr << std::endl;
	std::cout << std::setw(30) << "\033[1mDarkest secret: \033[0m" << this->DarkestSecret << std::endl;

}

ContactClass::~ContactClass(void){}

