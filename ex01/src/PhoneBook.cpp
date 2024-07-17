#include "PhoneBook.hpp"
#include <cstdlib>

void	PhoneBook::add(void)
{
	static int i;

	this->_contacts[i % MAX_CONTACTS].set();
	i++;
}

void	PhoneBook::_print_header(void)
{
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
}

void	PhoneBook::_print_tail(void)
{
	std::cout << " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ " << std::endl;
}

void	PhoneBook::search(void)
{
	this->_print_header();
	this->_preview();
	this->_print_tail();

	std::string	input;
	int index;

	std::cout << "Select and index between 1 and 8, inclusive (do not add unecessary spaces): ";
	getline(std::cin, input);
	if (input.compare("1") == 0 ||
		input.compare("2") == 0 ||
		input.compare("3") == 0 ||
		input.compare("4") == 0 ||
		input.compare("5") == 0 ||
		input.compare("6") == 0 ||
		input.compare("7") == 0 ||
		input.compare("8") == 0)
	{
		index = std::atoi(input.c_str());
	}
	else
	{
		std::cout << "Index out of bounds or malformed." << std::endl;
		std::cout << "Next time type a number between 1 and 8, inclusive.";
		std::cout << "And do not add spaces or other characters! Back to main menu..."
			<< std::endl << std::endl;
		return;
	}
	if (this->_contacts[index - 1].is_set() == false)
	{
		std::cout << "Contact " << index << " is not set yet. Back to main menu."
			<< std::endl << std::endl;
	}
	else
	{
		this->_contacts[index -1].print();
	}
}

void	PhoneBook::_preview(void)
{
	int i = 0;

	while ( i < 8)
	{
		if (this->_contacts[i].is_set() == true)
		{
			std::cout << "|" << std::setw(10) << std::right;
			std::cout << i + 1;
			std::cout << "|" <<	std::setw(10) << std::right;
			std::cout << this->_contacts[i].get_trunc_element("first_name");
			std::cout << "|" <<	std::setw(10) << std::right;
			std::cout << this->_contacts[i].get_trunc_element("last_name");
			std::cout << "|" <<	std::setw(10) << std::right;
			std::cout << this->_contacts[i].get_trunc_element("nickname");
			std::cout << "|" << std::endl;
		}
		i++;
	}
}
