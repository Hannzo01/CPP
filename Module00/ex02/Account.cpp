#include <iostream>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

//shared by all acc need to be defined in .cpp wth initial values
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
	return Account::_nbAccounts; // no need to Account:: since wer already inside the Account class scope
}
int	Account::getTotalAmount()
{
	return _totalAmount;
}
int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:"<< _nbAccounts << ";";
	std::cout << "total:"<< _totalAmount << ";"; 
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:"<< _totalNbWithdrawals << ";" << std::endl;
}

void Account::_displayTimestamp()
{
	std::time_t current_time = std::time(NULL); //get current time as sec since epoch 1970
	std::tm *readable_time = std::localtime(&current_time);//convert to humn readable time format
	int year = readable_time->tm_year + 1900;// tm_year is the number of years since 1900, so we add 1900 to get the actual year 
	int month = readable_time->tm_mon + 1; //we add 1 so we got 1 - 12 instead of 0=jan 11=dec 
	int day = readable_time->tm_mday;
	int hour = readable_time->tm_hour;
	int min = readable_time->tm_min;
	int sec = readable_time->tm_sec;

	std::cout	<< std::setfill('0')
				<< "[" << year
				<< std::setw(2) << month
				<< std::setw(2) << day << "_" // 1-31
				<< std::setw(2) << hour //(0–23)
				<< std::setw(2) << min // 0-59
				<< std::setw(2) << sec
				<< "]";
}
Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	std::cout	<< " index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount = _totalAmount + _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ";" //or ';' idk
				<<	"amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount = _amount; //previous amount
	_amount = _amount + deposit;
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ";"
				<< "p_amount:" << p_amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = _amount;
	if (_amount > withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
 		_displayTimestamp();
		std::cout	<< " index:" << _accountIndex << ";"
					<< "p_amount:" << p_amount << ";"
					<< "withdrawal:" << withdrawal << ";"
					<< "amount:" << _amount << ";"
					<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout	<< " index:" << _accountIndex << ";"
					<< "p_amount:" << p_amount << ";"
					<< "withdrawal:refused" << std::endl;
					return false;
	}
}
Account::~Account()
{
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";closed" << std::endl; 
}

