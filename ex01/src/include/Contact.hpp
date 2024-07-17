#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cstring>

class	Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

		void		_set_first_name(void);
		void		_set_last_name(void);
		void		_set_nickname(void);
		void		_set_phone_number(void);
		void		_set_darkest_secret(void);

	public:
		void	set(void);
		void	print(void);
		bool	is_set(void);
		std::string	get_trunc_element(std::string element);

};

#endif //CONTACT_H
