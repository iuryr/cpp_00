#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iomanip>

#include "Contact.hpp"

#define MAX_CONTACTS 8


class PhoneBook
{
	public:
		void add(void);
		void search(void);

	private:
		Contact _contacts[8];
		void _print_header(void);
		void _preview(void);
		void _print_tail(void);

};

#endif //PHONEBOOK_H
