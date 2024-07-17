#include "contact_keeper.hpp"

int main(void)
{
	PhoneBook	phone_book;
	std::string input;

	while (42)
	{
		std::cout << "Enter command (ADD, SEARCH or EXIT):" << std::endl;
		std::cout << ">> ";
		std::getline(std::cin, input);

		if (input.compare("ADD") == 0)
		{
			phone_book.add();
		}
		else if(input.compare("SEARCH") == 0)
		{
			phone_book.search();
		}
		else if (input.compare("EXIT") == 0)
		{
			break;
		}
		else
		{
			std::cout << "Unrecognized command" << std::endl;
		}
	}
	return 0;
}
