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

bool	Contact::is_set(void)
{
	if (this->_first_name.empty() == true)
		return false;
	else
		return true;
}

std::string	Contact::get_trunc_element(std::string element)
{
	std::string	output;

	if (element.compare("first_name") == 0)
	{
		output = this->_first_name.substr(0, 10);
		if (this->_first_name.length() > 10)
		{
			output.replace(9, 1, ".");
		}
		return output;
	}
	else if (element.compare("last_name") == 0)
	{
		output = this->_last_name.substr(0, 10);
		if (this->_last_name.length() > 10)
		{
			output.replace(9, 1, ".");
		}
		return output;
	}
	else if (element.compare("nickname") == 0)
	{
		output = this->_nickname.substr(0, 10);
		if (this->_nickname.length() > 10)
		{
			output.replace(9, 1, ".");
		}
		return output;
	}
	return NULL;
}

void	Contact::print(void)
{
	std::cout << "First Name: " + this->_first_name << std::endl;
	std::cout << "Last Name: " + this->_last_name << std::endl;
	std::cout << "Nickname: " + this->_nickname << std::endl;
	std::cout << "Phone Number: " + this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " + this->_darkest_secret << std::endl << std::endl;
}
