#include "Account.hpp"
#include <iostream>
#include <ctime>

/*initializing static member variables in header files is not advisable because
if they are initialized in other header files the programmer can't be sure of what
initialization prevails. In this case, since we only have Account.hpp, it's OK.*/
int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_totalAmount;
}

void	Account::_displayTimestamp(void)
{
	std::time_t		timer;
	struct std::tm*	time_info;
	char buffer[18];

	std::time(&timer);
	time_info = std::localtime(&timer);
	std::strftime(buffer, 18, "[%Y%m%d_%H%M%S]", time_info);
	buffer[17] = '\0';
	std::cout << buffer;
}
