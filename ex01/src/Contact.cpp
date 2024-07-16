#include "Contact.hpp"

void	Contact::set(void)
{
	this->_set_first_name();
	this->_set_last_name();
	this->_set_nickname();
	this->_set_phone_number();
	this->_set_darkest_secret();
}

void	Contact::_set_first_name(void)
{

	std::string	input;

	while (42)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, input);

		if (input.empty() == true)
		{
			std::cout << "This field cannot be empty" << std::endl;
		}
		else
		{
			this->_first_name = input;
			break;
		}
	}
}

void	Contact::_set_last_name(void)
{
	std::string	input;

	while (42)
	{
		std::cout << "Last Name: ";
		std::getline(std::cin, input);

		if (input.empty() == true)
		{
			std::cout << "This field cannot be empty" << std::endl;
		}
		else
		{
			this->_last_name = input;
			break;
		}
	}
}

void	Contact::_set_nickname(void)
{
	std::string	input;

	while (42)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, input);

		if (input.empty() == true)
		{
			std::cout << "This field cannot be empty" << std::endl;
		}
		else
		{
			this->_nickname = input;
			break;
		}
	}
}

void	Contact::_set_phone_number(void)
{
	std::string	input;

	while (42)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, input);

		if (input.empty() == true)
		{
			std::cout << "This field cannot be empty" << std::endl;
		}
		else
		{
			this->_phone_number = input;
			break;
		}
	}
}

void	Contact::_set_darkest_secret(void)
{
	std::string	input;

	while (42)
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, input);

		if (input.empty() == true)
		{
			std::cout << "This field cannot be empty" << std::endl;
		}
		else
		{
			this->_darkest_secret = input;
			break;
		}
	}
}
