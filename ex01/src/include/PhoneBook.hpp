#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#define MAX_CONTACTS 8

#include "Contact.hpp"

class PhoneBook
{
	public:
		Contact contacts[8];
		void add(void);
};

#endif //PHONEBOOK_H
