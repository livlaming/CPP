#include <iostream>
#include <string>
#include <cstring>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

static std::string	make_command_capital(std::string cmd)
{
	int	i;

	i = 0;
	while (cmd[i])
	{
		cmd[i] = toupper(cmd[i]);
		i++;
	}
	return(cmd);
}

int	main()
{
	std::string		command;
	PhonebookClass	Phonebook;

	std::cout << "\033[46;1m\t\t\t\tPHONEBOOK\033[0m\n\n";
	while (command != "EXIT")
	{
		std::cout << "\033[1m\n\tPlease provide a command (ADD, SEARCH, or EXIT):\033[0m\n";
		std::cin >> command;
		command = make_command_capital(command);
		if (command == "ADD")
			Phonebook.AddContactToPhonebook();
		 else if (command == "SEARCH")
		 	Phonebook.ShowPhonebook();
		else if (command == "EXIT")
			std::cout << "\033[1m\tExiting the phonebook . . .\033[0m\n\n";
		else
			std::cout << command << "\033[1m is not a valid command. Please try again. \033[0m\n";
	}
	std::cout << "\033[46;1m\t\t\t\tBYE ! ! !\033[0m\n";
	return (0);
}
