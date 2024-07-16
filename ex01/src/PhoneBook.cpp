#include "PhoneBook.hpp"

void	PhoneBook::add(void)
{
	static int i;

	this->contacts[i % MAX_CONTACTS].set();
	i++;
}
