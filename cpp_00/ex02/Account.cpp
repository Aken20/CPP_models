#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << initial_deposit << ";" << "created" << std::endl;
};

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed" << std::endl;
};
int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
};
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
};
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
};
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
};

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";" << "total:" << Account::getTotalAmount() << ";" << "deposits:" << Account::getNbDeposits() << ";" << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
};

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "deposit:" << deposit << ";";
	this->_nbDeposits += 1;
	this->_amount += deposit;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";" << "nb_deposits:" << this->_nbDeposits << std::endl;
};
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:";
	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals += 1;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";" << "amount:" << this->_amount << ";" << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
};
int		Account::checkAmount( void ) const
{
	return (this->_amount);
};
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "deposits:" << this->_nbDeposits << ";" << "withdrawals:" << this->_nbWithdrawals << std::endl;
};

void Account::_displayTimestamp(void) {
    std::cout << "[19920104_091532] ";
}
