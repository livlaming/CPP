#include <iostream>
#include <iomanip>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

PhonebookClass::PhonebookClass(void)
{
	this->ContactNbr = 0;
	this->AmountContacts = 0;
}

void	PhonebookClass::AddContactToPhonebook(void)
{
	this->Contact[this->ContactNbr].AddContact();
	if (this->ContactNbr == 7)
		this->ContactNbr = 0;
	else if (this->ContactNbr < 7)
		this->ContactNbr++;
	if (this->AmountContacts < 8)
		this->AmountContacts++;
}

static bool	isNumber(std::string input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		if (std::isdigit(input[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

static int ft_stoi(std::string input)
{
	int	nbr;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	if (input[i] == '+' || input[i] == '-')
	{
		if (input[i] == '-')
			sign = -1;
		i++;
	}
	while (input[i] >= '0' && input[i] <= '9')
	{
		nbr = nbr * 10 + (input[i] - 48);
		i++;
	}
	return(nbr * sign);
}


void	PhonebookClass::ShowPhonebook(void)
{
	int	i;
	std::string index;

	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First Name" << "|";
	std::cout << std::right << std::setw(10) << "Last Name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|";
	std::cout << "\n";
	i = 0;
	while (i < this->AmountContacts)
	{
		this->Contact[i].DisplayContacts(i);
		i++;
	}
	while (1)
	{
		std::cout << "\033[1mPlease provide the index of the desired entry: \033[0m\n";
		std::cin >> index;
		if (isNumber(index))
		{
			if (ft_stoi(index) >= 0 && ft_stoi(index) < this->AmountContacts)
			{
				this->Contact[ft_stoi(index)].DisplayFullInfo(ft_stoi(index));
				break;
			}
			else
				std::cout << "\033[1mPlease provide a valid index.\033[0m\n";
		}
		else
			std::cout << "\033[1mPlease provide a valid index.\033[0m\n";
	}
}

PhonebookClass::~PhonebookClass(void){}
